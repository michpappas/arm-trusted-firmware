/*
 * Copyright (c) 2014-2016, ARM Limited and Contributors. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <bl_common.h>
#include <console.h>
#include <debug.h>
#include <plat_arm.h>
#include <platform_tsp.h>
#include "../qemu_private.h"

/*******************************************************************************
 * Initialize the UART
 ******************************************************************************/
void tsp_early_platform_setup(void)
{
	/*
	 * TODO: Initialize a different console than already in use to display
	 * messages from TSP
	 */
	qemu_console_init();

#if 0
	/* Initialize the platform config for future decision making */
	zynqmp_config_setup();
#endif
}

/*******************************************************************************
 * Perform platform specific setup placeholder
 ******************************************************************************/
void tsp_platform_setup(void)
{
#if 0
	plat_arm_gic_driver_init();
	plat_arm_gic_init();
#endif
}

/*******************************************************************************
 * Perform the very early platform specific architectural setup here. At the
 * moment this only intializes the MMU
 ******************************************************************************/
void tsp_plat_arch_setup(void)
{
#if 0
	arm_setup_page_tables(BL32_BASE,
			      BL32_END - BL32_BASE,
			      BL_CODE_BASE,
			      BL_CODE_END,
			      BL_RO_DATA_BASE,
			      BL_RO_DATA_END,
			      BL_COHERENT_RAM_BASE,
			      BL_COHERENT_RAM_END
			      );
	enable_mmu_el1(0);
#endif
}
