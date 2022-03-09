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

#ifndef XRDC_IP_DEVICE_REGISTERS_H
#define XRDC_IP_DEVICE_REGISTERS_H

/**
*   @file Xrdc_Ip_Device_Registers.h
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
#include "Xrdc_Ip_Cfg_Defines.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define RM_XRDC_IP_DEVICE_REGISTERS_VENDOR_ID                      43
#define RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_MAJOR_VERSION       4
#define RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_MINOR_VERSION       4
#define RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_REVISION_VERSION    0
#define RM_XRDC_IP_DEVICE_REGISTERS_SW_MAJOR_VERSION               1
#define RM_XRDC_IP_DEVICE_REGISTERS_SW_MINOR_VERSION               0
#define RM_XRDC_IP_DEVICE_REGISTERS_SW_PATCH_VERSION               0

/*==================================================================================================
*                                      FILE VERSION CHECKS
==================================================================================================*/
/* Checks against Xrdc_Ip_Cfg_Defines.h */
#if (RM_XRDC_IP_DEVICE_REGISTERS_VENDOR_ID != RM_XRDC_IP_CFG_DEFINES_VENDOR_ID)
    #error "Xrdc_Ip_Device_Registers.h and Xrdc_Ip_Cfg_Defines.h have different vendor ids"
#endif
#if ((RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_MAJOR_VERSION    != RM_XRDC_IP_CFG_DEFINES_AR_RELEASE_MAJOR_VERSION) || \
     (RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_MINOR_VERSION    != RM_XRDC_IP_CFG_DEFINES_AR_RELEASE_MINOR_VERSION) || \
     (RM_XRDC_IP_DEVICE_REGISTERS_AR_RELEASE_REVISION_VERSION != RM_XRDC_IP_CFG_DEFINES_AR_RELEASE_REVISION_VERSION))
     #error "AUTOSAR Version Numbers of Xrdc_Ip_Device_Registers.h and Xrdc_Ip_Cfg_Defines.h are different"
#endif
#if ((RM_XRDC_IP_DEVICE_REGISTERS_SW_MAJOR_VERSION != RM_XRDC_IP_CFG_DEFINES_SW_MAJOR_VERSION) || \
     (RM_XRDC_IP_DEVICE_REGISTERS_SW_MINOR_VERSION != RM_XRDC_IP_CFG_DEFINES_SW_MINOR_VERSION) || \
     (RM_XRDC_IP_DEVICE_REGISTERS_SW_PATCH_VERSION != RM_XRDC_IP_CFG_DEFINES_SW_PATCH_VERSION))
    #error "Software Version Numbers of Xrdc_Ip_Device_Registers.h and Xrdc_Ip_Cfg_Defines.h are different"
#endif

/*==================================================================================================
*                                            CONSTANTS
==================================================================================================*/

/*==================================================================================================
*                                       DEFINES AND MACROS
==================================================================================================*/

#define XRDC_REG_WRITE32(address, value)       ((*(volatile uint32*)(address))= (value))

#define XRDC_REG_READ32(address)               (*(volatile uint32*)(address))

#define XRDC_REG_BIT_CLEAR32(address, mask)    ((*(volatile uint32*)(address))&= (~(mask)))

#define XRDC_REG_BIT_GET32(address, mask)      ((*(volatile uint32*)(address))& (mask))

#define XRDC_REG_BIT_SET32(address, mask)      ((*(volatile uint32*)(address))|= (mask))

#define XRDC_REG_RMW32(address, mask, value)   (XRDC_REG_WRITE32((address), (((XRDC_REG_READ32(address))& ((uint32)~(mask)))| (value))))

