/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!GlobalInfo
product: Clocks v8.0
processor: S32K324
package_id: S32K324_257BGA
mcu_data: PlatformSDK_S32K3_2021_10
processor_version: 0.0.0
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/
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
*   @file       Clock_Ip_PBcfg.c
*   @version    1.0.0
*
*   @brief   AUTOSAR Mcu - Post-Build(PB) configuration file code template.
*   @details Code template for Post-Build(PB) configuration file generation.
*
*   @addtogroup CLOCK_DRIVER_CONFIGURATION Clock Driver
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
#include "Clock_Ip_PBcfg.h"
#include "StandardTypes.h"
#include "Clock_Ip.h"
#include "Clock_Ip_Private.h"

/*==================================================================================================
*                              SOURCE FILE VERSION INFORMATION
==================================================================================================*/
#define CLOCK_IP_PBCFG_VENDOR_ID_C                      43
#define CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C       4
#define CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C       4
#define CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C    0
#define CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C               1
#define CLOCK_IP_PBCFG_SW_MINOR_VERSION_C               0
#define CLOCK_IP_PBCFG_SW_PATCH_VERSION_C               0

/*==================================================================================================
*                                     FILE VERSION CHECKS
==================================================================================================*/
/* Check if source file and Clock_Ip_PBcfg.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_PBCFG_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip_PBcfg.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h are different"
#endif

/* Check if source file and Clock_Ip_PBcfg.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_PBCFG_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_PBCFG_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_PBCFG_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_PBcfg.h are different"
#endif

#ifndef DISABLE_MCAL_INTERMODULE_ASR_CHECK
/* Check if source file and StandardTypes.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != STD_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != STD_AR_RELEASE_MINOR_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and StandardTypes.h are different"
#endif
#endif    /* DISABLE_MCAL_INTERMODULE_ASR_CHECK */

/* Check if source file and Clock_Ip.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip.h are different"
#endif

/* Check if source file and Clock_Ip.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip.h are different"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same vendor */
#if (CLOCK_IP_PBCFG_VENDOR_ID_C != CLOCK_IP_PRIVATE_VENDOR_ID)
    #error "Clock_Ip_PBcfg.c and Clock_Ip_Private.h have different vendor ids"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Autosar version */
#if ((CLOCK_IP_PBCFG_AR_RELEASE_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_MINOR_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_AR_RELEASE_REVISION_VERSION_C != CLOCK_IP_PRIVATE_AR_RELEASE_REVISION_VERSION) \
    )
    #error "AutoSar Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
#endif

/* Check if source file and Clock_Ip_Private.h file are of the same Software version */
#if ((CLOCK_IP_PBCFG_SW_MAJOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MAJOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_MINOR_VERSION_C != CLOCK_IP_PRIVATE_SW_MINOR_VERSION) || \
     (CLOCK_IP_PBCFG_SW_PATCH_VERSION_C != CLOCK_IP_PRIVATE_SW_PATCH_VERSION) \
    )
    #error "Software Version Numbers of Clock_Ip_PBcfg.c and Clock_Ip_Private.h are different"
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

#define MCU_START_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

