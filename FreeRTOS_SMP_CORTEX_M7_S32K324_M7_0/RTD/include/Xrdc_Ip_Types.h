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

#ifndef XRDC_IP_TYPES_H
#define XRDC_IP_TYPES_H

/**
*   @file Xrdc_Ip_Types.h
*
*   @addtogroup XRDC_IP XRDC IPV Driver
*   @{
*/


#ifdef __cplusplus
extern "C"{
#endif

/*===============================================================================================
                                         INCLUDE FILES
 1) system and project includes
 2) needed interfaces from external units
 3) internal and external interfaces from this unit
===============================================================================================*/
#include "Mcal.h"

/*===============================================================================================
                               SOURCE FILE VERSION INFORMATION
===============================================================================================*/
#define RM_XRDC_IP_TYPES_VENDOR_ID                        43
#define RM_XRDC_IP_TYPES_AR_RELEASE_MAJOR_VERSION         4
#define RM_XRDC_IP_TYPES_AR_RELEASE_MINOR_VERSION         4
#define RM_XRDC_IP_TYPES_AR_RELEASE_REVISION_VERSION      0
#define RM_XRDC_IP_TYPES_SW_MAJOR_VERSION                 1
#define RM_XRDC_IP_TYPES_SW_MINOR_VERSION                 0
#define RM_XRDC_IP_TYPES_SW_PATCH_VERSION                 0

/*===============================================================================================
                                      FILE VERSION CHECKS
===============================================================================================*/
#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
    /* Checks against Mcal.h */
    #if ((RM_XRDC_IP_TYPES_AR_RELEASE_MAJOR_VERSION != MCAL_AR_RELEASE_MAJOR_VERSION) || \
         (RM_XRDC_IP_TYPES_AR_RELEASE_MINOR_VERSION != MCAL_AR_RELEASE_MINOR_VERSION))
        #error "AUTOSAR Version Numbers of Xrdc_Ip_Types.h and Mcal.h are different"
    #endif
#endif

/*==================================================================================================
*                                       FILE VERSION CHECKS
==================================================================================================*/

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/
#define XRDC_WORD0          ((uint32)0UL)
#define XRDC_WORD1          ((uint32)1UL)
#define XRDC_WORD2          ((uint32)2UL)
#define XRDC_WORD3          ((uint32)3UL)
#define XRDC_WORD4          ((uint32)4UL)
#define XRDC_WORD5          ((uint32)5UL)
#define XRDC_WORD6          ((uint32)6UL)
#define XRDC_WORD7          ((uint32)7UL)

#define XRDC_INSTANCE0      ((uint32)0UL)
#define XRDC_INSTANCE1      ((uint32)1UL)
#define XRDC_INSTANCE2      ((uint32)2UL)
#define XRDC_INSTANCE3A     ((uint32)3UL)
#define XRDC_INSTANCE3B     ((uint32)4UL)
#define XRDC_INSTANCE4      ((uint32)5UL)
#define XRDC_INSTANCE5      ((uint32)6UL)
#define XRDC_SMU_INSTANCE0  ((uint32)7UL)
#define XRDC_RTU_INSTANCE0  ((uint32)8UL)
#define XRDC_RTU_INSTANCE1  ((uint32)9UL)
#define XRDC_CE_INSTANCE0   ((uint32)10UL)

#define XRDC_MRC0           ((uint32)0UL)
#define XRDC_MRC1           ((uint32)1UL)
#define XRDC_MRC2           ((uint32)2UL)
#define XRDC_MRC3           ((uint32)3UL)
#define XRDC_MRC4           ((uint32)4UL)
#define XRDC_MRC5           ((uint32)5UL)
#define XRDC_MRC6           ((uint32)6UL)
#define XRDC_MRC7           ((uint32)7UL)
#define XRDC_MRC8           ((uint32)8UL)
#define XRDC_MRC9           ((uint32)9UL)
#define XRDC_MRC10          ((uint32)10UL)
#define XRDC_MRC11          ((uint32)11UL)
#define XRDC_MRC12          ((uint32)12UL)
#define XRDC_MRC13          ((uint32)13UL)
#define XRDC_MRC14          ((uint32)14UL)
#define XRDC_MRC15          ((uint32)15UL)

/*==================================================================================================
*                                              ENUMS
==================================================================================================*/
/**
* @brief              Enumeration listing MDAC instances
* */
typedef enum
{
    XRDC_MDAC0=0,
    XRDC_MDAC1,
    XRDC_MDAC2,
    XRDC_MDAC3,
    XRDC_MDAC4,
    XRDC_MDAC5,
    XRDC_MDAC6,
    XRDC_MDAC7,
    XRDC_MDAC8,
    XRDC_MDAC9,
    XRDC_MDAC10,
    XRDC_MDAC11,
    XRDC_MDAC12,
    XRDC_MDAC13,
    XRDC_MDAC14,
    XRDC_MDAC15,
    XRDC_MDAC16,
    XRDC_MDAC17,
    XRDC_MDAC18,
    XRDC_MDAC19,
    XRDC_MDAC20,
    XRDC_MDAC21
#if defined (S32R45)
    ,
    XRDC_MDAC32 = 32,
    XRDC_MDAC33,
    XRDC_MDAC34,
    XRDC_MDAC35,
    XRDC_MDAC36,
    XRDC_MDAC37,
    XRDC_MDAC38,
    XRDC_MDAC39,
    XRDC_MDAC40,
    XRDC_MDAC41,
    XRDC_MDAC42,
    XRDC_MDAC43
#endif
}Xrdc_Ip_MasterType;

