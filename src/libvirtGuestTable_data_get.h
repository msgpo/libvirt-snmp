/*
 * Note: this file originally auto-generated by mib2c using
 *       version : 12088 $ of $
 *
 * $Id:$
 *
 * @file libvirtGuestTable_data_get.h
 *
 * @addtogroup get
 *
 * Prototypes for get functions
 *
 * @{
 */
#ifndef LIBVIRTGUESTTABLE_DATA_GET_H
#define LIBVIRTGUESTTABLE_DATA_GET_H

#ifdef __cplusplus
extern "C" {
#endif

/* *********************************************************************
 * GET function declarations
 */

/* *********************************************************************
 * GET Table declarations
 */
/**********************************************************************
 **********************************************************************
 ***
 *** Table libvirtGuestTable
 ***
 **********************************************************************
 **********************************************************************/
/*
 * LIBVIRT-MIB::libvirtGuestTable is subid 1 of libvirtObjects.
 * Its status is Current.
 * OID: .1.3.6.1.4.1.12345.1.1, length: 9
*/
    /*
     * indexes
     */

    int libvirtGuestName_get( libvirtGuestTable_rowreq_ctx *rowreq_ctx, char **libvirtGuestName_val_ptr_ptr, size_t *libvirtGuestName_val_ptr_len_ptr );
    int libvirtGuestState_get( libvirtGuestTable_rowreq_ctx *rowreq_ctx, u_long * libvirtGuestState_val_ptr );
    int libvirtGuestCpuCount_get( libvirtGuestTable_rowreq_ctx *rowreq_ctx, u_long * libvirtGuestCpuCount_val_ptr );
    int libvirtGuestMemoryCurrent_get( libvirtGuestTable_rowreq_ctx *rowreq_ctx, u_long * libvirtGuestMemoryCurrent_val_ptr );
    int libvirtGuestMemoryLimit_get( libvirtGuestTable_rowreq_ctx *rowreq_ctx, u_long * libvirtGuestMemoryLimit_val_ptr );
    int libvirtGuestCpuTime_get( libvirtGuestTable_rowreq_ctx *rowreq_ctx, U64 * libvirtGuestCpuTime_val_ptr );
    int libvirtGuestRowStatus_get( libvirtGuestTable_rowreq_ctx *rowreq_ctx, u_long * libvirtGuestRowStatus_val_ptr );


int libvirtGuestTable_indexes_set_tbl_idx(libvirtGuestTable_mib_index *tbl_idx, char *libvirtGuestUUID_val_ptr,  size_t libvirtGuestUUID_val_ptr_len);
int libvirtGuestTable_indexes_set(libvirtGuestTable_rowreq_ctx *rowreq_ctx, char *libvirtGuestUUID_val_ptr,  size_t libvirtGuestUUID_val_ptr_len);




#ifdef __cplusplus
}
#endif

#endif /* LIBVIRTGUESTTABLE_DATA_GET_H */
/** @} */
