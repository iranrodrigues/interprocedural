/* Copyright (C) 2001-2009 Artifex Software, Inc.
   All Rights Reserved.

   This software is provided AS-IS with no warranty, either express or
   implied.

   This software is distributed under license and may not be copied, modified
   or distributed except as expressly authorized under the terms of that
   license.  Refer to licensing information at http://www.artifex.com/
   or contact Artifex Software, Inc.,  7 Mt. Lassen Drive - Suite A-134,
   San Rafael, CA  94903, U.S.A., +1(415)492-9861, for further information.
*/
/*  GS ICC link cache.  Initial stubbing of functions.  */

//#include "std.h"
//#include "stdpre.h"
//#include "gstypes.h"
//#include "gsmemory.h"
//#include "gsstruct.h"
//#include "scommon.h"
//#include "gx.h"
//#include "gxistate.h"
//#include "smd5.h"
//#include "gscms.h"
//#include "gsicc_cms.h"
//#include "gsicc_manage.h"
//#include "gsicc_cache.h"
//#include "gserrors.h"
//#include "gsmalloc.h" /* Needed for named color structure allocation */
//#include "string_.h"  /* Needed for named color structure allocation */
//#include "gxsync.h"
//#include "gzstate.h"
        /*
         *  Note that the the external memory used to maintain
         *  links in the CMS is generally not visible to GS.
         *  For most CMS's the  links are 33x33x33x33x4 bytes at worst
         *  for a CMYK to CMYK MLUT which is about 4.5Mb per link.
         *  If the link were matrix based it would be much much smaller.
         *  We will likely want to do at least have an estimate of the
         *  memory used based upon how the CMS is configured.
         *  This will be done later.  For now, just limit the number
         *  of links.
         */
#define ICC_CACHE_MAXLINKS 50

/* Static prototypes */

static gsicc_link_t * gsicc_alloc_link(gs_memory_t *memory, gsicc_hashlink_t hashcode);

static void gsicc_get_cspace_hash(gsicc_manager_t *icc_manager, gx_device *dev,
                                  cmm_profile_t *profile, int64_t *hash);

static void gsicc_compute_linkhash(gsicc_manager_t *icc_manager, gx_device *dev,
                                   cmm_profile_t *input_profile,
                                   cmm_profile_t *output_profile,
                                   gsicc_rendering_param_t *rendering_params,
                                   gsicc_hashlink_t *hash);

static gsicc_link_t* gsicc_find_zeroref_cache(gsicc_link_cache_t *icc_link_cache);

static void gsicc_remove_link(gsicc_link_t *link, gs_memory_t *memory);

static void gsicc_get_buff_hash(unsigned char *data, int64_t *hash, unsigned int num_bytes);

static void rc_gsicc_link_cache_free(gs_memory_t * mem, void *ptr_in, client_name_t cname);

/* Structure pointer information */

//gs_private_st_ptrs4(st_icc_link, gsicc_link_t, "gsiccmanage_link",
//                    icc_link_enum_ptrs, icc_link_reloc_ptrs,
//                    contextptr, icc_link_cache, next, wait);

//gs_private_st_ptrs3(st_icc_linkcache, gsicc_link_cache_t, "gsiccmanage_linkcache",
//                    icc_linkcache_enum_ptrs, icc_linkcache_reloc_ptrs,
//                    head, lock, wait);

/* These are used to construct a hash for the ICC link based upon the
   render parameters */

#define BP_SHIFT 0
#define REND_SHIFT 8
#define TYPE_SHIFT 16

/**
 * gsicc_cache_new: Allocate a new ICC cache manager
 * Return value: Pointer to allocated manager, or NULL on failure.
 **/

gsicc_link_cache_t *
gsicc_cache_new(gs_memory_t *memory)
{
    gsicc_link_cache_t *result;

    /* We want this to be maintained in stable_memory.  It should be be effected by the
       save and restores */
    result = gs_alloc_struct(memory->stable_memory, gsicc_link_cache_t, &st_icc_linkcache,
                             "gsicc_cache_new");
    if ( result == NULL )
        return(NULL);
    result->lock = gx_monitor_alloc(memory->stable_memory);
    result->wait = gx_semaphore_alloc(memory->stable_memory);
    if (result->lock == NULL || result->wait == NULL) {
        gs_free_object(memory->stable_memory, result, "gsicc_cache_new");
        return(NULL);
    }
    result->num_waiting = 0;
    rc_init_free(result, memory->stable_memory, 1, rc_gsicc_link_cache_free);
    result->head = NULL;
    result->num_links = 0;
    result->memory = memory->stable_memory;
    if_debug2(gs_debug_flag_icc,"[icc] Allocating link cache = 0x%x memory = 0x%x\n", result,
        result->memory);
    return(result);
}

static void
rc_gsicc_link_cache_free(gs_memory_t * mem, void *ptr_in, client_name_t cname)
{
    /* Ending the entire cache.  The ref counts on all the links should be 0 */
    gsicc_link_cache_t *link_cache = (gsicc_link_cache_t * ) ptr_in;

    while (link_cache->head != NULL) {
        gsicc_remove_link(link_cache->head, mem);
        link_cache->num_links--;
    }
#ifdef DEBUG
    if (link_cache->num_links != 0) {
        eprintf1("num_links is %d, should be 0.\n", link_cache->num_links);
    }
#endif
    gx_semaphore_free(link_cache->wait);
    gx_monitor_free(link_cache->lock);
    if_debug2(gs_debug_flag_icc,"[icc] Removing link cache = 0x%x memory = 0x%x\n", link_cache,
        link_cache->memory);
    gs_free_object(mem->stable_memory, link_cache, "rc_gsicc_link_cache_free");
}

