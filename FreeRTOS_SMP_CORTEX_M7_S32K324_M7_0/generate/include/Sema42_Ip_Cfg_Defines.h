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

#ifndef SEMA42_IP_CFG_DEFINES_H_
#define SEMA42_IP_CFG_DEFINES_H_

/**
*   @file Sema42_Ip_CfgDefines.h
*
*   @addtogroup Sema42_Ip Sema42 IPV Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "StandardTypes.h"
#include "Sema42_Ip_Types.h"
#include "S32K324_SEMA42.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_SEMA42_IP_CFG_DEFINES_VENDOR_ID                    43
#define RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define RM_SEMA42_IP_CFG_DEFINES_SW_MAJOR_VERSION             1
#define RM_SEMA42_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define RM_SEMA42_IP_CFG_DEFINES_SW_PATCH_VERSION             0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Checks against StandardTypes.h */
#if ((RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
    (RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION  != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Sema42_Ip_Cfg_Defines.h and StandardTypes.h are different"
#endif
#endif

/* Checks against Sema42_Ip_Types.h */
#if (RM_SEMA42_IP_CFG_DEFINES_VENDOR_ID != RM_SEMA42_IP_TYPES_VENDOR_ID)
    #error "Sema42_Ip_Cfg_Defines.h and Sema42_Ip_Types.h have different vendor ids"
#endif
#if ((RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION    != RM_SEMA42_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION    != RM_SEMA42_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (RM_SEMA42_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION != RM_SEMA42_IP_TYPES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Sema42_Ip_Cfg_Defines.h and Sema42_Ip_Types.h are different"
#endif
#if ((RM_SEMA42_IP_CFG_DEFINES_SW_MAJOR_VERSION != RM_SEMA42_IP_TYPES_SW_MAJOR_VERSION) || \
     (RM_SEMA42_IP_CFG_DEFINES_SW_MINOR_VERSION != RM_SEMA42_IP_TYPES_SW_MINOR_VERSION) || \
     (RM_SEMA42_IP_CFG_DEFINES_SW_PATCH_VERSION != RM_SEMA42_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Sema42_Ip_Cfg_Defines.h and Sema42_Ip_Types.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

/** @brief    Development error checking */
#define SEMA42_IP_DEV_ERROR_DETECT            (STD_OFF)
#define SEMA42_IP_SUPPORT                     (STD_ON)
/** @brief    Macro representing number of Domain Id */
#define SEMA42_IP_DOMAIN_ID_NUMBER            (0x03U)
/** @brief    Macro representing an unlocked gate */
#define SEMA42_IP_UNLOCKED_GATE               (0xFFU)
/** @brief    Macro representing an unknown gate */
#define SEMA42_IP_UNKNOWN_GATE                (0xFFU)
/** @brief    Macro representing an unknown gate */
#define SEMA42_IP_UNKNOWN_DOMAINID            (0xFFU)
/** @brief    Macro representing all gate are reseted */
#define SEMA42_IP_RESET_GATE_ALL              (0x40U)
/** @brief    Macro representing an unlocked gate value */
#define SEMA42_IP_UNLOCKED_GATE_VALUE         (0U)
/** @brief    Macro used for creating the lock value */
#define SEMA42_IP_GATE_LOCK(x)                (((x) +1UL))
/** @brief    Macro representing the first write sequence for a gate reset */
#define SEMA42_IP_RSTGT_FIRST_WRITE_SEQUENCE  (226)
/** @brief    Macro representing the second write sequence for a gate reset */
#define SEMA42_IP_RSTGT_SECOND_WRITE_SEQUENCE (29)
/** @brief    Macro representing an idle reset gate */
#define SEMA42_IP_RESET_GATE_IDLE             (0U)
/** @brief    Macro used to translate between logic and physical gate offset */
#define SEMA42_IP_GATE_OFFSET(x)              ((x) ^ ((uint8)3UL))

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/

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

#endif /* SEMA42_IP_CFG_DEFINES_H_ */

