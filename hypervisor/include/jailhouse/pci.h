/*
 * Jailhouse, a Linux-based partitioning hypervisor
 *
 * Copyright (c) Siemens AG, 2014
 *
 * Authors:
 *  Ivan Kolchin <ivan.kolchin@siemens.com>
 *
 * This work is licensed under the terms of the GNU GPL, version 2.  See
 * the COPYING file in the top-level directory.
 */

#ifndef _JAILHOUSE_PCI_H
#define _JAILHOUSE_PCI_H

#include <asm/cell.h>

#define PCI_CONFIG_HEADER_SIZE		0x40

const struct jailhouse_pci_device *
pci_get_assigned_device(const struct cell *cell, u16 bdf);

bool pci_cfg_write_allowed(u32 type, u8 reg_num, unsigned int reg_bias,
			   unsigned int size);

#endif /* !_JAILHOUSE_PCI_H */
