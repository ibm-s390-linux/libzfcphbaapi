/* SPDX-License-Identifier: EPL-1.0 */
/*
 * Copyright IBM Corp. 2010
 *
 * Authors:		Sven Schuetz <sven@de.ibm.com>
 * 			contains code from vlib_aux.h
 * 			by Andreas Herrmann and Stefan Voelkel
 *
 * File:		vlib_sg_io.h
 *
 * Description:
 * Function declarations, defines, inlines for calls that use sg_io
 *
 */

#ifndef VLIB_SG_IO_H_
#define VLIB_SG_IO_H_

#define CT_GIDPN_REQ_LENGTH 24
#define CT_GIDPN_RESPONSE_LENGTH 20


HBA_STATUS sg_io_sendRNID(struct vlib_adapter *, wwn_t, void *, int);
HBA_STATUS sg_io_performCTPassThru(struct vlib_adapter *, void*, int, void*,
									int);

#endif /*VLIB_SG_IO_H_*/