static gsicc_link_t *
gsicc_alloc_link(gs_memory_t *memory, gsicc_hashlink_t hashcode)
{
    gsicc_link_t *result;
    gx_semaphore_t *wait;

    /* The link has to be added in stable memory. We want them
       to be maintained across the gsave and grestore process */
    result = gs_alloc_struct(memory->stable_memory, gsicc_link_t, &st_icc_link,
                             "gsicc_alloc_link");
    wait = gx_semaphore_alloc(memory->stable_memory);
    if (wait == NULL) {
        gs_free_object(memory, result, "gsicc_alloc_link(wait)");
        result = NULL;
    }
    if (result != NULL) {
        /* set up placeholder values */
        result->next = NULL;
        result->contextptr = NULL;
        result->link_handle = NULL;
        result->procs.map_buffer = gscms_transform_color_buffer;
        result->procs.map_color = gscms_transform_color;
        result->procs.free_link = gscms_release_link;
        result->hashcode.link_hashcode = hashcode.link_hashcode;
        result->hashcode.des_hash = 0;
        result->hashcode.src_hash = 0;
        result->hashcode.rend_hash = 0;
        result->ref_count = 1;		/* prevent it from being freed */
        result->includes_softproof = 0;
        result->includes_devlink = 0;
        result->is_identity = false;
        result->valid = false;		/* not yet complete */
        result->num_waiting = 0;
        result->wait = wait;
    }
    return(result);
}

void
gsicc_set_link_data(gsicc_link_t *icc_link, void *link_handle, void *contextptr,
               gsicc_hashlink_t hashcode, gx_monitor_t *lock, 
               bool includes_softproof, bool includes_devlink)
{
    gx_monitor_enter(lock);		/* lock the cache while changing data */
    icc_link->contextptr = contextptr;
    icc_link->link_handle = link_handle;
    icc_link->hashcode.link_hashcode = hashcode.link_hashcode;
    icc_link->hashcode.des_hash = hashcode.des_hash;
    icc_link->hashcode.src_hash = hashcode.src_hash;
    icc_link->hashcode.rend_hash = hashcode.rend_hash;
    icc_link->includes_softproof = includes_softproof;
    icc_link->includes_devlink = includes_devlink;
    if ( (hashcode.src_hash == hashcode.des_hash) &&
          !includes_softproof && !includes_devlink) {
        icc_link->is_identity = true;
    } else {
        icc_link->is_identity = false;
    }
    icc_link->valid = true;

    /* Now release any tasks/threads waiting for these contents */
    while (icc_link->num_waiting > 0) {
        gx_semaphore_signal(icc_link->wait);
        icc_link->num_waiting--;
    }
    gx_monitor_leave(lock);	/* done with updating, let everyone run */
}

void
gsicc_link_free(gsicc_link_t *icc_link, gs_memory_t *memory)
{
    icc_link->procs.free_link(icc_link);
    gx_semaphore_free(icc_link->wait);
    gs_free_object(memory->stable_memory, icc_link, "gsicc_link_free");
}

static void
gsicc_mash_hash(gsicc_hashlink_t *hash)
{
    hash->link_hashcode =
        (hash->des_hash >> 1) ^ (hash->rend_hash) ^ (hash->src_hash);
}

void
gsicc_get_icc_buff_hash(unsigned char *buffer, int64_t *hash, unsigned int buff_size)
{
    gsicc_get_buff_hash(buffer, hash, buff_size);
}

static void
gsicc_get_buff_hash(unsigned char *data, int64_t *hash, unsigned int num_bytes)
{
    gs_md5_state_t md5;
    byte digest[16];
    int k;
    int64_t word1,word2,shift;

   /* We could probably do something faster than this. But use this for now. */
    gs_md5_init(&md5);
    gs_md5_append(&md5, data, num_bytes);
    gs_md5_finish(&md5, digest);

    /* For now, xor this into 64 bit word */
    word1 = 0;
    word2 = 0;
    shift = 0;

    /* need to do it this way because of
       potential word boundary issues */
    for( k = 0; k<8; k++) {
       word1 += ((int64_t) digest[k]) << shift;
       word2 += ((int64_t) digest[k+8]) << shift;
       shift += 8;
    }
    *hash = word1 ^ word2;
}

/* Compute a hash code for the current transformation case.
    This just computes a 64bit xor of upper and lower portions of
    md5 for the input, output
    and rendering params structure.  We may change this later */

static void
gsicc_compute_linkhash(gsicc_manager_t *icc_manager, gx_device *dev,
                       cmm_profile_t *input_profile,
                       cmm_profile_t *output_profile,
                       gsicc_rendering_param_t *rendering_params,
                       gsicc_hashlink_t *hash)
{
   /* first get the hash codes for the color spaces */
    gsicc_get_cspace_hash(icc_manager, dev, input_profile, &(hash->src_hash));
    gsicc_get_cspace_hash(icc_manager, dev, output_profile, &(hash->des_hash));

    /* now for the rendering paramaters, just use the word itself */
    hash->rend_hash = ((rendering_params->black_point_comp) << BP_SHIFT) +
                      ((rendering_params->rendering_intent) << REND_SHIFT) +
                      ((rendering_params->graphics_type_tag) << TYPE_SHIFT);

   /* for now, mash all of these into a link hash */
   gsicc_mash_hash(hash);
}

