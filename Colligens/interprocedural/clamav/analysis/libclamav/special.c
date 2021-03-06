//#include <stubs.h>
/*
 *  Copyright (C) 2007-2008 Sourcefire, Inc.
 *
 *  Authors: Trog, Török Edvin
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License version 2 as
 *  published by the Free Software Foundation.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *  MA 02110-1301, USA.
 */

#if HAVE_CONFIG_H
//#include "clamav-config.h"
#endif

//#include <sys/types.h>
//#include <sys/stat.h>
//#include <fcntl.h>
#ifdef	HAVE_UNISTD_H
//#include <unistd.h>
#endif
//#include <string.h>
//#include <ctype.h>
#ifndef _WIN32
//#include <netinet/in.h>
#endif
//#include "clamav.h"
//#include "others.h"
//#include "cltypes.h"
//#include "special.h"
//#include "matcher.h"

/* NOTE: Photoshop stores data in BIG ENDIAN format, this is the opposite
	to virtually everything else */

#define special_endian_convert_16(v) be16_to_host(v)
#define special_endian_convert_32(v) be32_to_host(v)

int cli_check_mydoom_log(int desc, cli_ctx *ctx)
{
	uint32_t record[8], check;
	int i, retval=CL_VIRUS, j;

    cli_dbgmsg("in cli_check_mydoom_log()\n");

    /* Check upto the first five records in the file */
    for (j=0 ; j<5 ; j++) {
	if (cli_readn(desc, &record, 32) != 32) {
	    break;
	}
	if(!j && record[0] == 0xffffffff) /* bb#1241 */
	    return CL_CLEAN;

	/* Decode the key */
	record[0] = ~ntohl(record[0]);
	cli_dbgmsg("Mydoom: key: %d\n", record[0]);
	check = 0;
	for (i=1 ; i<8; i++) {
	    record[i] = ntohl(record[i]) ^ record[0];
	    check += record[i];
	}
	cli_dbgmsg("Mydoom: check: %d\n", ~check);
	if ((~check) != record[0]) {
	    return CL_CLEAN;
	}
    }

    if (j < 2) {
	retval = CL_CLEAN;
    } else if (retval==CL_VIRUS) {
	*ctx->virname = "Heuristics.Worm.Mydoom.M.log";
    }

    return retval;
}

static int jpeg_check_photoshop_8bim(int fd, cli_ctx *ctx)
{
	unsigned char bim[5];
	uint16_t id, ntmp;
	uint8_t nlength;
	uint32_t size;
	off_t offset;
	int retval;

	if (cli_readn(fd, bim, 4) != 4) {
		cli_dbgmsg("read bim failed\n");
		return -1;
	}

	if (memcmp(bim, "8BIM", 4) != 0) {
		bim[4] = '\0';
		cli_dbgmsg("missed 8bim: %s\n", bim);
		return -1;
	}

	if (cli_readn(fd, &id, 2) != 2) {
		return -1;
	}
	id = special_endian_convert_16(id);
	cli_dbgmsg("ID: 0x%.4x\n", id);
	if (cli_readn(fd, &nlength, 1) != 1) {
		return -1;
	}
	ntmp = nlength + ((((uint16_t)nlength)+1) & 0x01);
	lseek(fd, ntmp, SEEK_CUR);
	
	if (cli_readn(fd, &size, 4) != 4) {
		return -1;
	}
	size = special_endian_convert_32(size);
	if (size == 0) {
		return -1;
	}
	if ((size & 0x01) == 1) {
		size++;
	}
	/* Is it a thumbnail image */
	if ((id != 0x0409) && (id != 0x040c)) {
		/* No - Seek past record */
		lseek(fd, size, SEEK_CUR);
		return 0;
	}

	cli_dbgmsg("found thumbnail\n");
	/* Check for thumbmail image */
	offset = lseek(fd, 0, SEEK_CUR);

	/* Jump past header */
	lseek(fd, 28, SEEK_CUR);

	retval = cli_check_jpeg_exploit(fd, ctx);
	if (retval == 1) {
		cli_dbgmsg("Exploit found in thumbnail\n");
	}
	lseek(fd, offset+size, SEEK_SET);

	return retval;
}

