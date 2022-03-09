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
*   @file Xrdc_Ip_PBcfg.c
*
*   @addtogroup XRDC_IP XRDC IPV Driver
*   @{
*/

#ifdef __cplusplus
extern "C"{
#endif

/*==================================================================================================
*                                        INCLUDE FILES
* 1) system and project includes
* 2) needed interfaces from external units
* 3) internal and external interfaces from this unit
==================================================================================================*/
#include "Xrdc_Ip_Types.h"
#include "Xrdc_Ip_Cfg.h"
#include "Xrdc_Ip_Device_Registers.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C                     43
#define RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C      4
#define RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C      4
#define RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C   0
#define RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C              1
#define RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C              0
#define RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C              0
/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Xrdc_Ip_Types.h */
#if (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C != RM_XRDC_IP_TYPES_VENDOR_ID)
    #error "Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Types.h have different vendor ids"
#endif
#if ((RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C    != RM_XRDC_IP_TYPES_AR_RELEASE_MAJOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C    != RM_XRDC_IP_TYPES_AR_RELEASE_MINOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C != RM_XRDC_IP_TYPES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Types.h are different"
#endif
#if ((RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C != RM_XRDC_IP_TYPES_SW_MAJOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C != RM_XRDC_IP_TYPES_SW_MINOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C != RM_XRDC_IP_TYPES_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Types.h are different"
#endif

/* Checks against Xrdc_Ip_Cfg.h */
#if (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C != RM_XRDC_IP_CFG_VENDOR_ID)
    #error "Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Cfg.h have different vendor ids"
#endif
#if ((RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C    != RM_XRDC_IP_CFG_AR_RELEASE_MAJOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C    != RM_XRDC_IP_CFG_AR_RELEASE_MINOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C != RM_XRDC_IP_CFG_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Cfg.h are different"
#endif
#if ((RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C != RM_XRDC_IP_CFG_SW_MAJOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C != RM_XRDC_IP_CFG_SW_MINOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C != RM_XRDC_IP_CFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Cfg.h are different"
#endif

/* Checks against Xrdc_Ip_Device_Registers.h */
#if (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_VENDOR_ID_C != RM_XRDC_IP_DEVICE_REGISTERS_VENDOR_ID)
    #error "Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Device_Registers.h have different vendor ids"
#endif
#if ((RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MAJOR_VERSION_C    != RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_MAJOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_MINOR_VERSION_C    != RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_MINOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_AR_RELEASE_REVISION_VERSION_C != RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Device_Registers.h are different"
#endif
#if ((RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MAJOR_VERSION_C != RM_XRDC_IP_DEVICE_REGISTERS_SW_MAJOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_MINOR_VERSION_C != RM_XRDC_IP_DEVICE_REGISTERS_SW_MINOR_VERSION) || \
     (RM_XRDC_IP_PBCFG_BOARD_INITPERIPHERALS_SW_PATCH_VERSION_C != RM_XRDC_IP_DEVICE_REGISTERS_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Xrdc_Ip_BOARD_INITPERIPHERALS_PBcfg.c and Xrdc_Ip_Device_Registers.h are different"
#endif
/*==================================================================================================
*                          LOCAL TYPEDEFS (STRUCTURES, UNIONS, ENUMS)
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL MACROS
==================================================================================================*/



/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

/*==================================================================================================
*                                      BUFFER DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                   STATE STRUCTURE DECLARATIONS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL CONSTANTS
==================================================================================================*/


/*==================================================================================================
*                                      LOCAL VARIABLES
==================================================================================================*/

/*==================================================================================================
*                                      GLOBAL VARIABLES
==================================================================================================*/

#define RM_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"


static const Xrdc_Ip_MemConfigType Xrdc_Memory_Config_BOARD_INITPERIPHERALS[9] =
{
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC0 will be used to control the address range below */
        XRDC_MRC0,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)0UL,
        /*Start address for XRDC_MRC0 controller and descriptor 0 */
        (uint32)4194304UL,
        /*End address for XRDC_MRC0 controller and descriptor 0 */
        (uint32)8208383UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC0 will be used to control the address range below */
        XRDC_MRC0,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)1UL,
        /*Start address for XRDC_MRC0 controller and descriptor 1 */
        (uint32)0UL,
        /*End address for XRDC_MRC0 controller and descriptor 1 */
        (uint32)32767UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC1 will be used to control the address range below */
        XRDC_MRC1,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)0UL,
        /*Start address for XRDC_MRC1 controller and descriptor 0 */
        (uint32)536870912UL,
        /*End address for XRDC_MRC1 controller and descriptor 0 */
        (uint32)536936447UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC1 will be used to control the address range below */
        XRDC_MRC1,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)1UL,
        /*Start address for XRDC_MRC1 controller and descriptor 1 */
        (uint32)541065216UL,
        /*End address for XRDC_MRC1 controller and descriptor 1 */
        (uint32)541253631UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC1 will be used to control the address range below */
        XRDC_MRC1,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)2UL,
        /*Start address for XRDC_MRC1 controller and descriptor 2 */
        (uint32)541253632UL,
        /*End address for XRDC_MRC1 controller and descriptor 2 */
        (uint32)541257727UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC1 will be used to control the address range below */
        XRDC_MRC1,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)3UL,
        /*Start address for XRDC_MRC1 controller and descriptor 3 */
        (uint32)541257728UL,
        /*End address for XRDC_MRC1 controller and descriptor 3 */
        (uint32)541261823UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)56UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC1 will be used to control the address range below */
        XRDC_MRC1,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)4UL,
        /*Start address for XRDC_MRC1 controller and descriptor 4 */
        (uint32)541261824UL,
        /*End address for XRDC_MRC1 controller and descriptor 4 */
        (uint32)541326847UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC1 will be used to control the address range below */
        XRDC_MRC1,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)5UL,
        /*Start address for XRDC_MRC1 controller and descriptor 5 */
        (uint32)541327104UL,
        /*End address for XRDC_MRC1 controller and descriptor 5 */
        (uint32)541327359UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select Memory region controller XRDC_MRC1 will be used to control the address range below */
        XRDC_MRC1,
        /*Each memory region controller include 16 descriptors to write configuration. If multiple descriptors are configured the policy will be ORed by all the descriptors */
        (uint32)6UL,
        /*Start address for XRDC_MRC1 controller and descriptor 6 */
        (uint32)541327360UL,
        /*End address for XRDC_MRC1 controller and descriptor 6 */
        (uint32)541343743UL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this memory range */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        (uint32)0x00000000UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    }
};

