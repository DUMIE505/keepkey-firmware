/*
 * This file is part of the libopencm3 project.
 *
 * Copyright (C) 2010 Uwe Hermann <uwe@hermann-uwe.de>
 * Copyright (C) 2012 Michael Ossmann <mike@ossmann.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this library.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef LPC43XX_GPIO_H
#define LPC43XX_GPIO_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/lpc17xx/memorymap.h>

/* --- Convenience macros -------------------------------------------------- */

/* GPIO port base addresses (for convenience) */
#define GPIO0				GPIO_PIO0_BASE
#define GPIO1				GPIO_PIO1_BASE
#define GPIO2				GPIO_PIO2_BASE
#define GPIO3				GPIO_PIO3_BASE
#define GPIO4				GPIO_PIO4_BASE
#define GPIO5				GPIO_PIO5_BASE
#define GPIO6				GPIO_PIO6_BASE
#define GPIO7				GPIO_PIO7_BASE

/* GPIO number definitions (for convenience) */
#define GPIOPIN0                        (1 << 0)
#define GPIOPIN1                        (1 << 1)
#define GPIOPIN2                        (1 << 2)
#define GPIOPIN3                        (1 << 3)
#define GPIOPIN4                        (1 << 4)
#define GPIOPIN5                        (1 << 5)
#define GPIOPIN6                        (1 << 6)
#define GPIOPIN7                        (1 << 7)
#define GPIOPIN8                        (1 << 8)
#define GPIOPIN9                        (1 << 9)
#define GPIOPIN10                       (1 << 10)
#define GPIOPIN11                       (1 << 11)
#define GPIOPIN12                       (1 << 12)
#define GPIOPIN13                       (1 << 13)
#define GPIOPIN14                       (1 << 14)
#define GPIOPIN15                       (1 << 15)
#define GPIOPIN16                       (1 << 16)
#define GPIOPIN17                       (1 << 17)
#define GPIOPIN18                       (1 << 18)
#define GPIOPIN19                       (1 << 19)
#define GPIOPIN20                       (1 << 20)
#define GPIOPIN21                       (1 << 21)
#define GPIOPIN22                       (1 << 22)
#define GPIOPIN23                       (1 << 23)
#define GPIOPIN24                       (1 << 24)
#define GPIOPIN25                       (1 << 25)
#define GPIOPIN26                       (1 << 26)
#define GPIOPIN27                       (1 << 27)
#define GPIOPIN28                       (1 << 28)
#define GPIOPIN29                       (1 << 29)
#define GPIOPIN30                       (1 << 30)
#define GPIOPIN31                       (1 << 31)

/* --- GPIO registers ------------------------------------------------------ */

//FIXME byte/word access registers

/* GPIO data direction register (GPIOn_DIR) */
//FIXME port should be offset 0x2000
#define GPIO_DIR(port)			MMIO32(port + 0x00)
#define GPIO0_DIR			GPIO_DIR(GPIO0)
#define GPIO1_DIR			GPIO_DIR(GPIO1)
#define GPIO2_DIR			GPIO_DIR(GPIO2)
#define GPIO3_DIR			GPIO_DIR(GPIO3)
#define GPIO4_DIR			GPIO_DIR(GPIO4)
#define GPIO5_DIR			GPIO_DIR(GPIO5)
#define GPIO6_DIR			GPIO_DIR(GPIO6)
#define GPIO7_DIR			GPIO_DIR(GPIO7)

/* GPIO fast mask register (GPIOn_MASK) */
#define GPIO_MASK(port)			MMIO32(port + 0x80)
#define GPIO0_MASK			GPIO_MASK(GPIO0)
#define GPIO1_MASK			GPIO_MASK(GPIO1)
#define GPIO2_MASK			GPIO_MASK(GPIO2)
#define GPIO3_MASK			GPIO_MASK(GPIO3)
#define GPIO4_MASK			GPIO_MASK(GPIO4)
#define GPIO5_MASK			GPIO_MASK(GPIO5)
#define GPIO6_MASK			GPIO_MASK(GPIO6)
#define GPIO7_MASK			GPIO_MASK(GPIO7)

/* GPIO port pin value register (GPIOn_PIN) */
#define GPIO_PIN(port)			MMIO32(port + 0x100)
#define GPIO0_PIN			GPIO_PIN(GPIO0)
#define GPIO1_PIN			GPIO_PIN(GPIO1)
#define GPIO2_PIN			GPIO_PIN(GPIO2)
#define GPIO3_PIN			GPIO_PIN(GPIO3)
#define GPIO4_PIN			GPIO_PIN(GPIO4)
#define GPIO5_PIN			GPIO_PIN(GPIO5)
#define GPIO6_PIN			GPIO_PIN(GPIO6)
#define GPIO7_PIN			GPIO_PIN(GPIO7)

