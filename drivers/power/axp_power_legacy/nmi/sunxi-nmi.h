/*
 *
 * Copyright (c) 2016 Allwinnertech Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 */
#ifndef _SUNXI_NMI_H
#define _SUNXI_NMI_H

#define NMI_MODULE_NAME "nmi"

typedef struct {
	void __iomem *base_addr;
	u32 nmi_irq_ctrl;
	u32 nmi_irq_en;
	u32 nmi_irq_status;
	u32 nmi_irq_mask;
} nmi_struct;

#define NMI_IRQ_LOW_LEVEL       (0x0)
#define NMI_IRQ_NE_EDGE         (0x1)
#define NMI_IRQ_HIGH_LEVEL      (0x2)
#define NMI_IRQ_PO_EDGE         (0x3)

#define NMI_IRQ_MASK            (0x1)
#define NMI_IRQ_ENABLE          (0x1)
#define NMI_IRQ_PENDING         (0x1)

enum {
	DEBUG_INIT = 1U << 0,
	DEBUG_INT = 1U << 1,
};

#endif

