/*==================================================================================================
*   Project              : RTD AUTOSAR 4.4
*   Platform             : CORTEXM
*   Peripheral           : DMA,CACHE,TRGMUX,LCU,EMIOS,FLEXIO
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
/* Prevention from multiple including the same header */
#ifndef CACHE_IP_TRUSTEDFUNCTIONS_H
#define CACHE_IP_TRUSTEDFUNCTIONS_H

/**
*   @file    Cache_Ip_TrustedFunctions.h
*
*   @version 1.0.0
*
*   @brief   AUTOSAR Mcl - Cache Ip driver source file.
*   @details
*
*   @addtogroup CACHE_IP_DRIVER CACHE IP Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif


/*==================================================================================================
*                                          INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/

#include "Cache_Ip_Cfg_Defines.h"
#if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)
#include "StandardTypes.h"
#endif /* STD_ON == CACHE_IP_ALL_IS_AVAILABLE */

/*==================================================================================================
*                                 SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CACHE_IP_TRUSTEDFUNCTIONS_VENDOR_ID                       43
#define CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION        4
#define CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION        4
#define CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_REVISION_VERSION     0
#define CACHE_IP_TRUSTEDFUNCTIONS_SW_MAJOR_VERSION                1
#define CACHE_IP_TRUSTEDFUNCTIONS_SW_MINOR_VERSION                0
#define CACHE_IP_TRUSTEDFUNCTIONS_SW_PATCH_VERSION                0

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/* Check if Cache_Ip_TrustedFunctions.h file and Cache_Ip_Cfg_Defines file are of the same Software version */
#if (CACHE_IP_TRUSTEDFUNCTIONS_VENDOR_ID != CACHE_IP_CFG_DEFINES_VENDOR_ID)
    #error "Cache_Ip_TrustedFunctions.h and Cache_Ip_Cfg_Defines have different vendor ids"
#endif


/* Check if Cache_Ip_TrustedFunctions.h file and Cache_Ip_Cfg_Defines file are of the same Autosar version */
#if ((CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION != CACHE_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION != CACHE_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_REVISION_VERSION != CACHE_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Cache_Ip_TrustedFunctions.h and Cache_Ip_Cfg_Defines are different"
#endif

/* Check if Cache_Ip_TrustedFunctions.h file and Cache_Ip_Cfg_Defines file are of the same Software version */
#if ((CACHE_IP_TRUSTEDFUNCTIONS_SW_MAJOR_VERSION != CACHE_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (CACHE_IP_TRUSTEDFUNCTIONS_SW_MINOR_VERSION != CACHE_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (CACHE_IP_TRUSTEDFUNCTIONS_SW_PATCH_VERSION != CACHE_IP_CFG_DEFINES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Cache_Ip_TrustedFunctions.h and Cache_Ip_Cfg_Defines are different"
#endif


#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK

#if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)

/* Check if header file and Cache_Ip_TrustedFunctions.h file are of the same Autosar version */
#if ((CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CACHE_IP_TRUSTEDFUNCTIONS_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION) || \
    )
    #error "AutoSar Version Numbers of StandardTypes.h and Cache_Ip_TrustedFunctions.h are different"
#endif

#endif /* STD_ON == CACHE_IP_ALL_IS_AVAILABLE */

#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

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
#if (STD_ON == CACHE_IP_IS_AVAILABLE)

#if (defined(MCAL_ENABLE_USER_MODE_SUPPORT) && (STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE))

#define MCL_START_SEC_CODE
#include "Mcl_MemMap.h"

#if (STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE)

/**
 * @brief        Enable Instruction Cache
 *
 * @param        None
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_InstructionCacheEnable(void);

/**
 * @brief        Disable Instruction Cache
 *
 * @param        None
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_InstructionCacheDisable(void);

/**
 * @brief        Invalidate Instruction Cache
 *
 * @param        None
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_InstructionCacheInvalidate(void);

/**
 * @brief        Clean Instruction Cache
 *
 * @param[in]    enInvalidate    Specifies to execute operation Clean&Invalidate.
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_InstructionCacheClean(const boolean enInvalidate);

/**
 * @brief        Invalidate Instruction Cache By Address
 *
 * @param[in]    addr            Specifies the memory segment start address.
 * @param[in]    length          Specifies the memory segment length.
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_InstructionCacheInvalidateByAddr(const uint32 addr, const uint32 length);

/**
 * @brief        Clean Instruction Cache By Address
 *
 * @param[in]    enInvalidate    Specifies to execute operation Clean&Invalidate.
 * @param[in]    addr            Specifies to execute operation Clean&Invalidate.
 * @param[in]    length          Specifies the memory segment length.
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_InstructionCacheCleanByAddr(const boolean enInvalidate, const uint32 addr, const uint32 length);

#endif /* STD_ON == CACHE_IP_INSTRUCTION_IS_AVAILABLE */


