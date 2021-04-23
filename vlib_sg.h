/* SPDX-License-Identifier: EPL-1.0 */
/*
 * Copyright IBM Corp. 2010
 *
 * Authors:		Sven Schuetz <sven@de.ibm.com>
 *
 * File:		vlib_sg.h
 *
 * Description:
 * Function declarations for functions using the sg_utils library
 *
 */

#ifndef _VLIB_SG_H_
#define _VLIB_SG_H_

#define READCAP10LEN 8
#define READCAP16LEN 32

HBA_STATUS sgutils_SendScsiInquiry(char *sg_dev, HBA_UINT8 EVPD,
				HBA_UINT32 PageCode, void *pRspBuffer,
				HBA_UINT32 *RspBufferSize);
HBA_STATUS sgutils_SendReportLUNs(char *sg_dev, char *pRspBuffer,
				HBA_UINT32 *RspBufferSize);
HBA_STATUS sgutils_SendReadCap(char *sg_dev, char *pRspBuffer,
				HBA_UINT32 *RspBufferSize);

#endif /*_VLIB_SG_H_*/
