/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : 
*   Dependencies         : none
*
*   Autosar Version      : 4.4.0
*   Autosar Revision     : ASR_REL_4_4_REV_0000
*   Autosar Conf.Variant :
*   SW Version           : 1.0.0
*   Build Version        : S32K3_RTD_1_0_0_HF02_D2112_ASR_REL_4_4_REV_0000_20211222
*
*   (c) Copyright 2020 - 2021 NXP Semiconductors
*   All Rights Reserved.
*
*   NXP Confidential. This software is owned or controlled by NXP and may only be
*   used strictly in accordance with the applicable license terms. By expressly
*   accepting such terms or by downloading, installing, activating and/or otherwise
*   using the software, you are agreeing that you have read, and that you agree to
*   comply with and are bound by, such license terms. If you do not agree to be
*   bound by the applicable license terms, then you may not retain, install,
*   activate or otherwise use the software.
==================================================================================================*/
#ifndef SEMA42_IP_TYPES_H_
#define SEMA42_IP_TYPES_H_

/**
*   @file Sema42_Ip_Types.h
*
*   @addtogroup Sema42_Ip Sema42 IPV Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
==================================================================================================*/
#include "BasicTypes.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_SEMA42_IP_TYPES_VENDOR_ID                      43
#define RM_SEMA42_IP_TYPES_AR_RELEASE_MAJOR_VERSION       4
#define RM_SEMA42_IP_TYPES_AR_RELEASE_MINOR_VERSION       4
#define RM_SEMA42_IP_TYPES_AR_RELEASE_REVISION_VERSION    0
#define RM_SEMA42_IP_TYPES_SW_MAJOR_VERSION               1
#define RM_SEMA42_IP_TYPES_SW_MINOR_VERSION               0
#define RM_SEMA42_IP_TYPES_SW_PATCH_VERSION               0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

/**
* @brief          Enumeration listing the possible return codes for Sema42 Ip driver
*/
/* @implements     Sema42_Ip_StatusType_enum */
typedef enum
{
    Sema42_Ip_Success = 0UL, /*!< Operation successful */
    Sema42_Ip_Error   = 1UL /*!< Operation resulted in error */
} Sema42_Ip_StatusType;

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* SEMA42_IP_TYPES_H_ */

