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

/**
*   @file Mpu_M7_Ip_Cfg.c
*
*   @addtogroup Mpu_M7_Ip Mpu M7 IPV Driver
*   @{
*/



#ifdef __cplusplus
extern "C"
{
#endif


/*==================================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Mpu_M7_Ip_Cfg.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_MPU_M7_IP_CFG_VENDOR_ID_C                     43
#define RM_MPU_M7_IP_CFG_AR_RELEASE_MAJOR_VERSION_C      4
#define RM_MPU_M7_IP_CFG_AR_RELEASE_MINOR_VERSION_C      4
#define RM_MPU_M7_IP_CFG_AR_RELEASE_REVISION_VERSION_C   0
#define RM_MPU_M7_IP_CFG_SW_MAJOR_VERSION_C              1
#define RM_MPU_M7_IP_CFG_SW_MINOR_VERSION_C              0
#define RM_MPU_M7_IP_CFG_SW_PATCH_VERSION_C              0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Mpu_M7_Ip_Cfg.h */
#if (RM_MPU_M7_IP_CFG_VENDOR_ID_C != RM_MPU_M7_IP_CFG_VENDOR_ID)
    #error "Mpu_M7_Ip_Cfg.c and Mpu_M7_Ip_Cfg.h have different vendor ids"
#endif
#if ((RM_MPU_M7_IP_CFG_AR_RELEASE_MAJOR_VERSION_C    != RM_MPU_M7_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (RM_MPU_M7_IP_CFG_AR_RELEASE_MINOR_VERSION_C    != RM_MPU_M7_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (RM_MPU_M7_IP_CFG_AR_RELEASE_REVISION_VERSION_C != RM_MPU_M7_IP_CFG_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Mpu_M7_Ip_Cfg.h and Mpu_M7_Ip_Cfg.h are different"
#endif
#if ((RM_MPU_M7_IP_CFG_SW_MAJOR_VERSION_C != RM_MPU_M7_IP_CFG_SW_MAJOR_VERSION) || \
     (RM_MPU_M7_IP_CFG_SW_MINOR_VERSION_C != RM_MPU_M7_IP_CFG_SW_MINOR_VERSION) || \
     (RM_MPU_M7_IP_CFG_SW_PATCH_VERSION_C != RM_MPU_M7_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Mpu_M7_Ip_Cfg.c and Mpu_M7_Ip_Cfg.h are different"
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
#define RM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"

const Mpu_M7_Ip_RegionConfigType MPU_M7_ModuleConfig_0_RegionConfig[10] =
{
    /* Region Configuration 0 */
    {
        0U,
        0UL,
        4294967295UL,
        MPU_M7_MEM_STRONG_ORDER,
        MPU_M7_PRIV_UNPRIV_NONE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 1 */
    {
        1U,
        0UL,
        32767UL,
        MPU_M7_MEM_STRONG_ORDER,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 2 */
    {
        2U,
        4194304UL,
        8388607UL,
        MPU_M7_MEM_NORMAL_CACHEABLE,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_W_BACK_NO_W_ALLOCATE,
        MPU_M7_CACHE_POLICY_W_BACK_WR_ALLOCATE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 3 */
    {
        3U,
        268435456UL,
        268566527UL,
        MPU_M7_MEM_DEVICE_SHARED,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)TRUE)
    },

    /* Region Configuration 4 */
    {
        4U,
        536870912UL,
        536936447UL,
        MPU_M7_MEM_STRONG_ORDER,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 5 */
    {
        5U,
        541065216UL,
        541261823UL,
        MPU_M7_MEM_NORMAL_CACHEABLE,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_W_BACK_WR_ALLOCATE,
        MPU_M7_CACHE_POLICY_W_THROUGH_NO_W_ALLOCATE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 6 */
    {
        6U,
        541261824UL,
        541327359UL,
        MPU_M7_MEM_NORMAL_IO_NO_CACHE,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 7 */
    {
        7U,
        541327360UL,
        541343743UL,
        MPU_M7_MEM_DEVICE_SHARED,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 8 */
    {
        8U,
        1073741824UL,
        1075838975UL,
        MPU_M7_MEM_DEVICE_SHARED,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)FALSE)
    },

    /* Region Configuration 9 */
    {
        9U,
        1075838976UL,
        1077936127UL,
        MPU_M7_MEM_DEVICE_SHARED,
        MPU_M7_PRIV_RWX_UNPRIV_RWX,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        MPU_M7_CACHE_POLICY_NO_CACHE,
        0U,
        ((boolean)FALSE)
    }
};

const Mpu_M7_Ip_ConfigType MPU_M7_ModuleConfig_0 =
{
        Cortex_M7_Core0,
        ((boolean)FALSE),
        ((boolean)FALSE),
        ((boolean)FALSE),
        10,
        MPU_M7_ModuleConfig_0_RegionConfig
};
#define RM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"


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

