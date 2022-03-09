/*==================================================================================================
* Project : RTD AUTOSAR 4.4
* Platform : CORTEXM
* Peripheral : S32K3XX
* Dependencies : none
*
* Autosar Version : 4.4.0
* Autosar Revision : ASR_REL_4_4_REV_0000
* Autosar Conf.Variant :
* SW Version : 1.0.0
* Build Version : S32K3_RTD_1_0_0_HF02_D2112_ASR_REL_4_4_REV_0000_20211222
*
* (c) Copyright 2020 - 2021 NXP Semiconductors
* All Rights Reserved.
*
* NXP Confidential. This software is owned or controlled by NXP and may only be
* used strictly in accordance with the applicable license terms. By expressly
* accepting such terms or by downloading, installing, activating and/or otherwise
* using the software, you are agreeing that you have read, and that you agree to
* comply with and are bound by, such license terms. If you do not agree to be
* bound by the applicable license terms, then you may not retain, install,
* activate or otherwise use the software.
==================================================================================================*/
/**
*   @file       OsIf_Cfg.c
*   @implements OsIf_Cfg.c_Artifact
*   @version 1.0.0
*
*
*   @addtogroup OSIF_DRIVER
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "OsIf_Cfg.h"
#include "OsIf_Cfg_TypesDef.h"

#if defined(USING_OS_AUTOSAROS)
#include "Os.h"
#endif /* defined(USING_OS_AUTOSAROS) */

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define OSIF_CFG_VENDOR_ID_C                    43
#define OSIF_CFG_AR_RELEASE_MAJOR_VERSION_C     4
#define OSIF_CFG_AR_RELEASE_MINOR_VERSION_C     4
#define OSIF_CFG_AR_RELEASE_REVISION_VERSION_C  0
#define OSIF_CFG_SW_MAJOR_VERSION_C             1
#define OSIF_CFG_SW_MINOR_VERSION_C             0
#define OSIF_CFG_SW_PATCH_VERSION_C             0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against OsIf_Cfg.h */
#if (OSIF_CFG_VENDOR_ID_C != OSIF_CFG_VENDOR_ID)
    #error "OsIf_Cfg.c and OsIf_Cfg.h have different vendor ids"
#endif
#if ((OSIF_CFG_AR_RELEASE_MAJOR_VERSION_C    != OSIF_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (OSIF_CFG_AR_RELEASE_MINOR_VERSION_C    != OSIF_CFG_AR_RELEASE_MINOR_VERSION) || \
     (OSIF_CFG_AR_RELEASE_REVISION_VERSION_C != OSIF_CFG_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of OsIf_Cfg.c and OsIf_Cfg.h are different"
#endif
#if ((OSIF_CFG_SW_MAJOR_VERSION_C != OSIF_CFG_SW_MAJOR_VERSION) || \
     (OSIF_CFG_SW_MINOR_VERSION_C != OSIF_CFG_SW_MINOR_VERSION) || \
     (OSIF_CFG_SW_PATCH_VERSION_C != OSIF_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of OsIf_Cfg.c and OsIf_Cfg.h are different"
#endif

/* Checks against OsIf_Cfg_TypesDef.h */
#if (OSIF_CFG_VENDOR_ID_C != OSIF_CFG_TYPESDEF_VENDOR_ID)
    #error "OsIf_Cfg.c and OsIf_Cfg_TypesDef.h have different vendor ids"
#endif
#if ((OSIF_CFG_AR_RELEASE_MAJOR_VERSION_C    != OSIF_CFG_TYPESDEF_AR_RELEASE_MAJOR_VERSION) || \
     (OSIF_CFG_AR_RELEASE_MINOR_VERSION_C    != OSIF_CFG_TYPESDEF_AR_RELEASE_MINOR_VERSION) || \
     (OSIF_CFG_AR_RELEASE_REVISION_VERSION_C != OSIF_CFG_TYPESDEF_AR_RELEASE_REVISION_VERSION))
    #error "AUTOSAR Version Numbers of OsIf_Cfg.c and OsIf_Cfg_TypesDef.h are different"
#endif
#if ((OSIF_CFG_SW_MAJOR_VERSION_C != OSIF_CFG_TYPESDEF_SW_MAJOR_VERSION) || \
     (OSIF_CFG_SW_MINOR_VERSION_C != OSIF_CFG_TYPESDEF_SW_MINOR_VERSION) || \
     (OSIF_CFG_SW_PATCH_VERSION_C != OSIF_CFG_TYPESDEF_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of OsIf_Cfg.c and OsIf_Cfg_TypesDef.h are different"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/

/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/
#define BASE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Base_MemMap.h"

static const OsIf_ConfigType OsIf_xPredefinedConfig =
{
        /* .counterId = */ 0U,
        /* .counterFrequency = */ 160000000U
};

#define BASE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Base_MemMap.h"

#define BASE_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Base_MemMap.h"

const OsIf_ConfigType *const OsIf_apxPredefinedConfig[1U] =
{
    &OsIf_xPredefinedConfig
};

#define BASE_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Base_MemMap.h"

/*==================================================================================================
*                                      GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif /* __cplusplus */
/** @} */