/**
* @brief              Enumeration listing secure attributes of a XRDC master
* */
typedef enum
{
    XRDC_SECURE=0,
    XRDC_NON_SECURE,
    XRDC_INPUT_FROM_BUS_MASTER
} Xrdc_Ip_SecureAttributeType;

/**
* @brief              Enumeration listing priviledge attributes of a XRDC master
* */
typedef enum
{
    XRDC_USER_MODE=0,
    XRDC_PRIVILEDGE_MODE,
    XRDC_INPUT_PRIVILEDGE_FROM_BUS_MASTER
} Xrdc_Ip_PriviledgedAttributeType;

/**
* @brief              Enumeration listing XRDC domain IDs
* */
typedef enum
{
    XRDC_DOMAIN0 = 0,
    XRDC_DOMAIN1 = 1,
    XRDC_DOMAIN2 = 2,
    XRDC_DOMAIN3 = 3,
    XRDC_DOMAIN4 = 4,
    XRDC_DOMAIN5 = 5,
    XRDC_DOMAIN6 = 6,
    XRDC_DOMAIN7 = 7,
    XRDC_DOMAIN_UNKNOWN = 255
} Xrdc_Ip_DomainIDType;

/**
* @brief              Enumeration listing XRDC masters type
* */
typedef enum
{
    XRDC_CORE_MASTER=0,
    XRDC_NONCORE_MASTER=1,
    XRDC_RESERVE
} Xrdc_Ip_MasterCoreType;

/**
* @brief              Enumeration listing states of access violations 
* */
/* @implements     Xrdc_Ip_ErrorStateType_enum */
typedef enum
{
    XRDC_IP_NO_ACCESS              = 0,
    XRDC_IP_SINGLE_ACCESS          = 1,
    XRDC_IP_MULTIPLE_ACCESS        = 2
} Xrdc_Ip_ErrorStateType;

/**
* @brief              Enumeration listing errors occurred on a read or write access.
* */
/* @implements     Xrdc_Ip_ErrorAccessType_enum */
typedef enum
{
    XRDC_IP_NOERR_ACCESS           = 0,
    XRDC_IP_READ_ACCESS            = 1,
    XRDC_IP_WRITE_ACCESS           = 2
} Xrdc_Ip_ErrorAccessType;

/**
* @brief              Enumeration listing error attributes of access violations.
* */
/* @implements     Xrdc_Ip_ErrorAttributeType_enum */
typedef enum
{
    XRDC_IP_NO_ERRATTRIBUTE        = 0,
    XRDC_IP_SECUUSER_INST          = 1,
    XRDC_IP_SECUUSER_DATA          = 2,
    XRDC_IP_SECUPRIV_INST_ACCESS   = 3,
    XRDC_IP_SECUPRIV_DATA_ACCESS   = 4,
    XRDC_IP_NONSECUUSER_INST       = 5,
    XRDC_IP_NONSECUUSER_DATA       = 6,
    XRDC_IP_NONSECUREPRIV_INST     = 7,
    XRDC_IP_NONSECUREPRIV_DATA     = 8
} Xrdc_Ip_ErrorAttributeType;

/*==================================================================================================
*                                  STRUCTURES AND OTHER TYPEDEFS
==================================================================================================*/
/**
* @brief               Configuration structure containing XRDC memory region configuration 
* */
typedef struct
{
    const uint32                    u32XrdcInstance;                  /**< @brief XRDC instance */
    const uint32                    u32XrdcMrcInstance;               /**< @brief Corresponding MRC instance of current memory region*/
    const uint32                    u32XrdcMrcRegionDescriptor;       /**< @brief Selection of descriptor for current memory region*/
    const uint32                    u32XrdcStartAddress;              /**< @brief Start address of current memory region*/
    const uint32                    u32XrdcEndAddress;                /**< @brief End address of current memory region*/
    const uint32                    u32XrdcSema4Enable;               /**< @brief Enable or disable Semaphore support*/
    const uint32                    u32XrdcSema4Number;               /**< @brief Semaphore number used in access evaluation*/
    const uint32                    u32XrdcLock;                      /**< @brief Limits or prohibits writes to the set of MRGD registers*/
    const uint32                    u32XrdcMemPolicy;                 /**< @brief Access policy of current memory region*/
    const uint32                    u32XrdcMemPolicy1;
} Xrdc_Ip_MemConfigType;