#define XRDC_CR_ADDR32(instance)                         ((uint32)((XRDC_MOD_BASEADDR_ADDR32(instance)) + (uint32)XRDC_CR_OFFSET))
#define XRDC_HWCFG0_ADDR32(instance)                     ((uint32)((XRDC_MOD_BASEADDR_ADDR32(instance)) + (uint32)XRDC_HWCFG0_OFFSET))
#define XRDC_HWCFG1_ADDR32(instance)                     ((uint32)((XRDC_MOD_BASEADDR_ADDR32(instance)) + (uint32)XRDC_HWCFG1_OFFSET))
#define XRDC_HWCFG2_ADDR32(instance)                     ((uint32)((XRDC_MOD_BASEADDR_ADDR32(instance)) + (uint32)XRDC_HWCFG2_OFFSET))

/*
* @brief XRDC_MDACFG This register defines the number of implemented domain assignment registers for bus
master m, where m+1 can specify from 1 to 64 bus masters.
*/
#define XRDC_MDACFG_ADDR_ADDR32(instance,idx)           ((uint32)(XRDC_MOD_BASEADDR_ADDR32((instance)) + (uint32)XRDC_MDACFG_OFFSET + (uint32)(idx))

/*
* @brief XRDC_MRCFG This read-only register defines the number of implemented memory region descriptors
for each MRCr, where r+1 can specify up to 16 instances
*/
#define XRDC_MRCFG_ADDR_ADDR32(instance,idx)            ((uint32)(XRDC_MOD_BASEADDR_ADDR32((instance)) + (uint32)XRDC_MRCFG_OFFSET + (uint32)(idx))

/*
* @brief XRDC_DERRLOC provide the instance number of the submodule where (an) access violation(s) occurred
*/
#define XRDC_DERRLOC_ADDR32(instance, idx)               ((uint32)(XRDC_MOD_BASEADDR_ADDR32((instance)) + (uint32)XRDC_DERRLOC_OFFSET + (uint32)((idx)<<2UL))


/*
* @brief Domain Error Word provides the address of an access violation detected by
either a memory region controller (MRC) or a peripheral access controller (PAC). These
registers are organized as a word array, which is indexed by the violating submodule
instance number. That is, the index, i, of this array is the instance number of the
submodule that detected the access violation. The submodule instance numbers are
provided by the DERRLOC registers.
*/
#define XRDC_DERR_W_ADDR32(instance, idx0, idx1)                ((uint32)(XRDC_MOD_BASEADDR_ADDR32((instance)) + (uint32)XRDC_DERR_W_OFFSET + (uint32)((idx1)<<4) + (uint32)((idx0)<<2)))

/*
* @brief Process Identifier
*/

#ifndef XRDC_0_PID_OFFSET
#define XRDC_0_PID_OFFSET                                       (0x700U)
#endif

#define XRDC_PID_ADDR32(idx)                                    ((uint32)(XRDC_MOD_BASEADDR_ADDR32(0) + (uint32)XRDC_0_PID_OFFSET + (uint32)((idx)<<2)))

/*
* @brief Master Domain Assignment
*/     
#define XRDC_MDA_W_DFMT0_ADDR32(instance, idx0, idx1)                       ((uint32)(XRDC_MOD_BASEADDR_ADDR32(instance) + (uint32)XRDC_MDA_W_DFMT0_OFFSET + (uint32)((idx1)<<5UL) + (uint32)((idx0)<<2UL)))

#define XRDC_MDA_W_DFMT1_ADDR32(instance, idx0)                             ((uint32)(XRDC_MOD_BASEADDR_ADDR32(instance) + (uint32)XRDC_MDA_W_DFMT0_OFFSET + (uint32)((idx0)<<5UL)))
          
/*
* @brief Peripheral Domain Access Control (32 slot numbers)
*/  
#define XRDC_PDAC_W0_ADDR32(instance, idx)                        ((uint32)((XRDC_MOD_BASEADDR_ADDR32(instance)) + (uint32)XRDC_PDAC_W0_OFFSET + (uint32)(((uint32)(idx)>>7UL)*(uint32)0x400UL) + ((uint32)((idx)&0x0000007FUL)<<3UL)))