static void
gsicc_get_cspace_hash(gsicc_manager_t *icc_manager, gx_device *dev,
                      cmm_profile_t *cmm_icc_profile_data, int64_t *hash)
{
    cmm_dev_profile_t *dev_profile;
    cmm_profile_t *icc_profile;
    gsicc_rendering_intents_t rendering_intent;
    int code;

    if (cmm_icc_profile_data == NULL ) {
        code = dev_proc(dev, get_profile)(dev,  &dev_profile);
        gsicc_extract_profile(dev->graphics_type_tag, dev_profile,
                               &(icc_profile), &rendering_intent);
        *hash = icc_profile->hashcode;
        return;
    }
    if (cmm_icc_profile_data->hash_is_valid ) {
        *hash = cmm_icc_profile_data->hashcode;
        return;
    } else {
        /* We need to compute for this color space */
        gsicc_get_icc_buff_hash(cmm_icc_profile_data->buffer, hash,
                                cmm_icc_profile_data->buffer_size);
        cmm_icc_profile_data->hashcode = *hash;
        cmm_icc_profile_data->hash_is_valid = true;
        return;
    }
}

gsicc_link_t*
gsicc_findcachelink(gsicc_hashlink_t hash, gsicc_link_cache_t *icc_link_cache, 
                    bool includes_proof, bool includes_devlink)
{
    gsicc_link_t *curr, *prev;
    int64_t hashcode = hash.link_hashcode;

    /* Look through the cache for the hashcode */
    gx_monitor_enter(icc_link_cache->lock);

    /* List scanning is fast, so we scan the entire list, this includes   */
    /* links that are currently unused, but still in the cache (zero_ref) */
    curr = icc_link_cache->head;
    prev = NULL;

    while (curr != NULL ) {
        if (curr->hashcode.link_hashcode == hashcode && 
            includes_proof == curr->includes_softproof &&
            includes_devlink == curr->includes_devlink) {
            /* move this one to the front of the list hoping we will use it 
               again soon */
            if (prev != NULL) {		
                /* if prev == NULL, curr is already the head */
                prev->next = curr->next;
                curr->next = icc_link_cache->head;
                icc_link_cache->head = curr;
            }
            curr->ref_count++;		
            /* bump the ref_count since we will be using this one */
            while (curr->valid == false) {
                curr->num_waiting++;
                gx_monitor_leave(icc_link_cache->lock);
                gx_semaphore_wait(curr->wait);
                gx_monitor_enter(icc_link_cache->lock);	/* re-enter breifly */
            }
            gx_monitor_leave(icc_link_cache->lock);
            return(curr);	/* success */
        }
        prev = curr;
        curr = curr->next;
    }
    gx_monitor_leave(icc_link_cache->lock);
    return(NULL);
}

/* Find entry with zero ref count and remove it */
/* lock the cache during this time for multi-threaded case */
/* This may release links waiting for an icc_link_cache slot */
static gsicc_link_t*
gsicc_find_zeroref_cache(gsicc_link_cache_t *icc_link_cache)
{
    gsicc_link_t *curr = NULL;

    /* Look through the cache for first zero ref count */
    /* when ref counts go to zero, the icc_link is moved to the */
    /* end of the list, so the first we find is the 'oldest'.
       If we get to the last entry we return NULL.  At that point
       there are no slots available and the thread should be
       put into a wait state.  Since most threads have at most 1 active
       link at anyone time, this will not be an issue for a single-threaded
       case. */

    curr = icc_link_cache->head;
    while (curr != NULL ) {
        if (curr->ref_count == 0) {
            curr->ref_count++;		/* we will use this one */
            break;
        }
        curr = curr->next;
    }
    return(curr);
}

/* Remove link from cache.  Notify CMS and free */
static void
gsicc_remove_link(gsicc_link_t *link, gs_memory_t *memory)
{
    gsicc_link_t *curr, *prev;
    gsicc_link_cache_t *icc_link_cache = link->icc_link_cache;

    if_debug2(gs_debug_flag_icc,"[icc] Removing link = 0x%x memory = 0x%x\n", link,
        memory->stable_memory);
    /* NOTE: link->ref_count must be 0: assert ? */
    gx_monitor_enter(icc_link_cache->lock);
    curr = icc_link_cache->head;
    prev = NULL;

    while (curr != NULL ) {
        if (curr == link) {
            /* remove this one from the list */
            if (prev == NULL)
                icc_link_cache->head = curr->next;
            else
                prev->next = curr->next;
            break;
        }
        prev = curr;
        curr = curr->next;
    }
    /* if curr != link we didn't find it: assert ? */
    gx_monitor_leave(icc_link_cache->lock);
    gsicc_link_free(link, memory);	/* outside link */
}