/**
* @brief               Configuration structure containing XRDC peripheral slot configuration 
* */
typedef struct
{
    const uint32                    u32XrdcInstance;                  /**< @brief XRDC instance */
    const uint32                    u32XrdcPdacInstance;              /**< @brief Corresponding PDAC instance of current peripheral slot*/
    const uint32                    u32XrdcSema4Enable;               /**< @brief Enable or disable Semaphore support*/
    const uint32                    u32XrdcSema4Number;               /**< @brief Semaphore number used in access evaluation*/
    const uint32                    u32XrdcPerPolicy;                 /**< @brief Access policy of current peripheral slot*/
    const uint32                    u32XrdcPerPolicy1;
} Xrdc_Ip_PeripheralConfigType;

/**
* @brief              Structure used to retrieve violation details.
* */
/* @implements     Xrdc_Ip_ErrorStatusType_struct */
typedef struct
{
    uint32                              u32AddError;                 /**< @brief Address of an access violation */
    uint32                              u32AddErrorRemain;
    Xrdc_Ip_ErrorStateType              ErrState;                    /**< @brief State of access violations*/
    uint32                              u32ErrPort;                  /**< @brief Port number of the MRC that detected the access violation*/
    Xrdc_Ip_ErrorAccessType             ErrAccess;                   /**< @brief Whether the captured access violation occurred on a read or write access*/
    Xrdc_Ip_ErrorAttributeType          ErrAttribute;                /**< @brief Attributes of the access violation.*/
}Xrdc_Ip_ErrorStatusType;

/**
* @brief              Structure used to retrieve information violation details and the domain ID where violation occured.
* */
/* @implements     Xrdc_Ip_DomainIDErrStatusType_struct */
typedef struct
{
    Xrdc_Ip_DomainIDType                   DomainIDAccessError;     /**< @brief Domain ID of the access violation*/
    Xrdc_Ip_ErrorStatusType                ErrorStatus[20];         /**< @brief Error status of the access violation*/
}Xrdc_Ip_DomainIDErrStatusType;

/**
* @brief               Configuration structure containing XRDC domain configuration 
* */
typedef struct
{

    Xrdc_Ip_DomainIDType               u32XrdcDomainID;             /**< @brief XRDC domain ID*/
    const uint32                       u32XrdcInstance;             /**< @brief XRDC instance */
    Xrdc_Ip_MasterType                 XrdcMdacInstance;            /**< @brief Corresponding MDA instance of current master */
    Xrdc_Ip_MasterCoreType             XrdcCoreMdacInstance;        /**< @brief Core or noncore attribute of current master*/
    /*  core_master */
    const uint32                       u32XrdcProcessID;            /**< @brief PID value of curent domain ID*/
    const uint32                       u32XrdcProcessIDMask;        /**< @brief PIDM value of current domain ID*/
    const uint32                       u32XrdcProcessIDEnable;      /**< @brief Enable or disable PID support */
    const uint32                       u32XrdcThreeStateModel;      /**< @brief If core master support three-state model or not */
    Xrdc_Ip_SecureAttributeType        eXrdcSecureOutput;          /**< @brief Secure attribute of current master*/
    Xrdc_Ip_PriviledgedAttributeType   eXrdcPriviledgeOutput;      /**< @brief Priviledged attribute of current master*/
    const uint32                       u32XrdcWordDescriptor;      /**< @brief Selection of descriptor for current core master*/
} Xrdc_Ip_DomainConfigType;

/**
* @brief              IP configuration structure
* */
typedef struct
{
    const Xrdc_Ip_DomainConfigType                 * pDomainConfig;                  /**< @brief Pointer to a list of configured domains*/
    const uint32                                     u32DomainConfigCnt;             /**< @brief Number of configured domains*/
    const Xrdc_Ip_MemConfigType                    * pMemoryDesConfig;               /**< @brief Pointer to a list of configured memory regions*/
    const uint32                                     u32MemoryConfigCnt;             /**< @brief Number of configured memory regions*/
    const Xrdc_Ip_PeripheralConfigType             * pPeripheralDescriptorConfig;    /**< @brief Pointer to a list of configured peripheral slots */
    const uint32                                     u32PeripheralConfigCnt;         /**< @brief Number of configured peripheral slots*/
    const uint32                                   * pInstanceInUsed;                /**< @brief Pointer to a list of configured XRDC instances*/
    const uint32                                     u32InstanceInUsedCnt;           /**< @brief Number of configured XRDC instances*/
} Xrdc_Ip_ConfigType;
/*==================================================================================================
*                                  GLOBAL VARIABLE DECLARATIONS
==================================================================================================*/

/*===============================================================================================
                                 GLOBAL VARIABLE DECLARATIONS
===============================================================================================*/

/*===============================================================================================
*                                     FUNCTION PROTOTYPES
===============================================================================================*/

/*==================================================================================================
*                                       FUNCTION PROTOTYPES
==================================================================================================*/


#ifdef __cplusplus
}
#endif

/** @} */

#endif /* XRDC_IP_TYPES_H */