/* TEXT BELOW IS USED AS SETTING FOR TOOLS *************************************
!!Configuration
name: BOARD_BootClockRUN
called_from_default_init: true
outputs:
- {id: ADC0_CLK.outFreq, value: 160 MHz}
- {id: ADC1_CLK.outFreq, value: 160 MHz}
- {id: ADC2_CLK.outFreq, value: 160 MHz}
- {id: AIPS_PLAT_CLK.outFreq, value: 80 MHz}
- {id: AIPS_SLOW_CLK.outFreq, value: 40 MHz}
- {id: BCTU0_CLK.outFreq, value: 160 MHz}
- {id: CLKOUT_RUN_CLK.outFreq, value: 8 MHz}
- {id: CLKOUT_STANDBY_CLK.outFreq, value: 24 MHz}
- {id: CMP0_CLK.outFreq, value: 40 MHz}
- {id: CMP1_CLK.outFreq, value: 40 MHz}
- {id: CMP2_CLK.outFreq, value: 40 MHz}
- {id: CORE_CLK.outFreq, value: 160 MHz}
- {id: CRC0_CLK.outFreq, value: 80 MHz}
- {id: DCM0_CLK.outFreq, value: 40 MHz}
- {id: DCM_CLK.outFreq, value: 40 MHz}
- {id: DMAMUX0_CLK.outFreq, value: 160 MHz}
- {id: DMAMUX1_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD0_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD10_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD11_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD12_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD13_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD14_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD15_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD16_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD17_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD18_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD19_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD1_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD20_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD21_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD22_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD23_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD24_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD25_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD26_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD27_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD28_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD29_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD2_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD30_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD31_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD3_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD4_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD5_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD6_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD7_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD8_CLK.outFreq, value: 160 MHz}
- {id: EDMA0_TCD9_CLK.outFreq, value: 160 MHz}
- {id: EIM0_CLK.outFreq, value: 40 MHz}
- {id: EMAC0_RX_CLK.outFreq, value: 48 MHz}
- {id: EMAC0_TS_CLK.outFreq, value: 48 MHz}
- {id: EMAC0_TX_CLK.outFreq, value: 48 MHz}
- {id: EMAC_RX_CLK.outFreq, value: 48 MHz}
- {id: EMAC_TS_CLK.outFreq, value: 48 MHz}
- {id: EMAC_TX_CLK.outFreq, value: 48 MHz}
- {id: EMIOS0_CLK.outFreq, value: 160 MHz}
- {id: EMIOS1_CLK.outFreq, value: 160 MHz}
- {id: EMIOS2_CLK.outFreq, value: 160 MHz}
- {id: ERM0_CLK.outFreq, value: 40 MHz}
- {id: FIRCOUT.outFreq, value: 48 MHz}
- {id: FLASH0_CLK.outFreq, value: 40 MHz}
- {id: FLEXCAN0_CLK.outFreq, value: 48 MHz}
- {id: FLEXCAN1_CLK.outFreq, value: 48 MHz}
- {id: FLEXCAN2_CLK.outFreq, value: 48 MHz}
- {id: FLEXCAN3_CLK.outFreq, value: 48 MHz}
- {id: FLEXCAN4_CLK.outFreq, value: 48 MHz}
- {id: FLEXCAN5_CLK.outFreq, value: 48 MHz}
- {id: FLEXCANA_CLK.outFreq, value: 48 MHz}
- {id: FLEXCANB_CLK.outFreq, value: 48 MHz}
- {id: FLEXIO0_CLK.outFreq, value: 80 MHz}
- {id: FXOSCOUT.outFreq, value: 16 MHz}
- {id: HSE_CLK.outFreq, value: 80 MHz}
- {id: INTM_CLK.outFreq, value: 80 MHz}
- {id: LBIST_CLK.outFreq, value: 40 MHz}
- {id: LCU0_CLK.outFreq, value: 160 MHz}
- {id: LCU1_CLK.outFreq, value: 160 MHz}
- {id: LPI2C0_CLK.outFreq, value: 40 MHz}
- {id: LPI2C1_CLK.outFreq, value: 40 MHz}
- {id: LPSPI0_CLK.outFreq, value: 80 MHz}
- {id: LPSPI1_CLK.outFreq, value: 40 MHz}
- {id: LPSPI2_CLK.outFreq, value: 40 MHz}
- {id: LPSPI3_CLK.outFreq, value: 40 MHz}
- {id: LPSPI4_CLK.outFreq, value: 40 MHz}
- {id: LPSPI5_CLK.outFreq, value: 40 MHz}
- {id: LPUART0_CLK.outFreq, value: 80 MHz}
- {id: LPUART10_CLK.outFreq, value: 40 MHz}
- {id: LPUART11_CLK.outFreq, value: 40 MHz}
- {id: LPUART12_CLK.outFreq, value: 40 MHz}
- {id: LPUART13_CLK.outFreq, value: 40 MHz}
- {id: LPUART14_CLK.outFreq, value: 40 MHz}
- {id: LPUART15_CLK.outFreq, value: 40 MHz}
- {id: LPUART1_CLK.outFreq, value: 40 MHz}
- {id: LPUART2_CLK.outFreq, value: 40 MHz}
- {id: LPUART3_CLK.outFreq, value: 40 MHz}
- {id: LPUART4_CLK.outFreq, value: 40 MHz}
- {id: LPUART5_CLK.outFreq, value: 40 MHz}
- {id: LPUART6_CLK.outFreq, value: 40 MHz}
- {id: LPUART7_CLK.outFreq, value: 40 MHz}
- {id: LPUART8_CLK.outFreq, value: 80 MHz}
- {id: LPUART9_CLK.outFreq, value: 40 MHz}
- {id: MSCM_CLK.outFreq, value: 80 MHz}
- {id: MUA_CLK.outFreq, value: 40 MHz}
- {id: MUB_CLK.outFreq, value: 40 MHz}
- {id: PIT0_CLK.outFreq, value: 40 MHz}
- {id: PIT1_CLK.outFreq, value: 40 MHz}
- {id: PIT2_CLK.outFreq, value: 40 MHz}
- {id: PLL_PHI0.outFreq, value: 160 MHz}
- {id: PLL_PHI1.outFreq, value: 160 MHz}
- {id: QSPI0_RAM_CLK.outFreq, value: 160 MHz}
- {id: QSPI0_SFCK.outFreq, value: 48 MHz}
- {id: QSPI0_TX_MEM_CLK.outFreq, value: 160 MHz}
- {id: QSPI_MEM_CLK.outFreq, value: 160 MHz}
- {id: QSPI_SFCK_CLK.outFreq, value: 48 MHz}
- {id: RTC0_CLK.outFreq, value: 32.768 kHz}
- {id: RTC_CLK.outFreq, value: 32.768 kHz}
- {id: SAI0_CLK.outFreq, value: 40 MHz}
- {id: SAI1_CLK.outFreq, value: 40 MHz}
- {id: SEMA42_CLK.outFreq, value: 80 MHz}
- {id: SIRCOUT.outFreq, value: 32 kHz}
- {id: SIUL0_CLK.outFreq, value: 40 MHz}
- {id: STCU0_CLK.outFreq, value: 40 MHz}
- {id: STM0_CLK.outFreq, value: 48 MHz}
- {id: STM1_CLK.outFreq, value: 48 MHz}
- {id: STMA_CLK.outFreq, value: 48 MHz}
- {id: STMB_CLK.outFreq, value: 48 MHz}
- {id: SWT0_CLK.outFreq, value: 40 MHz}
- {id: SWT1_CLK.outFreq, value: 40 MHz}
- {id: SXOSCOUT.outFreq, value: 32.768 kHz}
- {id: TCM_CM7_0_CLK.outFreq, value: 160 MHz}
- {id: TCM_CM7_1_CLK.outFreq, value: 160 MHz}
- {id: TEMPSENSE_CLK.outFreq, value: 160 MHz}
- {id: TRACE_CLK.outFreq, value: 48 MHz}
- {id: TRGMUX0_CLK.outFreq, value: 40 MHz}
- {id: TSENSE0_CLK.outFreq, value: 40 MHz}
- {id: WKPU0_CLK.outFreq, value: 40 MHz}
settings:
- {id: CORE_MFD.scale, value: '120', locked: true}
- {id: CORE_PLLODIV_0_DE, value: Enabled}
- {id: CORE_PLLODIV_1_DE, value: Enabled}
- {id: CORE_PLL_PD, value: Power_up}
- {id: FXOSC_PM, value: Crystal_mode}
- {id: MC_CGM_MUX_0.sel, value: PHI0}
- {id: MC_CGM_MUX_0_DIV0.scale, value: '1', locked: true}
- {id: MC_CGM_MUX_0_DIV0_Trigger, value: Common}
- {id: MC_CGM_MUX_0_DIV1.scale, value: '2', locked: true}
- {id: MC_CGM_MUX_0_DIV1_Trigger, value: Common}
- {id: MC_CGM_MUX_0_DIV2.scale, value: '4', locked: true}
- {id: MC_CGM_MUX_0_DIV2_Trigger, value: Common}
- {id: MC_CGM_MUX_0_DIV3.scale, value: '2', locked: true}
- {id: MC_CGM_MUX_0_DIV3_Trigger, value: Common}
- {id: MC_CGM_MUX_0_DIV4.scale, value: '4', locked: true}
- {id: MC_CGM_MUX_0_DIV4_Trigger, value: Common}
- {id: MC_CGM_MUX_0_DIV5_Trigger, value: Common}
- {id: MC_CGM_MUX_0_DIV6.scale, value: '1', locked: true}
- {id: MC_CGM_MUX_0_DIV6_Trigger, value: Common}
- {id: MC_CGM_MUX_6.sel, value: N/A}
- {id: MC_CGM_MUX_6_DE0, value: Enabled}
- {id: MC_CGM_MUX_6_DIV0.scale, value: '2', locked: true}
- {id: PHI0.scale, value: '3', locked: true}
- {id: PHI1.scale, value: '3', locked: true}
- {id: PLL_PREDIV.scale, value: '2', locked: true}
- {id: POSTDIV.scale, value: '2', locked: true}
- {id: SXOSC_PM, value: Crystal_mode}
sources:
- {id: FXOSC_CLK.FXOSC_CLK.outFreq, value: 16 MHz, enabled: true}
- {id: SXOSC_CLK.SXOSC_CLK.outFreq, value: 32.768 kHz, enabled: true}
 * BE CAREFUL MODIFYING THIS COMMENT - IT IS YAML SETTINGS FOR TOOLS **********/