gsicc_link_t*
gsicc_get_link(const gs_imager_state *pis, gx_device *dev_in,
               const gs_color_space *pcs_in,
               gs_color_space *output_colorspace,
               gsicc_rendering_param_t *rendering_params, gs_memory_t *memory)
{
    cmm_profile_t *gs_input_profile;
    cmm_profile_t *gs_srcgtag_profile = NULL;
    cmm_profile_t *gs_output_profile;
    gs_state *pgs;
    gx_device *dev;
    gsicc_rendering_intents_t rendering_intent;
    bool use_src_intent = false;
    cmm_dev_profile_t *dev_profile;
    int code;
    bool devicegraytok;
    gs_color_space *input_colorspace = (gs_color_space*) pcs_in;

    if (dev_in == NULL) {
        /* Get from the imager state which is going to be a graphic state.
           This only occurs for the other (non-ps/pdf) interpreters */
        pgs = (gs_state*) pis;
        dev = pgs->device;
    } else {
        dev = dev_in;
    }
    if ( input_colorspace->cmm_icc_profile_data == NULL ) {
        /* Use default type */
        gs_input_profile = gsicc_get_gscs_profile(input_colorspace, pis->icc_manager);
    } else {
        gs_input_profile = input_colorspace->cmm_icc_profile_data;
    }
    /* If present, use an graphic object defined source profile */
    if (pis->icc_manager != NULL && 
        pis->icc_manager->srcgtag_profile != NULL) {
            if (gs_input_profile->data_cs == gsRGB
                || gs_input_profile->data_cs == gsCMYK) {
                    gsicc_get_srcprofile(gs_input_profile->data_cs,
                                      dev->graphics_type_tag,
                                      pis->icc_manager->srcgtag_profile,
                                      &(gs_srcgtag_profile), &rendering_intent);
                if (gs_srcgtag_profile != NULL) {
                    /* In this case, the user is letting the source profiles
                       drive the color management.  Let that set the 
                       rendering intent too as they must know what they 
                       are doing. */
                    gs_input_profile = gs_srcgtag_profile;
                    rendering_params->rendering_intent = rendering_intent; 
                    use_src_intent = true;
                }
            }
    }
    if (output_colorspace != NULL) {
        gs_output_profile = output_colorspace->cmm_icc_profile_data;
        devicegraytok = false;
    } else {
        /* Use the device profile. Only use the rendering intent if override_ri
           is set. Note that this can conflict with intents set from the source
           objects so the user needs to understand what options to set.  */
        gs_color_space_index index = 
                            gsicc_get_default_type(gs_input_profile);
        code = dev_proc(dev, get_profile)(dev,  &dev_profile);
        /* Check for unmanaged color case */
        if (index < gs_color_space_index_DevicePixel && 
            dev_profile->usefastcolor) {
            /* Return a "link" from the source space to the device color space */
            gsicc_link_t *link = gsicc_nocm_get_link(pis, dev, index);
            if (link != NULL) {
                if (gs_input_profile->num_comps == 
                    dev_profile->device_profile[0]->num_comps) {
                    link->is_identity = true;
                }
                return link;
            }
        }
        gsicc_extract_profile(dev->graphics_type_tag, dev_profile,
                               &(gs_output_profile), &rendering_intent);
        /* Check if the incoming rendering itent was source based
           (this can occur for high level images in the clist) in
           that case we need to use the source ri and not the device one */
        if (!(rendering_params->rendering_intent & gsRI_OVERRIDE)) {
            if (pis->icc_manager != NULL && pis->icc_manager->override_ri == true) {
                rendering_params->rendering_intent = rendering_intent;      
            }
        }
        devicegraytok = dev_profile->devicegraytok;
    }
    /* If we are going from DeviceGray to DeviceCMYK and devicegraytok
       is true then use the ps_gray and ps_cmyk profiles instead of these
       profiles */
    rendering_params->rendering_intent = rendering_params->rendering_intent & gsRI_MASK;
    return(gsicc_get_link_profile(pis, dev, gs_input_profile, gs_output_profile,
                    rendering_params, memory, devicegraytok));
}

/* This operation of adding in a new link entry is actually shared amongst
   different functions that can each add an entry.  For example, entrys may
   come from the CMM or they may come from the non color managed approach 
   (i.e. gsicc_nocm_get_link) */
bool
gsicc_alloc_link_entry(gsicc_link_cache_t *icc_link_cache, 
                       gsicc_link_t **ret_link, gsicc_hashlink_t hash,
                       bool include_softproof, bool include_devlink)
{
    gs_memory_t *cache_mem = icc_link_cache->memory;
    gsicc_link_t *link;

    /* First see if we can add a link */
    /* TODO: this should be based on memory usage, not just num_links */
    gx_monitor_enter(icc_link_cache->lock);
    while (icc_link_cache->num_links >= ICC_CACHE_MAXLINKS) {
        /* If not, see if there is anything we can remove from cache. */
        while ((link = gsicc_find_zeroref_cache(icc_link_cache)) == NULL) {
            icc_link_cache->num_waiting++;
            /* safe to unlock since above will make sure semaphore is signalled */
            gx_monitor_leave(icc_link_cache->lock);
            /* we get signalled (released from wait) when a link goes to zero ref */
            gx_semaphore_wait(icc_link_cache->wait);
            /* repeat the findcachelink to see if some other thread has	*/
            /*already started building the link	we need			*/
            *ret_link = gsicc_findcachelink(hash, icc_link_cache, 
                                            include_softproof, include_devlink);
            /* Got a hit, return link (ref_count for the link was already bumped */
            if (*ret_link != NULL)
                return true;  
            gx_monitor_enter(icc_link_cache->lock);	    /* restore the lock */
            /* we will re-test the num_links above while locked to insure */
            /* that some other thread didn't grab the slot and max us out */
        }
        /* Remove the zero ref_count link profile we found.		*/
        /* Even if we remove this link, we may still be maxed out so	*/
        /* the outermost 'while' will check to make sure some other	*/
        /* thread did not grab the one we remove.			*/
        gsicc_remove_link(link, cache_mem);
        icc_link_cache->num_links--;
    }
    /* insert an empty link that we will reserve so we */
    /* can unlock while building the link contents     */
    (*ret_link) = gsicc_alloc_link(cache_mem->stable_memory, hash);
    (*ret_link)->icc_link_cache = icc_link_cache;
    (*ret_link)->next = icc_link_cache->head;
    icc_link_cache->head = *ret_link;
    icc_link_cache->num_links++;
    /* now that we own this link we can release 
       the lock since it is not valid */
    gx_monitor_leave(icc_link_cache->lock);
    return false;
}

/* This is the main function called to obtain a linked transform from the ICC 
   cache If the cache has the link ready, it will return it.  If not, it will 
   request one from the CMS and then return it.  We may need to do some cache 
   locking during this process to avoid multi-threaded issues (e.g. someone 
   deleting while someone is updating a reference count) */
