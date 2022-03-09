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
*   Build Version        : S32K3_RTD_1_0_0_D2110_ASR_REL_4_4_REV_0000_20211007
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
*   @file main.c
*
*   @addtogroup main_module main module documentation
*   @{
*/

/* Including necessary configuration files. */
#include "Mcal.h"
#include "Osif.h"
#include "Clock_Ip.h"
#include "Xrdc_Ip.h"
#include "Cache_Ip.h"
#include "Siul2_Port_Ip.h"
#include "Siul2_Dio_Ip.h"
#include "Sema42_Ip.h"
#include "S32K324_MC_ME.h"

#define MCME_KEY 0x5AF0
#define MCME_INV_KEY 0xA50F

void MultiCore_Enable(uint8_t core);

#define SEMAINST0   0
#define GATE1       1
volatile int exit_code0 = 0;
/* User includes */
void MultiCore_Enable(uint8_t core)
{
	switch(core)
	{
		case 1:
			/*set the startup address */
			IP_MC_ME->PRTN0_CORE1_ADDR = 0x00401000;
			/* enable the application processor clock */
			IP_MC_ME->PRTN0_CORE1_PCONF = MC_ME_PRTN0_CORE1_PCONF_CCE_MASK;

			/* trigger the update */
			IP_MC_ME->PRTN0_CORE1_PUPD = MC_ME_PRTN0_CORE1_PUPD_CCUPD_MASK;
			/* write the key sequence */
			IP_MC_ME->CTL_KEY = MCME_KEY;
			IP_MC_ME->CTL_KEY = MCME_INV_KEY;

			while(0==(MC_ME_PRTN0_CORE1_STAT_CCS_MASK & IP_MC_ME->PRTN0_CORE1_STAT));

			break;
#if 0
		case 2:
			/*set the startup address */
			//MC_ME->PRTN0_CORE2_ADDR = &VTABLE_C2;
			/* enable the application processor clock */
			//IP_MC_ME->PRTN0_CORE2_PCONF = MC_ME_PRTN0_CORE2_PCONF_CCE_MASK;

			/* trigger the update */
			IP_MC_ME->PRTN0_CORE2_PUPD = MC_ME_PRTN0_CORE2_PUPD_CCUPD_MASK;
			/* write the key sequence */
			IP_MC_ME->CTL_KEY = MCME_KEY;
			IP_MC_ME->CTL_KEY = MCME_INV_KEY;

			while(0==(MC_ME_PRTN0_CORE2_STAT_CCS_MASK & IP_MC_ME->PRTN0_CORE2_STAT));

			break;
#endif

		default: break;
	}

}

/*!
  \brief The main function for the project.
  \details The startup initialization sequence is the following:
 * - startup asm routine
 * - main()
*/
int main_c0(void)
{
    /* Write your code here */
	/* enable other CPU cores */
	MultiCore_Enable(1);
	Xrdc_Ip_Init(&Xrdc_Config_BOARD_INITPERIPHERALS);
	OsIf_Init(NULL);
	Clock_Ip_Init(&Mcu_aClockConfigPB[0]);
	Siul2_Port_Ip_Init(NUM_OF_CONFIGURED_PINS0, g_pin_mux_InitConfigArr0);
	Sema42_Ip_Init(SEMAINST0);



    for(;;)
    {
        if(exit_code0 != 0)
        {
            break;
        }
    }
    return exit_code0;
}

/** @} */