/* *************************************************************************
 * Configuration structure for Clock Configuration 
 * ************************************************************************* */
/*! @brief User Configuration structure clock_Cfg_0 */
const Clock_Ip_ClockConfigType Mcu_aClockConfigPB[1] = {
    {
        0U,                          /* clkConfigId */

        2U,                       /* ircoscsCount */
        2U,                       /* xoscsCount */
        1U,                       /* pllsCount */
        13U,                       /* selectorsCount */
        21U,                       /* dividersCount */
        1U,                       /* dividerTriggersCount */
        0U,                       /* fracDivsCount */
        2U,                       /* extClksCount */
        105U,                       /* gatesCount */
        0U,                       /* pcfsCount */
        4U,                       /* cmusCount */
        5U,                       /* configureFrequenciesCount */


        /* IRCOSC initialization. */
        {

            #if CLOCK_IP_IRCOSCS_NO > 0U
            {
                FIRC_STANDBY_CLK,                   /* name */
                0U,                     /* Disabled in standby mode. */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
            },
            #endif

            #if CLOCK_IP_IRCOSCS_NO > 1U
            {
                SIRC_STANDBY_CLK,                   /* name */
                0U,                     /* Disabled in standby mode. */
                0U,                     /* Enable regulator */
                0U,                     /* Ircosc range */
                0U,                     /* Ircosc enable in VLP mode */
                0U,                     /* Ircosc enable in STOP mode */
            },
            #endif
        },

        /* XOSC initialization. */

        {

            #if CLOCK_IP_XOSCS_NO > 0U
            {
                FXOSC_CLK,              /* name */
                16000000U,              /* frequency */ 
                1U,                     /* enable */
                157U,                   /* startupDelay */
                0U,                     /* bypassOption: Xosc use crystal */ 
                1U,                     /* Comparator is enabled */ 
                12U,                    /* Crystal overdrive protection */
                0U,                     /* Gain value */
                0U,                     /* Monitor type */
            },
            #endif

            #if CLOCK_IP_XOSCS_NO > 1U
            {
                SXOSC_CLK,              /* name */
                32768U,              /* frequency */ 
                1U,                     /* enable */
                125U,                   /* startupDelay */
                0U,                     /* bypassOption */ 
                0U,                     /* Comparator is not enabled */ 
                0U,                     /* Crystal overdrive protection */
                0U,                     /* Gain value */
                0U,                     /* Monitor type */
            },
            #endif
        },


        /* PLL initialization. */
        {

            #if CLOCK_IP_PLLS_NO > 0U
            {
                PLL_CLK,                /* name */
                1U,                     /* enable */
                FXOSC_CLK,                     /* inputReference */
                0U,                     /* Bypass */
                2U,                      /* predivider */
                0U,                     /* numeratorFracLoopDiv */
                120U,                   /* mulFactorDiv */
                0U,                     /* modulation */
                1U,                     /* Modulaton type: Spread spectrum modulation bypassed */ 
                0U,                     /* modulationPeriod */
                0U,                     /* incrementStep */
                0U,                     /* sigmaDelta */
                0U,                     /* ditherControl */
                0U,                     /* ditherControlValue */
                0U,                     /* Monitor type */
            },
            #endif
        },



        /* SELECTOR initialization. */
        {

            #if CLOCK_IP_SELECTORS_NO > 0U
            {
                SCS_CLK,                    /* Clock name associated to selector */
                PLL_PHI0_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 1U
            {
                CLKOUT_RUN_CLK,                    /* Clock name associated to selector */
                FXOSC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 2U
            {
                CLKOUT_STANDBY_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 3U
            {
                EMAC_RX_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 4U
            {
                EMAC_TS_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 5U
            {
                EMAC_TX_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 6U
            {
                FLEXCANA_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 7U
            {
                FLEXCANB_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 8U
            {
                QSPI_SFCK_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 9U
            {
                RTC_CLK,                    /* Clock name associated to selector */
                SXOSC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 10U
            {
                STMA_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 11U
            {
                STMB_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif

            #if CLOCK_IP_SELECTORS_NO > 12U
            {
                TRACE_CLK,                    /* Clock name associated to selector */
                FIRC_CLK,                    /* Name of the selected input source */
            },
            #endif
        },


        /* DIVIDER initialization. */
        {

            #if CLOCK_IP_DIVIDERS_NO > 0U
            {
                PLL_POSTDIV_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif


            #if CLOCK_IP_DIVIDERS_NO > 1U
            {
                PLL_PHI0_CLK,                    /* name */
                3U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 2U
            {
                PLL_PHI1_CLK,                    /* name */
                3U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 3U
            {
                CORE_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 4U
            {
                AIPS_PLAT_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 5U
            {
                AIPS_SLOW_CLK,                    /* name */
                4U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 6U
            {
                HSE_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 7U
            {
                DCM_CLK,                    /* name */
                4U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 8U
            {
                LBIST_CLK,                    /* name */
                4U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 9U
            {
                QSPI_MEM_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 10U
            {
                CLKOUT_RUN_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 11U
            {
                CLKOUT_STANDBY_CLK,                    /* name */
                2U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 12U
            {
                EMAC_RX_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 13U
            {
                EMAC_TS_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 14U
            {
                EMAC_TX_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 15U
            {
                FLEXCANA_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 16U
            {
                FLEXCANB_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 17U
            {
                QSPI_SFCK_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 18U
            {
                STMA_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 19U
            {
                STMB_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif

            #if CLOCK_IP_DIVIDERS_NO > 20U
            {
                TRACE_CLK,                    /* name */
                1U,                              /* value */
                {
                    0U,
                }
            },
            #endif
        },


        /* DIVIDER TRIGGER Initialization. */
        {
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 0U
            {
                CORE_CLK,          /* divider name */
                COMMON_TRIGGER_DIVIDER_UPDATE,          /* trigger value */
                CORE_CLK,          /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 1U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 2U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 3U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 4U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 5U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
            #if CLOCK_IP_DIVIDER_TRIGGERS_NO > 6U
            {
                RESERVED_CLK,             /* divider name */
                IMMEDIATE_DIVIDER_UPDATE, /* trigger value */
                RESERVED_CLK,             /* input source name */
            },
            #endif
        },



        /* FRACTIONAL DIVIDER initialization. */
        {
            {
                RESERVED_CLK,
                0U,
                {
                    0U,
                    0U,
                },
            },
        },


        /* EXTERNAL CLOCKS initialization. */
        {

            #if CLOCK_IP_EXT_CLKS_NO > 0U
            {
                EMAC_MII_RX_CLK,                    /* name */
                0U,                              /* value */
            },
            #endif

            #if CLOCK_IP_EXT_CLKS_NO > 1U
            {
                EMAC_MII_RMII_TX_CLK,                    /* name */
                0U,                              /* value */
            },
            #endif
        },



        /* CLOCK GATES initialization. */
        {

            #if CLOCK_IP_GATES_NO > 0U
            {
                ADC0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 1U
            {
                ADC1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 2U
            {
                ADC2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 3U
            {
                BCTU0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 4U
            {
                CMP0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 5U
            {
                CMP1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 6U
            {
                CMP2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 7U
            {
                CRC0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 8U
            {
                DMAMUX0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 9U
            {
                DMAMUX1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 10U
            {
                EDMA0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 11U
            {
                EDMA0_TCD0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 12U
            {
                EDMA0_TCD1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 13U
            {
                EDMA0_TCD2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 14U
            {
                EDMA0_TCD3_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 15U
            {
                EDMA0_TCD4_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 16U
            {
                EDMA0_TCD5_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 17U
            {
                EDMA0_TCD6_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 18U
            {
                EDMA0_TCD7_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 19U
            {
                EDMA0_TCD8_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 20U
            {
                EDMA0_TCD9_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 21U
            {
                EDMA0_TCD10_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 22U
            {
                EDMA0_TCD11_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 23U
            {
                EDMA0_TCD12_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 24U
            {
                EDMA0_TCD13_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 25U
            {
                EDMA0_TCD14_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 26U
            {
                EDMA0_TCD15_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 27U
            {
                EDMA0_TCD16_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 28U
            {
                EDMA0_TCD17_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 29U
            {
                EDMA0_TCD18_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 30U
            {
                EDMA0_TCD19_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 31U
            {
                EDMA0_TCD20_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 32U
            {
                EDMA0_TCD21_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 33U
            {
                EDMA0_TCD22_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 34U
            {
                EDMA0_TCD23_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 35U
            {
                EDMA0_TCD24_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 36U
            {
                EDMA0_TCD25_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 37U
            {
                EDMA0_TCD26_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 38U
            {
                EDMA0_TCD27_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 39U
            {
                EDMA0_TCD28_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 40U
            {
                EDMA0_TCD29_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 41U
            {
                EDMA0_TCD30_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 42U
            {
                EDMA0_TCD31_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 43U
            {
                EIM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 44U
            {
                EMAC0_RX_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 45U
            {
                EMIOS0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 46U
            {
                EMIOS1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 47U
            {
                EMIOS2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 48U
            {
                ERM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 49U
            {
                FLEXCAN0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 50U
            {
                FLEXCAN1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 51U
            {
                FLEXCAN2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 52U
            {
                FLEXCAN3_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 53U
            {
                FLEXCAN4_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 54U
            {
                FLEXCAN5_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 55U
            {
                FLEXIO0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 56U
            {
                INTM_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 57U
            {
                LCU0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 58U
            {
                LCU1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 59U
            {
                LPI2C0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 60U
            {
                LPI2C1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 61U
            {
                LPSPI0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 62U
            {
                LPSPI1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 63U
            {
                LPSPI2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 64U
            {
                LPSPI3_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 65U
            {
                LPSPI4_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 66U
            {
                LPSPI5_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 67U
            {
                LPUART0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 68U
            {
                LPUART1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 69U
            {
                LPUART2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 70U
            {
                LPUART3_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 71U
            {
                LPUART4_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 72U
            {
                LPUART5_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 73U
            {
                LPUART6_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 74U
            {
                LPUART7_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 75U
            {
                LPUART8_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 76U
            {
                LPUART9_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 77U
            {
                LPUART10_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 78U
            {
                LPUART11_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 79U
            {
                LPUART12_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 80U
            {
                LPUART13_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 81U
            {
                LPUART14_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 82U
            {
                LPUART15_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 83U
            {
                MSCM_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 84U
            {
                MUA_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 85U
            {
                MUB_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 86U
            {
                PIT0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 87U
            {
                PIT1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 88U
            {
                PIT2_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 89U
            {
                QSPI0_RAM_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 90U
            {
                RTC0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 91U
            {
                SAI0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 92U
            {
                SAI1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 93U
            {
                SEMA42_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 94U
            {
                SIUL0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 95U
            {
                STM0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 96U
            {
                STM1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 97U
            {
                SWT0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 98U
            {
                SWT1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 99U
            {
                TCM_CM7_0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 100U
            {
                TCM_CM7_1_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 101U
            {
                TEMPSENSE_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 102U
            {
                TRGMUX0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 103U
            {
                TSENSE0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif

            #if CLOCK_IP_GATES_NO > 104U
            {
                WKPU0_CLK,                    /* name */
                1U,                           /* enable */
            },
            #endif
        },
        /* Progressive clock switching */ 
        {
            {
                RESERVED_CLK,
                0U,
                0U,
                RESERVED_CLK,
                0U,
            },
        },
        /* Clock monitor */ 
        {
            #if CLOCK_IP_CMUS_NO > 0U
            {
                FXOSC_CLK,            /* Clock name associated to clock monitor. */
                0U,                   /*Enable/disable clock monitor CMU_FC_0 */
                (                                           /* IER for CMU_FC_0 */
                    CMU_FC_IER_FLLIE(0U) |
                    CMU_FC_IER_FHHIE(0U) |
                    CMU_FC_IER_FLLAIE(0U) |
                    CMU_FC_IER_FHHAIE(0U)
                ),
                16000000U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 1U
            {
                CORE_CLK,            /* Clock name associated to clock monitor. */
                0U,                   /*Enable/disable clock monitor CMU_FC_3 */
                (                                           /* IER for CMU_FC_3 */
                    CMU_FC_IER_FLLIE(0U) |
                    CMU_FC_IER_FHHIE(0U) |
                    CMU_FC_IER_FLLAIE(0U) |
                    CMU_FC_IER_FHHAIE(0U)
                ),
                160000000U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 2U
            {
                AIPS_PLAT_CLK,            /* Clock name associated to clock monitor. */
                0U,                   /*Enable/disable clock monitor CMU_FC_4 */
                (                                           /* IER for CMU_FC_4 */
                    CMU_FC_IER_FLLIE(0U) |
                    CMU_FC_IER_FHHIE(0U) |
                    CMU_FC_IER_FLLAIE(0U) |
                    CMU_FC_IER_FHHAIE(0U)
                ),
                80000000U,
            },
            #endif
            #if CLOCK_IP_CMUS_NO > 3U
            {
                HSE_CLK,            /* Clock name associated to clock monitor. */
                0U,                   /*Enable/disable clock monitor CMU_FC_5 */
                (                                           /* IER for CMU_FC_5 */
                    CMU_FC_IER_FLLIE(0U) |
                    CMU_FC_IER_FHHIE(0U) |
                    CMU_FC_IER_FLLAIE(0U) |
                    CMU_FC_IER_FHHAIE(0U)
                ),
                80000000U,
            },
            #endif
        },
        /* Specific peripheral initialization. */
        {
            0U,
            {
                {
                    RESERVED_VALUE,
                    0U,
                },
            },
        },
        /* Configured frequency values. */
        {
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 0U
            {
                FIRC_CLK,
                48000000U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 1U
            {
                FXOSC_CLK,
                16000000U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 2U
            {
                CORE_CLK,
                160000000U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 3U
            {
                AIPS_PLAT_CLK,
                80000000U,
            },
            #endif
            #if CLOCK_IP_CONFIGURED_FREQUENCIES_NO > 4U
            {
                AIPS_SLOW_CLK,
                40000000U,
            },
            #endif
        },
    },
};


#define MCU_STOP_SEC_CONFIG_DATA_UNSPECIFIED
#include "Mcu_MemMap.h"

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