gsicc_link_t*
gsicc_get_link_profile(const gs_imager_state *pis, gx_device *dev,
                       cmm_profile_t *gs_input_profile,
                       cmm_profile_t *gs_output_profile,
                       gsicc_rendering_param_t *rendering_params,
                       gs_memory_t *memory, bool devicegraytok)
{
    gsicc_hashlink_t hash;
    gsicc_link_t *link, *found_link;
    gcmmhlink_t link_handle = NULL;
    void **contextptr = NULL;
    gsicc_manager_t *icc_manager = pis->icc_manager;
    gsicc_link_cache_t *icc_link_cache = pis->icc_link_cache;
    gs_memory_t *cache_mem = pis->icc_link_cache->memory;
    gcmmhprofile_t *cms_input_profile;
    gcmmhprofile_t *cms_output_profile;
    gcmmhprofile_t *cms_proof_profile = NULL;
    gcmmhprofile_t *cms_devlink_profile = NULL;
    int code;
    bool include_softproof = false;
    bool include_devicelink = false;
    cmm_dev_profile_t *dev_profile;
    cmm_profile_t *proof_profile = NULL;
    cmm_profile_t *devlink_profile = NULL;

    /* Determine if we are using a soft proof or device link profile */
    if (dev != NULL ) {
        code = dev_proc(dev, get_profile)(dev,  &dev_profile);
        if (dev_profile != NULL) {
            proof_profile = dev_profile->proof_profile;
            devlink_profile = dev_profile->link_profile;
        }
        if (proof_profile != NULL ) include_softproof = true;
        if (devlink_profile != NULL) include_devicelink = true;
    }
    /* First compute the hash code for the incoming case.  If the output color 
       space is NULL we will use the device profile for the output color space */
    gsicc_compute_linkhash(icc_manager, dev, gs_input_profile, gs_output_profile,
                            rendering_params, &hash);
    /* Check the cache for a hit.  Need to check if softproofing was used */
    found_link = gsicc_findcachelink(hash, icc_link_cache, include_softproof,
                                     include_devicelink);
    /* Got a hit, return link (ref_count for the link was already bumped */
    if (found_link != NULL) {
        if_debug2(gs_debug_flag_icc, "[icc] Found Link = 0x%x, hash = %I64d \n", 
                  found_link, hash.link_hashcode);
        if_debug2(gs_debug_flag_icc, "[icc] input_numcomps = %d, input_hash = %I64d \n",
                  gs_input_profile->num_comps, gs_input_profile->hashcode);
        if_debug2(gs_debug_flag_icc, "[icc] output_numcomps = %d, output_hash = %I64d \n",
                  gs_output_profile->num_comps, gs_output_profile->hashcode);
        return(found_link);
    }
    /* If not, then lets create a new one if there is room. This may actually 
       return a link if another thread has already created it */
    if (gsicc_alloc_link_entry(icc_link_cache, &link, hash, include_softproof,
                               include_devicelink)) 
        return link;
    /* Now compute the link contents */
    cms_input_profile = gs_input_profile->profile_handle;
    if (cms_input_profile == NULL) {
        if (gs_input_profile->buffer != NULL) {
            cms_input_profile =
                gsicc_get_profile_handle_buffer(gs_input_profile->buffer,
                                                gs_input_profile->buffer_size);
            gs_input_profile->profile_handle = cms_input_profile;
        } else {
            /* See if we have a clist device pointer. */
            if ( gs_input_profile->dev != NULL ) {
                /* ICC profile should be in clist. This is
                   the first call to it.  Note that the profiles are not
                   really shared amongst threads like the links are.  Hence
                   the memory is for the local thread's chunk */
                cms_input_profile =
                    gsicc_get_profile_handle_clist(gs_input_profile,
                                                   gs_input_profile->memory);
                gs_input_profile->profile_handle = cms_input_profile;
            } else {
                /* Cant create the link.  No profile present,
                   nor any defaults to use for this.  Really
                   need to throw an error for this case. */
                gsicc_remove_link(link, cache_mem);
                icc_link_cache->num_links--;
                return(NULL);
            }
        }
    }
    cms_output_profile = gs_output_profile->profile_handle;
    if (cms_output_profile == NULL) {
        if (gs_output_profile->buffer != NULL) {
            cms_output_profile =
                gsicc_get_profile_handle_buffer(gs_output_profile->buffer,
                                                gs_output_profile->buffer_size);
            gs_output_profile->profile_handle = cms_output_profile;
        } else {
              /* See if we have a clist device pointer. */
            if ( gs_output_profile->dev != NULL ) {
                /* ICC profile should be in clist. This is
                   the first call to it. */
                cms_output_profile =
                    gsicc_get_profile_handle_clist(gs_output_profile,
                                                   gs_output_profile->memory);
                gs_output_profile->profile_handle = cms_output_profile;
            } else {
                /* Cant create the link.  No profile present,
                   nor any defaults to use for this.  Really
                   need to throw an error for this case. */
                gsicc_remove_link(link, cache_mem);
                icc_link_cache->num_links--;
                return(NULL);
            }
        }
    }
    if (include_softproof) {
        cms_proof_profile = proof_profile->profile_handle;
        if (cms_proof_profile == NULL) {
            if (proof_profile->buffer != NULL) {
                cms_proof_profile =
                    gsicc_get_profile_handle_buffer(proof_profile->buffer,
                                                    proof_profile->buffer_size);
                proof_profile->profile_handle = cms_proof_profile;
                gx_monitor_enter(proof_profile->lock);
            } else {
                /* Cant create the link */
                gsicc_remove_link(link, cache_mem);
                icc_link_cache->num_links--;
                return(NULL);
            }
        }
    }
    if (include_devicelink) {
        cms_devlink_profile = devlink_profile->profile_handle;
        if (cms_devlink_profile == NULL) {
            if (devlink_profile->buffer != NULL) {
                cms_devlink_profile =
                    gsicc_get_profile_handle_buffer(devlink_profile->buffer,
                                                    devlink_profile->buffer_size);
                devlink_profile->profile_handle = cms_devlink_profile;
                gx_monitor_enter(devlink_profile->lock);
            } else {
                /* Cant create the link */
                gsicc_remove_link(link, cache_mem);
                icc_link_cache->num_links--;
                return(NULL);
            }
        }
    }
    /* Profile reading of same structure not thread safe in lcms */
    gx_monitor_enter(gs_input_profile->lock);
    gx_monitor_enter(gs_output_profile->lock);
    /* We may have to worry about special handling for DeviceGray to
       DeviceCMYK to ensure that Gray is mapped to K only.  This is only
       done once and then it is cached and the link used */
    if (gs_output_profile->data_cs == gsCMYK && 
        gs_input_profile->data_cs == gsGRAY && pis->icc_manager != NULL &&
        devicegraytok) {
        if (icc_manager->graytok_profile == NULL) {
            icc_manager->graytok_profile =
                gsicc_set_iccsmaskprofile(GRAY_TO_K, strlen(GRAY_TO_K), 
                pis->icc_manager, pis->icc_manager->memory->stable_memory);
                if (icc_manager->graytok_profile == NULL) {
                    return NULL;
                }
        }
        if (icc_manager->smask_profiles == NULL) {
            code = gsicc_initialize_iccsmask(icc_manager);
        }
        cms_input_profile = 
            icc_manager->smask_profiles->smask_gray->profile_handle;
        cms_output_profile = 
            icc_manager->graytok_profile->profile_handle;
    }
    /* Get the link with the proof and or device link profile */
    if (include_softproof || include_devicelink) {
        link_handle = gscms_get_link_proof_devlink(cms_input_profile,
                                                   cms_proof_profile,
                                                   cms_output_profile,
                                                   cms_devlink_profile,
                                                   rendering_params);
        if (include_softproof) {
            gx_monitor_leave(proof_profile->lock);
        }
        if (include_devicelink) {
            gx_monitor_leave(devlink_profile->lock);
        }
    } else {
        link_handle = gscms_get_link(cms_input_profile, cms_output_profile,
                                        rendering_params);
    }
    gx_monitor_leave(gs_output_profile->lock);
    gx_monitor_leave(gs_input_profile->lock);
    if (link_handle != NULL) {
        gsicc_set_link_data(link, link_handle, contextptr, hash,
                            icc_link_cache->lock, include_softproof,
                            include_devicelink);
        if_debug2(gs_debug_flag_icc,"[icc] New Link = 0x%x, hash = %I64d \n", 
                  link, hash.link_hashcode);
        if_debug2(gs_debug_flag_icc,"[icc] input_numcomps = %d, input_hash = %I64d \n",
                  gs_input_profile->num_comps, gs_input_profile->hashcode);
        if_debug2(gs_debug_flag_icc,"[icc] output_numcomps = %d, output_hash = %I64d \n",
                  gs_output_profile->num_comps, gs_output_profile->hashcode);
    } else {
        gsicc_remove_link(link, cache_mem);
        icc_link_cache->num_links--;
        return(NULL);
    }
    return(link);
}

