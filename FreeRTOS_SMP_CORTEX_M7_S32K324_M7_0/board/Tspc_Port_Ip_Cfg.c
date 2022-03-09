/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : S32K3XX
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

/**
*   @file      Tspc_Port_Ip_Cfg.h
*
*   @addtogroup Port_CFG
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
#include "Tspc_Port_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define TSPC_PORT_IP_VENDOR_ID_CFG_C                       43
#define TSPC_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C        4
#define TSPC_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C        4
#define TSPC_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C     0
#define TSPC_PORT_IP_SW_MAJOR_VERSION_CFG_C                1
#define TSPC_PORT_IP_SW_MINOR_VERSION_CFG_C                0
#define TSPC_PORT_IP_SW_PATCH_VERSION_CFG_C                0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if Tspc_Port_Ip_Cfg.c and Tspc_Port_Ip_Cfg.h are of the same vendor */
#if (TSPC_PORT_IP_VENDOR_ID_CFG_C != TSPC_PORT_IP_VENDOR_ID_CFG_H)
    #error "Tspc_Port_Ip_Cfg.c and Tspc_Port_Ip_Cfg.h have different vendor ids"
#endif
/* Check if Tspc_Port_Ip_Cfg.c and Tspc_Port_Ip_Cfg.h are of the same Autosar version */
#if ((TSPC_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_C    != TSPC_PORT_IP_AR_RELEASE_MAJOR_VERSION_CFG_H) || \
    (TSPC_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_C    != TSPC_PORT_IP_AR_RELEASE_MINOR_VERSION_CFG_H) || \
    (TSPC_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_C != TSPC_PORT_IP_AR_RELEASE_REVISION_VERSION_CFG_H) \
    )
    #error "AutoSar Version Numbers of Tspc_Port_Ip_Cfg.c and Tspc_Port_Ip_Cfg.h are different"
#endif
/* Check if Tspc_Port_Ip_Cfg.c and Tspc_Port_Ip_Cfg.h are of the same Software version */
#if ((TSPC_PORT_IP_SW_MAJOR_VERSION_CFG_C != TSPC_PORT_IP_SW_MAJOR_VERSION_CFG_H) || \
    (TSPC_PORT_IP_SW_MINOR_VERSION_CFG_C != TSPC_PORT_IP_SW_MINOR_VERSION_CFG_H) || \
    (TSPC_PORT_IP_SW_PATCH_VERSION_CFG_C != TSPC_PORT_IP_SW_PATCH_VERSION_CFG_H)    \
    )
    #error "Software Version Numbers of Tspc_Port_Ip_Cfg.c and Tspc_Port_Ip_Cfg.h are different"
#endif

/*==================================================================================================
                             LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/

/*==================================================================================================
                                             LOCAL MACROS
==================================================================================================*/

/*==================================================================================================
                                            LOCAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL CONSTANTS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL VARIABLES
==================================================================================================*/

/* clang-format off */

/*
 * TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
BOARD_InitPins:
- options: {callFromInitBoot: 'true', coreID: M7_0}
- pin_list:
  - {pin_num: D10, peripheral: SIUL2, signal: 'gpio, 168', pin_signal: PTF8, direction: OUTPUT}
  - {pin_num: B15, peripheral: SIUL2, signal: 'gpio, 169', pin_signal: PTF9, direction: OUTPUT}
  - {pin_num: M2, peripheral: LPUART_0, signal: lpuart_tx, pin_signal: PTA27, direction: OUTPUT}
  - {pin_num: N2, peripheral: LPUART_0, signal: lpuart_rx, pin_signal: PTA28}
  - {pin_num: T13, peripheral: SIUL2, signal: 'gpio, 84', pin_signal: PTC20, direction: INPUT}
  - {pin_num: R13, peripheral: SIUL2, signal: 'gpio, 85', pin_signal: PTC21, direction: INPUT}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS ***********
 */
/* clang-format on */

/* No registers that support TSPC were configured*/

/*==================================================================================================
                                      LOCAL FUNCTION PROTOTYPES
==================================================================================================*/

/*==================================================================================================
                                           LOCAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
                                           GLOBAL FUNCTIONS
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */
