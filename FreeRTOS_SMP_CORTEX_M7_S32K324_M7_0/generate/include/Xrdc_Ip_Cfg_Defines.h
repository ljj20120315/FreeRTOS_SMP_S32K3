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

#ifndef XRDC_IP_CFG_DEFINES_H
#define XRDC_IP_CFG_DEFINES_H

/**
*   @file Xrdc_Ip_Cfg_Defines.h
*
*   @addtogroup XRDC_IP XRDC IPV Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                         INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "S32K324_XRDC.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_XRDC_IP_CFG_DEFINES_VENDOR_ID                    43
#define RM_XRDC_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define RM_XRDC_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define RM_XRDC_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define RM_XRDC_IP_CFG_DEFINES_SW_MAJOR_VERSION             1
#define RM_XRDC_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define RM_XRDC_IP_CFG_DEFINES_SW_PATCH_VERSION             0
/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/


/*==================================================================================================
*                                 GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                             ENUMS
==================================================================================================*/


/*==================================================================================================
*                                           CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define XRDC_COUNT                                   (uint32)(1UL)

#define XRDC_NUMBER_OF_DOMAINID                      (uint32)(3UL)

#define XRDC_BASE_ADDRS                              { IP_XRDC_BASE }

#define XRDC_MOD_BASEADDR_ADDR32(instance)           (Xrdc_Ip_InstanceAddress[instance])

#define XRDC_CR_OFFSET                               (uint32)(0x0UL)

#define XRDC_HWCFG0_OFFSET                           (uint32)(0xF0UL)
#define XRDC_HWCFG1_OFFSET                           (uint32)(0xF4UL)
#define XRDC_HWCFG2_OFFSET                           (uint32)(0xF8UL)

#define XRDC_MDACFG_OFFSET                           (uint32)(0x100UL)

#define XRDC_MRCFG_OFFSET                            (uint32)(0x140UL)

#define XRDC_DERRLOC_OFFSET                          (uint32)(0x200UL)

#define XRDC_DERR_W_OFFSET                           (uint32)(0x400UL)

#define XRDC_PID_OFFSET                              (uint32)(0x700UL)

#define XRDC_MDA_W_DFMT0_OFFSET                      (uint32)(0x800UL)

#define XRDC_PDAC_W0_OFFSET                          (uint32)(0x1000UL)

#define XRDC_PDAC_W1_OFFSET                          (uint32)(0x1004UL)

#define XRDC_MRGD_OFFSET                             (uint32)(0x2000UL)

#define XRDC_AVAILABLE_PIDS                          {(boolean)TRUE,(boolean)FALSE,(boolean)FALSE,(boolean)TRUE,(boolean)TRUE}

#ifndef XRDC_PID_COUNT
#define XRDC_PID_COUNT                               ((uint32)XRDC_0_PID_COUNT)
#endif

/*==================================================================================================
*                                 STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                      FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* XRDC_IP_DEVICE_REGISTERS_H */