/* The following is used to transform a named color value at a particular tint
   value to the output device values.  This function is provided only as a
   demonstration and will likely need to be altered and optimized for those wishing
   to perform full spot color look-up support.

   The object used to perform the transformation is typically
   a look-up table that contains the spot color name and a CIELAB value for
   100% colorant (it could also contain device values in the table).
   It can be more complex where-by you have a 1-D lut that
   provides CIELAB values or direct device values as a function of tint.  In
   such a case, the table would be interpolated to compute all possible tint values.
   If CIELAB values are provided, they can be pushed through the
   device profile using the CMM.  In this particular demonstration, we simply
   provide CIELAB for a few color names in the file
   toolbin/color/named_color/named_color_table.txt .
   The tint value is used to scale the CIELAB value from 100% colorant to a D50
   whitepoint.  The resulting CIELAB value is then pushed through the CMM to
   obtain device values for the current device.  The file named_colors.pdf
   which is in toolbin/color/named_color/ contains these
   spot colors and will enable the user to see how the code behaves.  The named
   color table is specified to ghostscript by the command line option
   -sNamedProfile=./toolbin/color/named_color/named_color_table.txt (or with
   full path name).  If it is desired to have ghostscript compiled with the
   named color table, it can be placed in the iccprofiles directory and then
   build ghostscript with COMPILE_INITS=1.  When specified the file contents
   are pointed to by the buffer member variable of the device_named profile in
   profile manager.  When the first call occurs in here, the contents of the
   buffer are parsed and placed into a custom stucture that is pointed to by
   the profile pointer.  Note that this pointer is not visible to the garbage
   collector and should be allocated in non-gc memory as is demonstrated in
   this sample.

   Note that there are calls defined in gsicc_littlecms.c that will create link
   transforms between Named Color ICC profiles and the output device.  Such
   profiles are rarely used (at least I have not run across any yet) so the
   code is currently not used.  Also note that for those serious about named
   color support, a cache as well as efficient table-look-up methods would
   likely be important for performance.

   Finally note that PANTONE is a registered trademark and PANTONE colors are a
   licensed product of XRITE Inc. See http://www.pantone.com
   for more information.  Licensees of Pantone color libraries or similar
   libraries should find it straight forward to interface.  Pantone names are
   referred to in named_color_table.txt and contained in the file named_colors.pdf.

   !!!!IT WILL BE NECESSARY TO PERFORM THE PROPER DEALLOCATION
       CLEAN-UP OF THE STRUCTURES WHEN rc_free_icc_profile OCCURS FOR THE NAMED
       COLOR PROFILE!!!!!!

*/

