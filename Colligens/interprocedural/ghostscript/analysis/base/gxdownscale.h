/* Copyright (C) 2011 Artifex Software, Inc.
   All Rights Reserved.

   This software is provided AS-IS with no warranty, either express or
   implied.

   This software is distributed under license and may not be copied, modified
   or distributed except as expressly authorized under the terms of that
   license.  Refer to licensing information at http://www.artifex.com/
   or contact Artifex Software, Inc.,  7 Mt. Lassen Drive - Suite A-134,
   San Rafael, CA  94903, U.S.A., +1(415)492-9861, for further information.
*/

#ifndef gxdownscale_INCLUDED
#define gxdownscale_INCLUDED

//#include "ctype_.h"
//#include "gsmemory.h"
//#include "gstypes.h"
//#include "gxdevcli.h"

/* The following structure definitions should really be considered
 * private, and are exposed here only because it enables us to define
 * gx_downscaler_t's on the stack, thus avoiding mallocs.
 */

typedef struct gx_downscaler_s gx_downscaler_t;

typedef void (gx_downscale_core)(gx_downscaler_t *ds,
                                 byte            *out_buffer,
                                 int              row);

struct gx_downscaler_s {
    gx_device         *dev;      /* Device */
    int                width;    /* Width (pixels) */
    int                awidth;   /* Adjusted width (pixels) */
    int                span;     /* Num bytes in downscale buffer scanline */
    int                factor;   /* Factor to downscale */
    byte              *mfs_data; /* MinFeatureSize data */
    int               *errors;   /* Error diffusion table */
    byte              *data;     /* Downscaling buffer */
    gx_downscale_core *down_core;
};

/* To use the downscaler:
 *
 *  + define a gx_downscaler_t on the stack.
 *  + initialise it with gx_downscaler_init
 *  + repeatedly call gx_downscaler_get_lines (or
 *    gx_downscaler_copy_scan_lines)
 *  + finalise with gx_downscaler_fin
 */
 
/* Currently only:
 *   src_bpc == 8 && dst_bpc == 1 && num_comps == 1
 *   src_bpc == 8 && dst_bpc == 8 && num_comps == 1
 *   src_bpc == 8 && dst_bpc == 8 && num_comps == 3
 * are supported. mfs is ignored for all except the first of these.
 */
int gx_downscaler_init(gx_downscaler_t   *ds,
                       gx_device         *dev,
                       int                src_bpc,
                       int                dst_bpc,
                       int                num_comps,
                       int                factor,
                       int                mfs,
                       int              (*adjust_width_proc)(int, int),
                       int 				  adjust_width);

int gx_downscaler_getbits(gx_downscaler_t *ds,
                          byte            *out_data,
                          int              row);

/* Must only fin a device that has been inited (though you can safely
 * fin several times) */
void gx_downscaler_fin(gx_downscaler_t *ds);

/* A deliberate analogue to gdev_prn_copy_scan_lines, which despite being
 * deprecated is still massively popular. */
int
gx_downscaler_copy_scan_lines(gx_downscaler_t *ds, int y,
                              byte *str, uint size);

#endif
