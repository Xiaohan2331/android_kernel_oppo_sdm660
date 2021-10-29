/*
 * Copyright (c) 2014, 2016, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef __VMEM_H__
#define __VMEM_H__

#if (defined CONFIG_MSM_VIDC_VMEM) || (defined CONFIG_MSM_VIDC_VMEM_MODULE)

int vmem_allocate(size_t size, phys_addr_t *addr);
void vmem_free(phys_addr_t to_free);

#else

static inline int vmem_allocate(size_t size, phys_addr_t *addr)
{
	return -ENODEV;
}

static inline void vmem_free(phys_addr_t to_free)
{
}

#endif

#endif /* __VMEM_H__ */