/* Define the demo structure and function for named color look-up */

typedef struct gsicc_namedcolor_s {
    char *colorant_name;            /* The name */
    unsigned int name_size;         /* size of name */
    unsigned short lab[3];          /* CIELAB D50 values */
} gsicc_namedcolor_t;

typedef struct gsicc_namedcolortable_s {
    gsicc_namedcolor_t *named_color;    /* The named color */
    unsigned int number_entries;        /* The number of entries */
} gsicc_namedcolortable_t;

/* Support functions for parsing buffer */

static int
get_to_next_line(char **buffptr, int *buffer_count)
{
    while (1) {
        if (**buffptr == ';') {
            (*buffptr)++;
            (*buffer_count)--;
            return(0);
        } else {
            (*buffptr)++;
            (*buffer_count)--;
        }
        if (*buffer_count <= 0) {
            return -1;
        }
    }
}

/* Function returns -1 if name not found.  Otherwise transform the color. */
int
gsicc_transform_named_color(float tint_value, byte *color_name, uint name_size,
                            gx_color_value device_values[],
                            const gs_imager_state *pis, gx_device *dev,
                            cmm_profile_t *gs_output_profile,
                            gsicc_rendering_param_t *rendering_params)
{

    gsicc_namedcolor_t *namedcolor_data;
    unsigned int num_entries;
    cmm_profile_t *named_profile;
    gsicc_namedcolortable_t *namedcolor_table;
    int k,j;
    float lab[3];
    char *buffptr;
    int buffer_count;
    int count;
    int code;
    char *pch, *temp_ptr;
    bool done;
    int curr_name_size;
    bool found_match;
    unsigned short psrc[GS_CLIENT_COLOR_MAX_COMPONENTS];
    unsigned short psrc_cm[GS_CLIENT_COLOR_MAX_COMPONENTS];
    unsigned short *psrc_temp;
    float temp;
    unsigned short white_lab[3] = {65535, 32767, 32767};
    gsicc_link_t *icc_link;
    cmm_profile_t *curr_output_profile;
    gsicc_rendering_intents_t rendering_intent;
    cmm_dev_profile_t *dev_profile;

    /* Check if the data that we have has already been generated. */
    if (pis->icc_manager != NULL) {
        if (pis->icc_manager->device_named != NULL) {
            named_profile = pis->icc_manager->device_named;
            if (named_profile->buffer != NULL &&
                named_profile->profile_handle == NULL) {
                /* Create the structure that we will use in searching */
                /*  Note that we do this in non-GC memory since the
                    profile pointer is not GC'd */
                namedcolor_table =
                    (gsicc_namedcolortable_t*) gs_malloc(pis->memory->stable_memory, 1,
                                                    sizeof(gsicc_namedcolortable_t),
                                                    "gsicc_transform_named_color");
                if (namedcolor_table == NULL) return(-1);
                /* Parse buffer and load the structure we will be searching */
                buffptr = (char*) named_profile->buffer;
                buffer_count = named_profile->buffer_size;
                count = sscanf(buffptr,"%d",&num_entries);
                if (num_entries < 1 || count == 0) {
                    gs_free(pis->memory, namedcolor_table, 1,
                            sizeof(gsicc_namedcolortable_t),
                            "gsicc_transform_named_color");
                    return (-1);
                }
                code = get_to_next_line(&buffptr,&buffer_count);
                if (code < 0) {
                    gs_free(pis->memory,
                            namedcolor_table, 1,
                            sizeof(gsicc_namedcolortable_t),
                            "gsicc_transform_named_color");
                    return (-1);
                }
                namedcolor_data =
                    (gsicc_namedcolor_t*) gs_malloc(pis->memory->stable_memory, num_entries,
                                                    sizeof(gsicc_namedcolor_t),
                                                    "gsicc_transform_named_color");
                if (namedcolor_data == NULL) {
                    gs_free(pis->memory, namedcolor_table, 1,
                            sizeof(gsicc_namedcolortable_t),
                            "gsicc_transform_named_color");
                    return (-1);
                }
                namedcolor_table->number_entries = num_entries;
                namedcolor_table->named_color = namedcolor_data;
                for (k = 0; k < num_entries; k++) {
                    if (k == 0) {
                        pch = strtok(buffptr,",;");
                    } else {
                        pch = strtok(NULL,",;");
                    }
                    /* Remove any /0d /0a stuff from start */
                    temp_ptr = pch;
                    done = 0;
                    while (!done) {
                        if (*temp_ptr == 0x0d || *temp_ptr == 0x0a) {
                            temp_ptr++;
                        } else {
                            done = 1;
                        }
                    }
                    curr_name_size = strlen(temp_ptr);
                    namedcolor_data[k].name_size = curr_name_size;
                    /* +1 for the null */
                    namedcolor_data[k].colorant_name =
                        (char*) gs_malloc(pis->memory->stable_memory,1,name_size+1,
                                        "gsicc_transform_named_color");
                    strncpy(namedcolor_data[k].colorant_name,temp_ptr,
                            namedcolor_data[k].name_size+1);
                    for (j = 0; j < 3; j++) {
                        pch = strtok(NULL,",;");
                        count = sscanf(pch,"%f",&(lab[j]));
                    }
                    lab[0] = lab[0]*65535/100.0;
                    lab[1] = (lab[1] + 128.0)*65535/255;
                    lab[2] = (lab[2] + 128.0)*65535/255;
                    for (j = 0; j < 3; j++) {
                        if (lab[j] > 65535) lab[j] = 65535;
                        if (lab[j] < 0) lab[j] = 0;
                        namedcolor_data[k].lab[j] = (unsigned short) lab[j];
                    }
                    if (code < 0) {
                        gs_free(pis->memory, namedcolor_table, 1,
                                sizeof(gsicc_namedcolortable_t),
                                "gsicc_transform_named_color");
                        gs_free(pis->memory, namedcolor_data, num_entries,
                                sizeof(gsicc_namedcolordata_t),
                                "gsicc_transform_named_color");
                        return (-1);
                    }
                }
                /* Assign to the profile pointer */
                named_profile->profile_handle = namedcolor_table;
            } else {
                if (named_profile->profile_handle != NULL ) {
                    namedcolor_table =
                        (gsicc_namedcolortable_t*) named_profile->profile_handle;
                   num_entries = namedcolor_table->number_entries;
                } else {
                    return(-1);
                }
            }
            /* Search our structure for the color name */
            found_match = false;
            for (k = 0; k < num_entries; k++) {
                if (name_size == namedcolor_table->named_color[k].name_size) {
                    if( strncmp((const char *) namedcolor_table->named_color[k].colorant_name,
                        (const char *) color_name, name_size) == 0) {
                            found_match = true;
                            break;
                    }
                }
            }
            if (found_match) {
                /* Apply tint and push through CMM */
                for (j = 0; j < 3; j++) {
                    temp = (float) namedcolor_table->named_color[k].lab[j] * tint_value
                            + (float) white_lab[j] * (1.0 - tint_value);
                    psrc[j] = (unsigned short) temp;
                }
                if ( gs_output_profile != NULL ) {
                    curr_output_profile = gs_output_profile;
                } else {
                    /* Use the device profile */
                    code = dev_proc(dev, get_profile)(dev,  &dev_profile);
                    gsicc_extract_profile(dev->graphics_type_tag,
                                          dev_profile, &(curr_output_profile),
                                          &rendering_intent);
                }
                icc_link = gsicc_get_link_profile(pis, dev,
                                                pis->icc_manager->lab_profile,
                                                curr_output_profile, rendering_params,
                                                pis->memory, false);
                if (icc_link->is_identity) {
                    psrc_temp = &(psrc[0]);
                } else {
                    /* Transform the color */
                    psrc_temp = &(psrc_cm[0]);
                    (icc_link->procs.map_color)(dev, icc_link, psrc, psrc_temp, 2);
                }
                gsicc_release_link(icc_link);
                for ( k = 0; k < curr_output_profile->num_comps; k++){
                    device_values[k] = psrc_temp[k];
                }
                return(0);
            } else {
                return (-1);
            }
        }
    }
    return(-1);
}

