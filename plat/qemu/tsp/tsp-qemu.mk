#
# Copyright (c) 2014, ARM Limited and Contributors. All rights reserved.
#
# SPDX-License-Identifier: BSD-3-Clause

# TSP source files specific to qemu platform
BL32_SOURCES		+=	plat/common/aarch64/platform_mp_stack.S		\
				plat/qemu/tsp/tsp_plat_setup.c