static const Xrdc_Ip_PeripheralConfigType Xrdc_Peripheral_Config_BOARD_INITPERIPHERALS[17] =
{
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_TRGMUX,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_MSCM,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_XRDC,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_MC_RGM,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_DCM,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_SIRC,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_SXOSC,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_MC_CGM,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_MC_ME,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_PLL,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_PMC,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)7UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_LPUART_0,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_SIUL2_VIRTWRAPPER_PDAC0_HSE_B_0,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_SIUL2_VIRTWRAPPER_PDAC0_HSE_B_1,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_SEMA_42,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)63UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_SWT_0,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)56UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    },
    {
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Peripheral slot number of a block of peripherals. Checking Reference manual for chip specific*/
        (uint32)XRDC_SWT_1,
        /*Enable Semaphore would require the domain must own the gate to have access right for this peripheral slot */
        (uint32)XRDC_SEMA4_DISABLE,
        /*Number of the gate of sema4 for granting access*/
        (uint32)0UL,
        /*Access policy for Domains 0-7 is calculated automatically*/
        (uint32)56UL,
        /*Access policy for Domains 8-15 is calculated automatically*/
        (uint32)0UL
    }
};

static const Xrdc_Ip_DomainConfigType Xrdc_Domain_Config_BOARD_INITPERIPHERALS[XRDC_NUM_DOMAIN_CONFIG] =
{
    {
        /*Valid DomainID from 0 - 7 */
        XRDC_DOMAIN0,
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select the MDA register respect the Master instance */
        XRDC_MDAC1,
        /*Attribute to specfiy the type of current master which is core or non core master*/
        XRDC_NONCORE_MASTER,
        /*PID field only has meaning if the core is core master type and PID mode enable*/
        0,
        /*PID mask*/
        0,
        /*PID mode enable - only valid if the master instance is core type*/
        XRDC_MDA_PID_DISABLE,
        /*Three State Model to be done later if architecture support*/
        0UL,
        /*Domain Secure Mode*/
        XRDC_SECURE,
        /*Domain Priviledged Mode*/
        XRDC_USER_MODE,
        /*Selection of descriptor for current master core. If master is non-core master this field should ignore*/
        XRDC_WORD0
    },
    {
        /*Valid DomainID from 0 - 7 */
        XRDC_DOMAIN0,
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select the MDA register respect the Master instance */
        XRDC_MDAC2,
        /*Attribute to specfiy the type of current master which is core or non core master*/
        XRDC_NONCORE_MASTER,
        /*PID field only has meaning if the core is core master type and PID mode enable*/
        0,
        /*PID mask*/
        0,
        /*PID mode enable - only valid if the master instance is core type*/
        XRDC_MDA_PID_DISABLE,
        /*Three State Model to be done later if architecture support*/
        0UL,
        /*Domain Secure Mode*/
        XRDC_SECURE,
        /*Domain Priviledged Mode*/
        XRDC_USER_MODE,
        /*Selection of descriptor for current master core. If master is non-core master this field should ignore*/
        XRDC_WORD0
    },
    {
        /*Valid DomainID from 0 - 7 */
        XRDC_DOMAIN0,
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select the MDA register respect the Master instance */
        XRDC_MDAC3,
        /*Attribute to specfiy the type of current master which is core or non core master*/
        XRDC_CORE_MASTER,
        /*PID field only has meaning if the core is core master type and PID mode enable*/
        0,
        /*PID mask*/
        0,
        /*PID mode enable - only valid if the master instance is core type*/
        XRDC_MDA_PID_DISABLE,
        /*Three State Model to be done later if architecture support*/
        0UL,
        /*Domain Secure Mode*/
        XRDC_SECURE,
        /*Domain Priviledged Mode*/
        XRDC_USER_MODE,
        /*Selection of descriptor for current master core. If master is non-core master this field should ignore*/
        XRDC_WORD0
    },
    {
        /*Valid DomainID from 0 - 7 */
        XRDC_DOMAIN0,
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select the MDA register respect the Master instance */
        XRDC_MDAC5,
        /*Attribute to specfiy the type of current master which is core or non core master*/
        XRDC_NONCORE_MASTER,
        /*PID field only has meaning if the core is core master type and PID mode enable*/
        0,
        /*PID mask*/
        0,
        /*PID mode enable - only valid if the master instance is core type*/
        XRDC_MDA_PID_DISABLE,
        /*Three State Model to be done later if architecture support*/
        0UL,
        /*Domain Secure Mode*/
        XRDC_SECURE,
        /*Domain Priviledged Mode*/
        XRDC_USER_MODE,
        /*Selection of descriptor for current master core. If master is non-core master this field should ignore*/
        XRDC_WORD0
    },
    {
        /*Valid DomainID from 0 - 7 */
        XRDC_DOMAIN0,
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select the MDA register respect the Master instance */
        XRDC_MDAC0,
        /*Attribute to specfiy the type of current master which is core or non core master*/
        XRDC_CORE_MASTER,
        /*PID field only has meaning if the core is core master type and PID mode enable*/
        0,
        /*PID mask*/
        0,
        /*PID mode enable - only valid if the master instance is core type*/
        XRDC_MDA_PID_DISABLE,
        /*Three State Model to be done later if architecture support*/
        0UL,
        /*Domain Secure Mode*/
        XRDC_SECURE,
        /*Domain Priviledged Mode*/
        XRDC_USER_MODE,
        /*Selection of descriptor for current master core. If master is non-core master this field should ignore*/
        XRDC_WORD0
    },
    {
        /*Valid DomainID from 0 - 7 */
        XRDC_DOMAIN1,
        /*XRDC instance */
        XRDC_INSTANCE0,
        /*Select the MDA register respect the Master instance */
        XRDC_MDAC4,
        /*Attribute to specfiy the type of current master which is core or non core master*/
        XRDC_CORE_MASTER,
        /*PID field only has meaning if the core is core master type and PID mode enable*/
        0,
        /*PID mask*/
        0,
        /*PID mode enable - only valid if the master instance is core type*/
        XRDC_MDA_PID_DISABLE,
        /*Three State Model to be done later if architecture support*/
        0UL,
        /*Domain Secure Mode*/
        XRDC_SECURE,
        /*Domain Priviledged Mode*/
        XRDC_USER_MODE,
        /*Selection of descriptor for current master core. If master is non-core master this field should ignore*/
        XRDC_WORD0
    }
};

static const uint32 Xrdc_Instances_InUsed_BOARD_INITPERIPHERALS[1] =
{
    XRDC_INSTANCE0
};


const Xrdc_Ip_ConfigType Xrdc_Config_BOARD_INITPERIPHERALS =
{
    Xrdc_Domain_Config_BOARD_INITPERIPHERALS,
    (uint32)6UL,
    Xrdc_Memory_Config_BOARD_INITPERIPHERALS,
    (uint32)9UL,
    Xrdc_Peripheral_Config_BOARD_INITPERIPHERALS,
    (uint32)17UL,
    Xrdc_Instances_InUsed_BOARD_INITPERIPHERALS,
    (uint32)1UL
};


#define RM_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Rm_MemMap.h"


/*==================================================================================================
*                                   LOCAL FUNCTION PROTOTYPES
==================================================================================================*/


/*==================================================================================================
*                                       LOCAL FUNCTIONS
==================================================================================================*/


/*==================================================================================================
*                                       GLOBAL FUNCTIONS
==================================================================================================*/

#ifdef __cplusplus
}
#endif

/** @} */