/* Used by gs to notify the ICC manager that we are done with this link for now */
/* This may release elements waiting on a icc_link_cache slot */
void
gsicc_release_link(gsicc_link_t *icclink)
{
    gsicc_link_cache_t *icc_link_cache = icclink->icc_link_cache;

    gx_monitor_enter(icc_link_cache->lock);
    /* Decrement the reference count */
    if (--(icclink->ref_count) == 0) {

        gsicc_link_t *curr, *prev;

        /* Find link in cache, and move it to the end of the list.  */
        /* This way zero ref_count links are found LRU first	*/
        curr = icc_link_cache->head;
        prev = NULL;
        while (curr != icclink) {
            prev = curr;
            curr = curr->next;
        };
        if (prev == NULL) {
            /* this link was the head */
            icc_link_cache->head = curr->next;
        } else {
            prev->next = curr->next;		/* de-link this one */
        }
        /* Find the first zero-ref entry on the list */
        curr = icc_link_cache->head;
        prev = NULL;
        while (curr != NULL && curr->ref_count > 0) {
            prev = curr;
            curr = curr->next;
        }
        /* Found where to link this one into the tail of the list */
        if (prev == NULL) {
            icc_link_cache->head = icclink;
            icclink->next = icc_link_cache->head->next;
        } else {
            /* link this one in here */
            prev->next = icclink;
            icclink->next = curr;
        }

        /* now release any tasks waiting for a cache slot */
        while (icclink->icc_link_cache->num_waiting > 0) {
            gx_semaphore_signal(icclink->icc_link_cache->wait);
            icclink->icc_link_cache->num_waiting--;
        }
    }
    gx_monitor_leave(icc_link_cache->lock);
}

/* Used to initialize the buffer description prior to color conversion */

void
gsicc_init_buffer(gsicc_bufferdesc_t *buffer_desc, unsigned char num_chan, unsigned char bytes_per_chan,
                  bool has_alpha, bool alpha_first, bool is_planar, int plane_stride, int row_stride,
                  int num_rows, int pixels_per_row)
{
    buffer_desc->num_chan = num_chan;
    buffer_desc->bytes_per_chan = bytes_per_chan;
    buffer_desc->has_alpha = has_alpha;
    buffer_desc->alpha_first = alpha_first;
    buffer_desc->is_planar = is_planar;
    buffer_desc->plane_stride = plane_stride;
    buffer_desc->row_stride = row_stride;
    buffer_desc->num_rows = num_rows;
    buffer_desc->pixels_per_row = pixels_per_row;

    /* sample endianess is consistent across platforms */
    buffer_desc->little_endian = true;

}

/* Return the proper component numbers based upon the profiles of the device.
   This is in here since it is usually called when creating and using a link
   from the link cache. */
int 
gsicc_get_device_profile_comps(cmm_dev_profile_t *dev_profile)
{
    if (dev_profile->link_profile == NULL) {
       return dev_profile->device_profile[0]->num_comps;
    } else {
       return dev_profile->link_profile->num_comps_out;
    }
}