static int jpeg_check_photoshop(int fd, cli_ctx *ctx)
{
	int retval;
	unsigned char buffer[14];
	off_t old, new;

	if (cli_readn(fd, buffer, 14) != 14) {
		return 0;
	}

	if (memcmp(buffer, "Photoshop 3.0", 14) != 0) {
		return 0;
	}

	cli_dbgmsg("Found Photoshop segment\n");
	do {
		old = lseek(fd, 0, SEEK_CUR);
		retval = jpeg_check_photoshop_8bim(fd, ctx);
		new = lseek(fd, 0, SEEK_CUR);
		if(new <= old)
			break;
	} while (retval == 0);

	if (retval == -1) {
		retval = 0;
	}
	return retval;
}

int cli_check_jpeg_exploit(int fd, cli_ctx *ctx)
{
	unsigned char buffer[4];
	off_t offset;
	int retval;


	cli_dbgmsg("in cli_check_jpeg_exploit()\n");
	if(ctx->recursion > ctx->engine->maxreclevel)
	    return CL_EMAXREC;

	if (cli_readn(fd, buffer, 2) != 2) {
		return 0;
	}

	if ((buffer[0] != 0xff) || (buffer[1] != 0xd8)) {
		return 0;
	}

	for (;;) {
		if ((retval=cli_readn(fd, buffer, 4)) != 4) {
			return 0;
		}
		/* Check for multiple 0xFF values, we need to skip them */
		if ((buffer[0] == 0xff) && (buffer[1] == 0xff)) {
			lseek(fd, -3, SEEK_CUR);
			continue;
		}

		if ((buffer[0] == 0xff) && (buffer[1] == 0xfe)) {
			if (buffer[2] == 0x00) {
				if ((buffer[3] == 0x00) || (buffer[3] == 0x01)) {
					return 1;
				}
			}
		}
		if (buffer[0] != 0xff) {
			return -1;
		}
		if (buffer[1] == 0xda) {
			/* End of Image marker */
			return 0;
		}

		offset = ((unsigned int) buffer[2] << 8) + buffer[3];
		if (offset < 2) {
			return -1;
		}
		offset -= 2;
		offset += lseek(fd, 0, SEEK_CUR);

		if (buffer[1] == 0xed) {
			/* Possible Photoshop file */
			ctx->recursion++;
			retval=jpeg_check_photoshop(fd, ctx);
			ctx->recursion--;
			if (retval != 0)
				return retval;
		}

		if (lseek(fd, offset, SEEK_SET) != offset) {
			return -1;
		}
	}
}

static uint32_t riff_endian_convert_32(uint32_t value, int big_endian)
{
	if (big_endian)
		return be32_to_host(value);
	else
		return le32_to_host(value);
}