#if (STD_ON == CACHE_IP_DATA_IS_AVAILABLE)

/**
 * @brief        Enable Data Cache
 *
 * @param        None
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_DataCacheEnable(void);

/**
 * @brief        Disable Data Cache
 *
 * @param        None
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_DataCacheDisable(void);

/**
 * @brief        Invalidate Data Cache
 *
 * @param        None
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_DataCacheInvalidate(void);

/**
 * @brief        Clean Data Cache
 *
 * @param[in]    enInvalidate    Specifies to execute operation Clean&Invalidate.
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_DataCacheClean(const boolean enInvalidate);

/**
 * @brief        Invalidate Data Cache By Address
 *
 * @param[in]    addr            Specifies the memory segment start address.
 * @param[in]    length          Specifies the memory segment length.
 * @return       None
 *
 */
extern void hwAcc_ArmCoreMx_DataCacheInvalidateByAddr(const uint32 addr, const uint32 length);

/**
 * @brief        Clean Data Cache By Address
 *
 * @param[in]    enInvalidate    Specifies to execute operation Clean&Invalidate.
 * @param[in]    addr            Specifies the memory segment start address.
 * @param[in]    length          Specifies the memory segment length.
 * @return       None
 */
extern void hwAcc_ArmCoreMx_DataCacheCleanByAddr(const boolean enInvalidate, const uint32 addr, const uint32 length);

#endif /* STD_ON == CACHE_IP_DATA_IS_AVAILABLE */


#if (STD_ON == CACHE_IP_ALL_IS_AVAILABLE)

/**
 * @brief        Enable Processor Code Cache
 *
 * @param        None
 * @return       None
 *
 */
extern Std_ReturnType hwAcc_Lmem_ProcessorCodeCacheEnable(void);

/**
 * @brief        Disable Processor Code Cache
 *
 * @param        None
 * @return       None
 *
 */
extern Std_ReturnType hwAcc_Lmem_ProcessorCodeCacheDisable(void);

/**
 * @brief        Invalidate Processor Code Cache
 *
 * @param        None
 * @return       None
 *
 */
extern Std_ReturnType hwAcc_Lmem_ProcessorCodeInvalidate(void);

/**
 * @brief        Clean Processor Code Cache
 *
 * @param[in]    enInvalidate    Specifies to execute operation Clean&Invalidate.
 * @return       None
 *
 */
extern Std_ReturnType hwAcc_Lmem_ProcessorCodeClean(const boolean enInvalidate);

/**
 * @brief        Invalidate Processor Code Cache by Address
 *
 * @param[in]    addr            Specifies the memory segment start address.
 * @param[in]    Length          Specifies the memory segment length.
 * @return       None
 *
 */
extern Std_ReturnType hwAcc_Lmem_ProcessorCodeInvalidateByAddr(const uint32 addr, const uint32 length);

/**
 * @brief        Clean Processor Code Cache by Address
 *
 * @param[in]    enInvalidate    Specifies to execute operation Clean&Invalidate.
 * @param[in]    addr            Specifies the memory segment start address.
 * @param[in]    Length          Specifies the memory segment length.
 * @return       None
 *
 */
extern Std_ReturnType hwAcc_Lmem_ProcessorCodeCacheCleanByAddr(const boolean enInvalidate, const uint32 addr, const uint32 length);

#endif /* STD_ON == CACHE_IP_ALL_IS_AVAILABLE */

#define MCL_STOP_SEC_CODE
#include "Mcl_MemMap.h"

#endif /* STD_ON == CACHE_IP_USER_MODE_SUPPORT_IS_AVAILABLE */

#endif /* STD_ON == CACHE_IP_IS_AVAILABLE */

#ifdef __cplusplus
}
#endif

/** @} */

#endif /* CACHE_IP_TRUSTEDFUNCTIONS_H */


/*==================================================================================================
 *                                        END OF FILE
==================================================================================================*/