/* GPIO port masked pin value register (GPIOn_MPIN) */
#define GPIO_PIN(port)			MMIO32(port + 0x180)
#define GPIO0_PIN			GPIO_PIN(GPIO0)
#define GPIO1_PIN			GPIO_PIN(GPIO1)
#define GPIO2_PIN			GPIO_PIN(GPIO2)
#define GPIO3_PIN			GPIO_PIN(GPIO3)
#define GPIO4_PIN			GPIO_PIN(GPIO4)
#define GPIO5_PIN			GPIO_PIN(GPIO5)
#define GPIO6_PIN			GPIO_PIN(GPIO6)
#define GPIO7_PIN			GPIO_PIN(GPIO7)

/* GPIO port output set register (GPIOn_SET) */
#define GPIO_SET(port)			MMIO32(port + 0x200)
#define GPIO0_SET			GPIO_SET(GPIO0)
#define GPIO1_SET			GPIO_SET(GPIO1)
#define GPIO2_SET			GPIO_SET(GPIO2)
#define GPIO3_SET			GPIO_SET(GPIO3)
#define GPIO4_SET			GPIO_SET(GPIO4)
#define GPIO5_SET			GPIO_SET(GPIO5)
#define GPIO6_SET			GPIO_SET(GPIO6)
#define GPIO7_SET			GPIO_SET(GPIO7)

/* GPIO port output clear register (GPIOn_CLR) */
#define GPIO_CLR(port)			MMIO32(port + 0x280)
#define GPIO0_CLR			GPIO_CLR(GPIO0)
#define GPIO1_CLR			GPIO_CLR(GPIO1)
#define GPIO2_CLR			GPIO_CLR(GPIO2)
#define GPIO3_CLR			GPIO_CLR(GPIO3)
#define GPIO4_CLR			GPIO_CLR(GPIO4)
#define GPIO5_CLR			GPIO_CLR(GPIO5)
#define GPIO6_CLR			GPIO_CLR(GPIO6)
#define GPIO7_CLR			GPIO_CLR(GPIO7)

/* GPIO port toggle register (GPIOn_NOT) */
#define GPIO_NOT(port)			MMIO32(port + 0x300)
#define GPIO0_NOT			GPIO_NOT(GPIO0)
#define GPIO1_NOT			GPIO_NOT(GPIO1)
#define GPIO2_NOT			GPIO_NOT(GPIO2)
#define GPIO3_NOT			GPIO_NOT(GPIO3)
#define GPIO4_NOT			GPIO_NOT(GPIO4)
#define GPIO5_NOT			GPIO_NOT(GPIO5)
#define GPIO6_NOT			GPIO_NOT(GPIO6)
#define GPIO7_NOT			GPIO_NOT(GPIO7)

//FIXME below

/* GPIO interrupt register map */
/* Interrupt enable rising edge */
#define GPIO0_IER                       MMIO32(GPIOINTERRPUT_BASE + 0x90)
#define GPIO2_IER                       MMIO32(GPIOINTERRPUT_BASE + 0xB0)

/* Interrupt enable falling edge */
#define GPIO0_IEF                       MMIO32(GPIOINTERRPUT_BASE + 0x94)
#define GPIO2_IEF                       MMIO32(GPIOINTERRPUT_BASE + 0xB4)

/* Interrupt status rising edge */
#define GPIO0_ISR                       MMIO32(GPIOINTERRPUT_BASE + 0x84)
#define GPIO2_ISR                       MMIO32(GPIOINTERRPUT_BASE + 0xA4)

/* Interrupt status falling edge */
#define GPIO0_ISF                       MMIO32(GPIOINTERRPUT_BASE + 0x88)
#define GPIO2_ISF                       MMIO32(GPIOINTERRPUT_BASE + 0xA8)

/* Interrupt clear */
#define GPIO0_IC                        MMIO32(GPIOINTERRPUT_BASE + 0x8C)
#define GPIO1_IC                        MMIO32(GPIOINTERRPUT_BASE + 0xAC)

/* Overall interrupt status */
#define GPIO_IS                         MMIO32(GPIOINTERRPUT_BASE + 0x80)

void gpio_set(u32 gpioport, u32 gpios);
void gpio_clear(u32 gpioport, u32 gpios); 

#endif