#define XRDC_PDAC_W1_ADDR32(instance, idx)                        ((uint32)((XRDC_MOD_BASEADDR_ADDR32(instance)) + (uint32)XRDC_PDAC_W1_OFFSET + (uint32)(((uint32)(idx)>>7UL)*(uint32)0x400UL) + ((uint32)((idx)&0x0000007FUL)<<3UL)))

/*
* @brief Memory Domain Access Control (32 slot numbers)
*/  
#define XRDC_MRGD_W_ADDR32(instance, idx0, idx1)                  ((uint32)((XRDC_MOD_BASEADDR_ADDR32(instance)) + (uint32)XRDC_MRGD_OFFSET + (uint32)((idx1) * 32UL) + (uint32)((idx0) * 4UL)))
/*
*  @brief Bit masking for regsiter
*/

#define XRDC_CR_GVLD_ENABLE                        ((uint32)0x00000001UL)
#define XRDC_CR_GVLD_DISABLE                       ((uint32)0x00000000UL)
#define XRDC_SNUM_MASK                             ((uint32)0x0F000000UL)
#define XRDC_SNUM_SHIFT_U32                        ((uint32)24)

#define XRDC_SEMA4_ENABLE                          ((uint32)0x40000000UL)

#define XRDC_SEMA4_DISABLE                         ((uint32)0x00000000UL)
#define XRDC_PDAC_W1_VALID_MASK                    ((uint32)0x80000000UL)
#define XRDC_PDAC_W1_DACP_MASK                     ((uint32)0x00FFFFFFUL)
#define XRDC_PDAC_W1_DESCRIPTOR_ENABLE             ((uint32)0x80000000UL)
#define XRDC_PDAC_W1_DESCRIPTOR_DISABLE            ((uint32)0x00000000UL)
#define XRDC_MDA_PID_SHIFT_U32                     ((uint32)16)

#define XRDC_MDA_PID_MASK                          ((uint32)3F<<XRDC_MDA_PID_SHIFT_U32)

#define XRDC_MDA_PIDM_SHIFT_U32                    ((uint32)8)

#define XRDC_MDA_PIDM_MASK                         ((uint32)3F<<XRDC_MDA_PIDM_SHIFT_U32)

#define XRDC_MDA_PID_PE_SHIFT_U32                  ((uint32)6)

#define XRDC_MDA_PID_ENABLE_EXPRESSION0            ((uint32)0x2<<XRDC_MDA_PID_PE_SHIFT_U32)

#define XRDC_MDA_PID_ENABLE_EXPRESSION1            ((uint32)0x3<<XRDC_MDA_PID_PE_SHIFT_U32)

#define XRDC_MDA_PID_DISABLE                       ((uint32)0x00000000UL)

#define XRDC_PID_TSM_SHIFT_U32                     ((uint32)28)

#define XRDC_PID_TSM_ENABLE                        ((uint32)0x00000001<<XRDC_PID_TSM_SHIFT_U32)

#define XRDC_PID_TSM_DISABLE                       ((uint32)0x00000000<<XRDC_PID_TSM_SHIFT_U32)

#define XRDC_MDA_DOMAIN_ID_MASK                    ((uint32)0x00000007)

#define XRDC_MDA_DID_SELECT_SHIFT_U32              ((uint32)4)
#define XRDC_MDA_SA_SECURE_ATTR_SHIFT_U32          ((uint32)6)
#define XRDC_MDA_PA_PRIVILEDGE_ATTR_SHIFT_U32      ((uint32)4)


#define XRDC_MDA_SA_SECURE_ATTR_USED               ((uint32)0x00 << XRDC_MDA_SA_SECURE_ATTR_SHIFT_U32)

#define XRDC_MDA_SA_NON_SECURE_ATTR_USED           ((uint32)0x01 << XRDC_MDA_SA_SECURE_ATTR_SHIFT_U32)

#define XRDC_MDA_SA_BUS_MASTER_ATTR_DIRECTLY_USED  ((uint32)0x03 << XRDC_MDA_SA_SECURE_ATTR_SHIFT_U32)

