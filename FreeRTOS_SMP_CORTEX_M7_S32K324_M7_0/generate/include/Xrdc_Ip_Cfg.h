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

#ifndef XRDC_IP_CFG_H
#define XRDC_IP_CFG_H

/**
*   @file Xrdc_Ip_Cfg.h
*
*   @addtogroup XRDC_IP XRDC IPV Driver
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
#include "Mcal.h"

#include "Xrdc_Ip_BOARD_InitPeripherals_PBcfg.h"

#include "Xrdc_Ip_Types.h"
/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_XRDC_IP_CFG_VENDOR_ID                    43
#define RM_XRDC_IP_CFG_AR_RELEASE_MAJOR_VERSION     4
#define RM_XRDC_IP_CFG_AR_RELEASE_MINOR_VERSION     4
#define RM_XRDC_IP_CFG_AR_RELEASE_REVISION_VERSION  0
#define RM_XRDC_IP_CFG_SW_MAJOR_VERSION             1
#define RM_XRDC_IP_CFG_SW_MINOR_VERSION             0
#define RM_XRDC_IP_CFG_SW_PATCH_VERSION             0

/*==================================================================================================
*                                   FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Xrdc_Ip_BOARD_InitPeripherals_PBcfg.h */
#if (RM_XRDC_IP_CFG_VENDOR_ID != RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID)
    #error "Xrdc_Ip_Cfg.h and Xrdc_Ip_BOARD_InitPeripherals_PBcfg.h have different vendor ids"
#endif
#if ((RM_XRDC_IP_CFG_AR_RELEASE_MAJOR_VERSION    != RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION) || \
     (RM_XRDC_IP_CFG_AR_RELEASE_MINOR_VERSION    != RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION) || \
     (RM_XRDC_IP_CFG_AR_RELEASE_REVISION_VERSION != RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Xrdc_Ip_Cfg.h and Xrdc_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif
#if ((RM_XRDC_IP_CFG_SW_MAJOR_VERSION != RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION) || \
     (RM_XRDC_IP_CFG_SW_MINOR_VERSION != RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION) || \
     (RM_XRDC_IP_CFG_SW_PATCH_VERSION != RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION))
    #error "Software Version Numbers of Xrdc_Ip_Cfg.h and Xrdc_Ip_BOARD_InitPeripherals_PBcfg.h are different"
#endif


#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against Mcal.h */
    #if ((RM_XRDC_IP_CFG_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (RM_XRDC_IP_CFG_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Xrdc_Ip_Cfg.h and Mcal.h are different"
    #endif
#endif

/* Checks against Xrdc_Ip_Types.h */
#if (RM_XRDC_IP_CFG_VENDOR_ID != RM_XRDC_IP_TYPES_VENDOR_ID)
    #error "Xrdc_Ip_Cfg.h and Xrdc_Ip_Types.h have different vendor ids"
#endif
#if ((RM_XRDC_IP_CFG_AR_RELEASE_MAJOR_VERSION    != RM_XRDC_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (RM_XRDC_IP_CFG_AR_RELEASE_MINOR_VERSION    != RM_XRDC_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (RM_XRDC_IP_CFG_AR_RELEASE_REVISION_VERSION != RM_XRDC_IP_TYPES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Xrdc_Ip_Cfg.h and Xrdc_Ip_Types.h are different"
#endif
#if ((RM_XRDC_IP_CFG_SW_MAJOR_VERSION != RM_XRDC_IP_TYPES_SW_MAJOR_VERSION) || \
     (RM_XRDC_IP_CFG_SW_MINOR_VERSION != RM_XRDC_IP_TYPES_SW_MINOR_VERSION) || \
     (RM_XRDC_IP_CFG_SW_PATCH_VERSION != RM_XRDC_IP_TYPES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Xrdc_Ip_Cfg.h and Xrdc_Ip_Types.h are different"
#endif

/*==================================================================================================
*                                      DEFINES AND MACROS
==================================================================================================*/


/**
* @brief   Collection of all configuration structures declarations.
*/

#define XRDC_CONFIG_EXT \
    XRDC_CONFIG_BOARD_INITPERIPHERALS_PB

#define RM_IP_ENABLE_XRDC                               (STD_ON)

#define XRDC_IP_DEV_ERROR_DETECT                        (STD_ON)

#define XRDC_NUM_MEM_DESCRIPTOR_CONFIG                  (1U)

#define XRDC_NUM_PERIPHERAL_DESCRIPTOR_CONFIG           (1U)

#define XRDC_NUM_DOMAIN_CONFIG                          (6U)

#define XRDC_IP_ADDRESS_SHIFT                           (0UL)


#define  XRDC_TRGMUX  (32UL)
#define  XRDC_MSCM  (152UL)
#define  XRDC_XRDC  (158UL)
#define  XRDC_MC_RGM  (163UL)
#define  XRDC_DCM  (171UL)
#define  XRDC_SIRC  (178UL)
#define  XRDC_SXOSC  (179UL)
#define  XRDC_MC_CGM  (182UL)
#define  XRDC_MC_ME  (183UL)
#define  XRDC_PLL  (184UL)
#define  XRDC_PMC  (186UL)
#define  XRDC_LPUART_0  (202UL)
#define  XRDC_SIUL2_VIRTWRAPPER_PDAC0_HSE_B_0  (164UL)
#define  XRDC_SIUL2_VIRTWRAPPER_PDAC0_HSE_B_1  (165UL)
#define  XRDC_SEMA_42  (280UL)
#define  XRDC_SWT_0  (156UL)
#define  XRDC_SWT_1  (283UL)


/*==================================================================================================
*                                             ENUMS
==================================================================================================*/

/*==================================================================================================
*                                STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/

/*==================================================================================================
*                                GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*==================================================================================================
*                                       GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                    FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif /* __cplusplus */

/** @} */

#endif /* XRDC_IP_CFG_H */