static int riff_read_chunk(int fd, int big_endian, int rec_level)
{
	uint32_t chunk_id;
	uint32_t chunk_size;
	int length;
	uint32_t list_type;
	off_t offset, cur_offset;

	if (rec_level > 1000) {
		cli_dbgmsg("riff_read_chunk: recursion level exceeded\n");
		return 0;
	}
	
	length = sizeof(uint32_t);
	if (cli_readn(fd, &chunk_id, length) != length) {
		return 0;
	}
	if (cli_readn(fd, &chunk_size, length) != length) {
		return 0;
	}
	chunk_size = riff_endian_convert_32(chunk_size, big_endian);

	if(!memcmp(&chunk_id, "anih", 4) && chunk_size != 36)
	    return 2;

	if (memcmp(&chunk_id, "RIFF", 4) == 0) {
		return 0;
	} else if (memcmp(&chunk_id, "RIFX", 4) == 0) {
		return 0;
	}
	
	if ((memcmp(&chunk_id, "LIST", 4) == 0) ||
		 (memcmp(&chunk_id, "PROP", 4) == 0) ||
		 (memcmp(&chunk_id, "FORM", 4) == 0) ||
		 (memcmp(&chunk_id, "CAT ", 4) == 0)) {
		if (cli_readn(fd, &list_type, sizeof(list_type)) != sizeof(list_type)) {
			cli_dbgmsg("riff_read_chunk: read list type failed\n");
			return 0;
		}
		return riff_read_chunk(fd, big_endian, ++rec_level);	
	}
	
	cur_offset = lseek(fd, 0, SEEK_CUR);
	offset = cur_offset + chunk_size;
	/* Check for odd alignment */
	if ((offset & 0x01) == 1) {
		offset++;
	}
	if (offset < cur_offset) {
		return 0;
	}
	if (lseek(fd, offset, SEEK_SET) != offset) {
		return 2;
	}
	return 1;
}

int cli_check_riff_exploit(int fd)
{
	uint32_t chunk_id;
	uint32_t chunk_size;
	uint32_t form_type;
	int length, big_endian, retval;
	off_t offset;
	
	cli_dbgmsg("in cli_check_riff_exploit()\n");

	length = sizeof(uint32_t);
	if (cli_readn(fd, &chunk_id, length) != length) {
		return 0;
	}
	if (cli_readn(fd, &chunk_size, length) != length) {
		return 0;
	}
	if (cli_readn(fd, &form_type, length) != length) {
		return 0;
	}
	
	if (memcmp(&chunk_id, "RIFF", 4) == 0) {
		big_endian = FALSE;
	} else if (memcmp(&chunk_id, "RIFX", 4) == 0) {
		big_endian = TRUE;
	} else {
		/* Not a RIFF file */
		return 0;
	}

	if (memcmp(&form_type, "ACON", 4) != 0) {
		/* Only scan MS animated icon files */
		/* There is a *lot* of broken software out there that produces bad RIFF files */
		return 0;
	}

	chunk_size = riff_endian_convert_32(chunk_size, big_endian);

	do {
		retval = riff_read_chunk(fd, big_endian, 1);
	} while (retval == 1);

	return retval;
}

static inline int swizz_j48(const uint16_t n[])
{
	cli_dbgmsg("swizz_j48: %u, %u, %u\n",n[0],n[1],n[2]);
	/* rules based on J48 tree */
	if (n[0] <= 961 || !n[1])
		return 0;
	if (n[0] <= 1006)
		return (n[2] > 0 && n[2] <= 6);
	else
		return n[1] <= 10 && n[2];
}