#define XRDC_MDA_SA_ATTR_MASK                      ((uint32)0x03 << XRDC_MDA_SA_SECURE_ATTR_SHIFT_U32)

#define XRDC_MDA_PA_USERMODE_ATTR_USED             ((uint32)0x00 << XRDC_MDA_PA_PRIVILEDGE_ATTR_SHIFT_U32)

#define XRDC_MDA_PA_PRIVILEGE_ATTR_USED            ((uint32)0x01 << XRDC_MDA_PA_PRIVILEDGE_ATTR_SHIFT_U32)

#define XRDC_MDA_PA_BUS_MASTER_ATTR_DIRECTLY_USED  ((uint32)0x03 << XRDC_MDA_PA_PRIVILEDGE_ATTR_SHIFT_U32)

#define XRDC_MDA_PA_ATTR_MASK                      ((uint32)0x03 << XRDC_MDA_PA_PRIVILEDGE_ATTR_SHIFT_U32)

#define XRDC_MDA_W1_VALID_MASK                     ((uint32)0x80000000UL)
#define XRDC_MDA_W1_DACP_MASK                      ((uint32)0x00FFFFFFUL)
#define XRDC_MDA_W1_DESCRIPTOR_ENABLE              ((uint32)0x80000000UL)
#define XRDC_MDA_W1_DESCRIPTOR_DISABLE             ((uint32)0x00000000UL)

#define XRDC_DID_FIELD_USED                        ((uint32)0x00000000<<XRDC_MDA_DID_SELECT_SHIFT_U32)
#define XRDC_DID_BYPASS_SHIFT_U32                  ((uint32)8)

#define XRDC_DID_BYPASS_USED                       ((uint32)0x00000001<<XRDC_DID_BYPASS_SHIFT_U32)

#define XRDC_DID_BYPASS_NOT_USED                   ((uint32)0x00000000<<XRDC_DID_BYPASS_SHIFT_U32)
#define XRDC_PID_SECURE_MODE_SHIFT_U32             ((uint32)5)

#define XRDC_PID_NON_SECURE_MODE                   ((uint32)0x00000001<<XRDC_PID_SECURE_MODE_SHIFT_U32)

#define XRDC_PID_NON_SECURE_MODE_MASK              ((uint32)0x00000001<<XRDC_PID_SECURE_MODE_SHIFT_U32)

#define XRDC_ERROR_STATE_MASK_U32                  ((uint32)0xC0000000UL)
#define XRDC_ERROR_PORT_MASK_U32                   ((uint32)0x07000000UL)
#define XRDC_ERROR_ACCESS_MASK_U32                 ((uint32)0x00000800UL)
#define XRDC_ERROR_ATTRIBUTE_MASK_U32              ((uint32)0x00000700UL)
#define XRDC_ERROR_RECR_U32                        ((uint32)0x40000000UL)
#define XRDC_ERROR_STATE_SHIFT_U32                 ((uint32)(30U))
#define XRDC_ERROR_PORT_SHIFT_U32                  ((uint32)(24U))
#define XRDC_ERROR_ACCESS_SHIFT_U32                ((uint32)(11U))
#define XRDC_ERROR_ATTRIBUTE_SHIFT_U32             ((uint32)(8U))

#define XRDC_PID_MAX_VALUE_U8                      ((uint8)(0x1F))
#define XRDC_PID_FIELD_MASK                        ((uint32)0x0000003FUL)
#define XRDC_PID_NONSECURE_FIELD_MASK              ((uint32)0x0000001FUL)

#ifndef XRDC_PID_LK2_MASK
#define XRDC_PID_LK2_MASK                          ((uint32)0x60000000UL)
#endif

#define XRDC_PID_LK2_SHIFT_U32                     ((uint32)(29U))

#define XRDC_MASTER_CORE_FORMAT                    ((uint32)0x0 << 29U)
#define XRDC_MASTER_NONCORE_FORMAT                 ((uint32)0x1 << 29U)

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

#endif /* XRDC_IP_DEVICE_REGISTERS_H */


