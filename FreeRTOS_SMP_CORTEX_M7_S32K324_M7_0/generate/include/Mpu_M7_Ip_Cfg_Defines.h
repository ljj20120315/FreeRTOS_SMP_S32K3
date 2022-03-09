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

#ifndef MPU_M7_IP_CFG_DEFINES_H_
#define MPU_M7_IP_CFG_DEFINES_H_

/**
*   @file Mpu_M7_Ip_CfgDefines.h
*
*   @addtogroup Mpu_M7_Ip Mpu M7 IPV Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
                                         INCLUDE FILES
==================================================================================================*/
#include "StandardTypes.h"

#include "S32K324_MPU.h"
#include "S32K324_SCB.h"
#include "S32K324_MSCM.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_MPU_M7_IP_CFG_DEFINES_VENDOR_ID                    43
#define RM_MPU_M7_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION     4
#define RM_MPU_M7_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION     4
#define RM_MPU_M7_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION  0
#define RM_MPU_M7_IP_CFG_DEFINES_SW_MAJOR_VERSION             1
#define RM_MPU_M7_IP_CFG_DEFINES_SW_MINOR_VERSION             0
#define RM_MPU_M7_IP_CFG_DEFINES_SW_PATCH_VERSION             0


/*==================================================================================================
                                      FILE VERSION CHECKS
==================================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Checks against StandardTypes.h */
#if ((RM_MPU_M7_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
    (RM_MPU_M7_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION  != STD_AR_RELEASE_MINOR_VERSION))
    #error "AutoSar Version Numbers of Mpu_M7_Ip_Cfg_Defines.h and StandardTypes.h are different"
#endif
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
/** @brief    Development error checking */
#define MPU_M7_IP_DEV_ERROR_DETECT                    (STD_OFF)

#define MPU_M7_IP_MIN_REGION_SIZE                           (32U)
#define MPU_M7_IP_MIN_REGION_SIZE_WITH_SUBREGION            (256)
#define MPU_M7_IP_EXECUTE_RIGHT_MASK                        (16)
#define MPU_M7_IP_SCB_CFSR_MMFSR_MASK_WITHOUT_VALID         (59)

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

#endif /* MPU_M7_IP_CFG_DEFINES_H_ */