void cli_detect_swizz_str(const unsigned char *str, uint32_t len, struct swizz_stats *stats, int blob)
{
	unsigned char stri[4096];
        uint32_t i, j = 0;
	int bad = 0;
	int lastalnum = 0;
	uint8_t ngrams[17576];
	uint16_t all=0;
	uint16_t ngram_cnts[3];
	uint16_t words = 0;
	int ret;

	stats->entries++;
	for(i=0;i<len-1 && j < sizeof(stri)-2;i += 2) {
		unsigned char c = str[i];
		if (str[i+1] || !c) {
			bad++;
			continue;
		}
		if (!isalnum(c)) {
			if (!lastalnum)
				continue;
			lastalnum = 0;
			c = ' ';
		} else {
			lastalnum = 1;
			if (isdigit(c))
				continue;
		}
		stri[j++] = tolower(c);
	}
	stri[j++] = '\0';
	if ((!blob && (bad >= 8)) || j < 4)
		return;
	memset(ngrams, 0, sizeof(ngrams));
	memset(ngram_cnts, 0, sizeof(ngram_cnts));
	for(i=0;i<j-2;i++) {
		if (stri[i] != ' ' && stri[i+1] != ' ' && stri[i+2] != ' ') {
			uint16_t idx = (stri[i] - 'a')*676 + (stri[i+1] - 'a')*26 + (stri[i+2] - 'a');
			if (idx < sizeof(ngrams)) {
				ngrams[idx]++;
				stats->gngrams[idx]++;
			}
		} else if (stri[i] == ' ')
			words++;
	}
	for(i=0;i<sizeof(ngrams);i++) {
		uint8_t v = ngrams[i];
		if (v > 3) v = 3;
		if (v) {
			ngram_cnts[v-1]++;
			all++;
		}
	}
	if (!all)
		return;
	cli_dbgmsg("cli_detect_swizz_str: %u, %u, %u\n",ngram_cnts[0],ngram_cnts[1],ngram_cnts[2]);
	/* normalize */
	for(i=0;i<sizeof(ngram_cnts)/sizeof(ngram_cnts[0]);i++) {
		uint32_t v = ngram_cnts[i];
		ngram_cnts[i] = (v<<10)/all;
	}
	ret = swizz_j48(ngram_cnts) ? CL_VIRUS : CL_CLEAN;
	if (words < 3) ret = CL_CLEAN;
	cli_dbgmsg("cli_detect_swizz_str: %s, %u words\n", ret == CL_VIRUS ? "suspicious" : "ok", words);
	if (ret == CL_VIRUS) {
		stats->suspicious += j;
		cli_dbgmsg("cli_detect_swizz_str: %s\n", stri);
	}
	stats->total += j;
}

static inline int swizz_j48_global(const uint32_t gn[])
{
	if (gn[0] <= 24185) {
		return gn[0] > 22980 && gn[8] > 0 && gn[8] <= 97;
	}
	if (!gn[8]) {
		if (gn[4] <= 311) {
			if (!gn[4]) {
				return gn[1] > 0 &&
					((gn[0] <= 26579 && gn[3] > 0) ||
					 (gn[0] > 28672 && gn[0] <= 30506));
			}
			if (gn[5] <= 616) {
				if (gn[6] <= 104) {
					return gn[9] <= 167;
				}
				return gn[6] <= 286;
			}
		}
		return 0;
	}
	return 1;
}

int cli_detect_swizz(struct swizz_stats *stats)
{
	uint32_t gn[10];
	uint32_t all = 0;
	unsigned i;
	int global_swizz = CL_CLEAN;

	cli_dbgmsg("cli_detect_swizz: %lu/%lu, version:%d, manifest: %d \n",
			(unsigned long)stats->suspicious, (unsigned long)stats->total,
			stats->has_version, stats->has_manifest);
	memset(gn, 0, sizeof(gn));
	for(i=0;i<17576;i++) {
		uint8_t v = stats->gngrams[i];
		if (v > 10) v = 10;
		if (v) {
			gn[v-1]++;
			all++;
		}
	}
	if (all) {
		/* normalize */
		cli_dbgmsg("cli_detect_swizz: gn: ");
		for(i=0;i<sizeof(gn)/sizeof(gn[0]);i++) {
			uint32_t v = gn[i];
			gn[i] = (v<<15)/all;
			if (cli_debug_flag)
			    fprintf(stderr, "%lu, ", (unsigned long)gn[i]);
		}
		global_swizz = swizz_j48_global(gn) ? CL_VIRUS : CL_CLEAN;
		if (cli_debug_flag) {
		    fprintf(stderr, "\n");
		    cli_dbgmsg("cli_detect_swizz: global: %s\n", global_swizz ? "suspicious" : "clean");
		}
	}

	if (stats->errors > stats->entries || stats->errors >= SWIZZ_MAXERRORS) {
	    cli_dbgmsg("cli_detect_swizz: resources broken, ignoring\n");
	    return CL_CLEAN;
	}
	if (stats->total <= 337)
	    return CL_CLEAN;
	if (stats->suspicious<<10 > 40*stats->total)
	    return CL_VIRUS;
	if (!stats->suspicious)
	    return CL_CLEAN;
	return global_swizz;
}
