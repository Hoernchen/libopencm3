/*
 * This file is part of the libopencm3 project.
 *
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

#ifndef LPC43XX_GPDMA_H
#define LPC43XX_GPDMA_H

#include <libopencm3/cm3/common.h>
#include <libopencm3/lpc43xx/memorymap.h>

/* --- GPDMA registers ----------------------------------------------------- */

/* General registers */

/* DMA Interrupt Status Register */
#define GPDMA_INTSTAT                   MMIO32(GPDMA_BASE + 0x000)

/* DMA Interrupt Terminal Count Request Status Register */
#define GPDMA_INTTCSTAT                 MMIO32(GPDMA_BASE + 0x004)

/* DMA Interrupt Terminal Count Request Clear Register */
#define GPDMA_INTTCCLEAR                MMIO32(GPDMA_BASE + 0x008)

/* DMA Interrupt Error Status Register */
#define GPDMA_INTERRSTAT                MMIO32(GPDMA_BASE + 0x00C)

/* DMA Interrupt Error Clear Register */
#define GPDMA_INTERRCLR                 MMIO32(GPDMA_BASE + 0x010)

/* DMA Raw Interrupt Terminal Count Status Register */
#define GPDMA_RAWINTTCSTAT              MMIO32(GPDMA_BASE + 0x014)

/* DMA Raw Error Interrupt Status Register */
#define GPDMA_RAWINTERRSTAT             MMIO32(GPDMA_BASE + 0x018)

/* DMA Enabled Channel Register */
#define GPDMA_ENBLDCHNS                 MMIO32(GPDMA_BASE + 0x01C)

/* DMA Software Burst Request Register */
#define GPDMA_SOFTBREQ                  MMIO32(GPDMA_BASE + 0x020)

/* DMA Software Single Request Register */
#define GPDMA_SOFTSREQ                  MMIO32(GPDMA_BASE + 0x024)

/* DMA Software Last Burst Request Register */
#define GPDMA_SOFTLBREQ                 MMIO32(GPDMA_BASE + 0x028)

/* DMA Software Last Single Request Register */
#define GPDMA_SOFTLSREQ                 MMIO32(GPDMA_BASE + 0x02C)

/* DMA Configuration Register */
#define GPDMA_CONFIG                    MMIO32(GPDMA_BASE + 0x030)

/* DMA Synchronization Register */
#define GPDMA_SYNC                      MMIO32(GPDMA_BASE + 0x034)


/* Channel registers */

/* Source Address Register */
#define GPDMA_CSRCADDR(channel)         MMIO32(GPDMA_BASE + (channel * 0x20) + 0x100)
#define GPDMA_C0SRCADDR                 GPDMA_CSRCADDR(0)
#define GPDMA_C1SRCADDR                 GPDMA_CSRCADDR(1)
#define GPDMA_C2SRCADDR                 GPDMA_CSRCADDR(2)
#define GPDMA_C3SRCADDR                 GPDMA_CSRCADDR(3)
#define GPDMA_C4SRCADDR                 GPDMA_CSRCADDR(4)
#define GPDMA_C5SRCADDR                 GPDMA_CSRCADDR(5)
#define GPDMA_C6SRCADDR                 GPDMA_CSRCADDR(6)
#define GPDMA_C7SRCADDR                 GPDMA_CSRCADDR(7)

/* Destination Address Register */
#define GPDMA_CDESTADDR(channel)        MMIO32(GPDMA_BASE + (channel * 0x20) + 0x104)
#define GPDMA_C0DESTADDR                GPDMA_CDESTADDR(0)
#define GPDMA_C1DESTADDR                GPDMA_CDESTADDR(1)
#define GPDMA_C2DESTADDR                GPDMA_CDESTADDR(2)
#define GPDMA_C3DESTADDR                GPDMA_CDESTADDR(3)
#define GPDMA_C4DESTADDR                GPDMA_CDESTADDR(4)
#define GPDMA_C5DESTADDR                GPDMA_CDESTADDR(5)
#define GPDMA_C6DESTADDR                GPDMA_CDESTADDR(6)
#define GPDMA_C7DESTADDR                GPDMA_CDESTADDR(7)

/* Linked List Item Register */
#define GPDMA_CLLI(channel)             MMIO32(GPDMA_BASE + (channel * 0x20) + 0x108)
#define GPDMA_C0LLI                     GPDMA_CLLI(0)
#define GPDMA_C1LLI                     GPDMA_CLLI(1)
#define GPDMA_C2LLI                     GPDMA_CLLI(2)
#define GPDMA_C3LLI                     GPDMA_CLLI(3)
#define GPDMA_C4LLI                     GPDMA_CLLI(4)
#define GPDMA_C5LLI                     GPDMA_CLLI(5)
#define GPDMA_C6LLI                     GPDMA_CLLI(6)
#define GPDMA_C7LLI                     GPDMA_CLLI(7)

/* Control Register */
#define GPDMA_CCONTROL(channel)         MMIO32(GPDMA_BASE + (channel * 0x20) + 0x10C)
#define GPDMA_C0CONTROL                 GPDMA_CCONTROL(0)
#define GPDMA_C1CONTROL                 GPDMA_CCONTROL(1)
#define GPDMA_C2CONTROL                 GPDMA_CCONTROL(2)
#define GPDMA_C3CONTROL                 GPDMA_CCONTROL(3)
#define GPDMA_C4CONTROL                 GPDMA_CCONTROL(4)
#define GPDMA_C5CONTROL                 GPDMA_CCONTROL(5)
#define GPDMA_C6CONTROL                 GPDMA_CCONTROL(6)
#define GPDMA_C7CONTROL                 GPDMA_CCONTROL(7)

/* Configuration Register */
#define GPDMA_CCONFIG(channel)          MMIO32(GPDMA_BASE + (channel * 0x20) + 0x110)
#define GPDMA_C0CONFIG                  GPDMA_CCONFIG(0)
#define GPDMA_C1CONFIG                  GPDMA_CCONFIG(1)
#define GPDMA_C2CONFIG                  GPDMA_CCONFIG(2)
#define GPDMA_C3CONFIG                  GPDMA_CCONFIG(3)
#define GPDMA_C4CONFIG                  GPDMA_CCONFIG(4)
#define GPDMA_C5CONFIG                  GPDMA_CCONFIG(5)
#define GPDMA_C6CONFIG                  GPDMA_CCONFIG(6)
#define GPDMA_C7CONFIG                  GPDMA_CCONFIG(7)

/* --- Common fields -------------------------------------------- */

#define GPDMA_CSRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_CSRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_CSRCADDR_SRCADDR_SHIFT)
#define GPDMA_CSRCADDR_SRCADDR(x) ((x) << GPDMA_CSRCADDR_SRCADDR_SHIFT)

#define GPDMA_CDESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_CDESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_CDESTADDR_DESTADDR_SHIFT)
#define GPDMA_CDESTADDR_DESTADDR(x) ((x) << GPDMA_CDESTADDR_DESTADDR_SHIFT)

#define GPDMA_CLLI_LM_SHIFT (0)
#define GPDMA_CLLI_LM_MASK (0x1 << GPDMA_CLLI_LM_SHIFT)
#define GPDMA_CLLI_LM(x) ((x) << GPDMA_CLLI_LM_SHIFT)

#define GPDMA_CLLI_LLI_SHIFT (2)
#define GPDMA_CLLI_LLI_MASK (0x3fffffff << GPDMA_CLLI_LLI_SHIFT)
#define GPDMA_CLLI_LLI(x) ((x) << GPDMA_CLLI_LLI_SHIFT)

#define GPDMA_CCONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_CCONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_CCONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_CCONTROL_TRANSFERSIZE(x) ((x) << GPDMA_CCONTROL_TRANSFERSIZE_SHIFT)

#define GPDMA_CCONTROL_SBSIZE_SHIFT (12)
#define GPDMA_CCONTROL_SBSIZE_MASK (0x7 << GPDMA_CCONTROL_SBSIZE_SHIFT)
#define GPDMA_CCONTROL_SBSIZE(x) ((x) << GPDMA_CCONTROL_SBSIZE_SHIFT)

#define GPDMA_CCONTROL_DBSIZE_SHIFT (15)
#define GPDMA_CCONTROL_DBSIZE_MASK (0x7 << GPDMA_CCONTROL_DBSIZE_SHIFT)
#define GPDMA_CCONTROL_DBSIZE(x) ((x) << GPDMA_CCONTROL_DBSIZE_SHIFT)

#define GPDMA_CCONTROL_SWIDTH_SHIFT (18)
#define GPDMA_CCONTROL_SWIDTH_MASK (0x7 << GPDMA_CCONTROL_SWIDTH_SHIFT)
#define GPDMA_CCONTROL_SWIDTH(x) ((x) << GPDMA_CCONTROL_SWIDTH_SHIFT)

#define GPDMA_CCONTROL_DWIDTH_SHIFT (21)
#define GPDMA_CCONTROL_DWIDTH_MASK (0x7 << GPDMA_CCONTROL_DWIDTH_SHIFT)
#define GPDMA_CCONTROL_DWIDTH(x) ((x) << GPDMA_CCONTROL_DWIDTH_SHIFT)

#define GPDMA_CCONTROL_S_SHIFT (24)
#define GPDMA_CCONTROL_S_MASK (0x1 << GPDMA_CCONTROL_S_SHIFT)
#define GPDMA_CCONTROL_S(x) ((x) << GPDMA_CCONTROL_S_SHIFT)

#define GPDMA_CCONTROL_D_SHIFT (25)
#define GPDMA_CCONTROL_D_MASK (0x1 << GPDMA_CCONTROL_D_SHIFT)
#define GPDMA_CCONTROL_D(x) ((x) << GPDMA_CCONTROL_D_SHIFT)

#define GPDMA_CCONTROL_SI_SHIFT (26)
#define GPDMA_CCONTROL_SI_MASK (0x1 << GPDMA_CCONTROL_SI_SHIFT)
#define GPDMA_CCONTROL_SI(x) ((x) << GPDMA_CCONTROL_SI_SHIFT)

#define GPDMA_CCONTROL_DI_SHIFT (27)
#define GPDMA_CCONTROL_DI_MASK (0x1 << GPDMA_CCONTROL_DI_SHIFT)
#define GPDMA_CCONTROL_DI(x) ((x) << GPDMA_CCONTROL_DI_SHIFT)

#define GPDMA_CCONTROL_PROT1_SHIFT (28)
#define GPDMA_CCONTROL_PROT1_MASK (0x1 << GPDMA_CCONTROL_PROT1_SHIFT)
#define GPDMA_CCONTROL_PROT1(x) ((x) << GPDMA_CCONTROL_PROT1_SHIFT)

#define GPDMA_CCONTROL_PROT2_SHIFT (29)
#define GPDMA_CCONTROL_PROT2_MASK (0x1 << GPDMA_CCONTROL_PROT2_SHIFT)
#define GPDMA_CCONTROL_PROT2(x) ((x) << GPDMA_CCONTROL_PROT2_SHIFT)

#define GPDMA_CCONTROL_PROT3_SHIFT (30)
#define GPDMA_CCONTROL_PROT3_MASK (0x1 << GPDMA_CCONTROL_PROT3_SHIFT)
#define GPDMA_CCONTROL_PROT3(x) ((x) << GPDMA_CCONTROL_PROT3_SHIFT)

#define GPDMA_CCONTROL_I_SHIFT (31)
#define GPDMA_CCONTROL_I_MASK (0x1 << GPDMA_CCONTROL_I_SHIFT)
#define GPDMA_CCONTROL_I(x) ((x) << GPDMA_CCONTROL_I_SHIFT)

#define GPDMA_CCONFIG_E_SHIFT (0)
#define GPDMA_CCONFIG_E_MASK (0x1 << GPDMA_CCONFIG_E_SHIFT)
#define GPDMA_CCONFIG_E(x) ((x) << GPDMA_CCONFIG_E_SHIFT)

#define GPDMA_CCONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_CCONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_CCONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_CCONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_CCONFIG_SRCPERIPHERAL_SHIFT)

#define GPDMA_CCONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_CCONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_CCONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_CCONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_CCONFIG_DESTPERIPHERAL_SHIFT)

#define GPDMA_CCONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_CCONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_CCONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_CCONFIG_FLOWCNTRL(x) ((x) << GPDMA_CCONFIG_FLOWCNTRL_SHIFT)

#define GPDMA_CCONFIG_IE_SHIFT (14)
#define GPDMA_CCONFIG_IE_MASK (0x1 << GPDMA_CCONFIG_IE_SHIFT)
#define GPDMA_CCONFIG_IE(x) ((x) << GPDMA_CCONFIG_IE_SHIFT)

#define GPDMA_CCONFIG_ITC_SHIFT (15)
#define GPDMA_CCONFIG_ITC_MASK (0x1 << GPDMA_CCONFIG_ITC_SHIFT)
#define GPDMA_CCONFIG_ITC(x) ((x) << GPDMA_CCONFIG_ITC_SHIFT)

#define GPDMA_CCONFIG_L_SHIFT (16)
#define GPDMA_CCONFIG_L_MASK (0x1 << GPDMA_CCONFIG_L_SHIFT)
#define GPDMA_CCONFIG_L(x) ((x) << GPDMA_CCONFIG_L_SHIFT)

#define GPDMA_CCONFIG_A_SHIFT (17)
#define GPDMA_CCONFIG_A_MASK (0x1 << GPDMA_CCONFIG_A_SHIFT)
#define GPDMA_CCONFIG_A(x) ((x) << GPDMA_CCONFIG_A_SHIFT)

#define GPDMA_CCONFIG_H_SHIFT (18)
#define GPDMA_CCONFIG_H_MASK (0x1 << GPDMA_CCONFIG_H_SHIFT)
#define GPDMA_CCONFIG_H(x) ((x) << GPDMA_CCONFIG_H_SHIFT)

/* --- AUTO-GENERATED STUFF FOLLOWS ----------------------------- */

/* --- GPDMA_NTSTAT values -------------------------------------- */

/* INTSTAT: Status of DMA channel interrupts after masking */
#define GPDMA_NTSTAT_INTSTAT_SHIFT (0)
#define GPDMA_NTSTAT_INTSTAT_MASK (0xff << GPDMA_NTSTAT_INTSTAT_SHIFT)
#define GPDMA_NTSTAT_INTSTAT(x) ((x) << GPDMA_NTSTAT_INTSTAT_SHIFT)

/* --- GPDMA_INTTCSTAT values ----------------------------------- */

/* INTTCSTAT: Terminal count interrupt request status for DMA channels */
#define GPDMA_INTTCSTAT_INTTCSTAT_SHIFT (0)
#define GPDMA_INTTCSTAT_INTTCSTAT_MASK (0xff << GPDMA_INTTCSTAT_INTTCSTAT_SHIFT)
#define GPDMA_INTTCSTAT_INTTCSTAT(x) ((x) << GPDMA_INTTCSTAT_INTTCSTAT_SHIFT)

/* --- GPDMA_INTTCCLEAR values ---------------------------------- */

/* INTTCCLEAR: Allows clearing the Terminal count interrupt request (IntTCStat) for DMA channels */
#define GPDMA_INTTCCLEAR_INTTCCLEAR_SHIFT (0)
#define GPDMA_INTTCCLEAR_INTTCCLEAR_MASK (0xff << GPDMA_INTTCCLEAR_INTTCCLEAR_SHIFT)
#define GPDMA_INTTCCLEAR_INTTCCLEAR(x) ((x) << GPDMA_INTTCCLEAR_INTTCCLEAR_SHIFT)

/* --- GPDMA_INTERRSTAT values ---------------------------------- */

/* INTERRSTAT: Interrupt error status for DMA channels */
#define GPDMA_INTERRSTAT_INTERRSTAT_SHIFT (0)
#define GPDMA_INTERRSTAT_INTERRSTAT_MASK (0xff << GPDMA_INTERRSTAT_INTERRSTAT_SHIFT)
#define GPDMA_INTERRSTAT_INTERRSTAT(x) ((x) << GPDMA_INTERRSTAT_INTERRSTAT_SHIFT)

/* --- GPDMA_INTERRCLR values ----------------------------------- */

/* INTERRCLR: Writing a 1 clears the error interrupt request (IntErrStat) for DMA channels */
#define GPDMA_INTERRCLR_INTERRCLR_SHIFT (0)
#define GPDMA_INTERRCLR_INTERRCLR_MASK (0xff << GPDMA_INTERRCLR_INTERRCLR_SHIFT)
#define GPDMA_INTERRCLR_INTERRCLR(x) ((x) << GPDMA_INTERRCLR_INTERRCLR_SHIFT)

/* --- GPDMA_RAWINTTCSTAT values -------------------------------- */

/* RAWINTTCSTAT: Status of the terminal count interrupt for DMA channels prior to masking */
#define GPDMA_RAWINTTCSTAT_RAWINTTCSTAT_SHIFT (0)
#define GPDMA_RAWINTTCSTAT_RAWINTTCSTAT_MASK (0xff << GPDMA_RAWINTTCSTAT_RAWINTTCSTAT_SHIFT)
#define GPDMA_RAWINTTCSTAT_RAWINTTCSTAT(x) ((x) << GPDMA_RAWINTTCSTAT_RAWINTTCSTAT_SHIFT)

/* --- GPDMA_RAWINTERRSTAT values ------------------------------- */

/* RAWINTERRSTAT: Status of the error interrupt for DMA channels prior to masking */
#define GPDMA_RAWINTERRSTAT_RAWINTERRSTAT_SHIFT (0)
#define GPDMA_RAWINTERRSTAT_RAWINTERRSTAT_MASK (0xff << GPDMA_RAWINTERRSTAT_RAWINTERRSTAT_SHIFT)
#define GPDMA_RAWINTERRSTAT_RAWINTERRSTAT(x) ((x) << GPDMA_RAWINTERRSTAT_RAWINTERRSTAT_SHIFT)

/* --- GPDMA_ENBLDCHNS values ----------------------------------- */

/* ENABLEDCHANNELS: Enable status for DMA channels */
#define GPDMA_ENBLDCHNS_ENABLEDCHANNELS_SHIFT (0)
#define GPDMA_ENBLDCHNS_ENABLEDCHANNELS_MASK (0xff << GPDMA_ENBLDCHNS_ENABLEDCHANNELS_SHIFT)
#define GPDMA_ENBLDCHNS_ENABLEDCHANNELS(x) ((x) << GPDMA_ENBLDCHNS_ENABLEDCHANNELS_SHIFT)

/* --- GPDMA_SOFTBREQ values ------------------------------------ */

/* SOFTBREQ: Software burst request flags for each of 16 possible sources */
#define GPDMA_SOFTBREQ_SOFTBREQ_SHIFT (0)
#define GPDMA_SOFTBREQ_SOFTBREQ_MASK (0xffff << GPDMA_SOFTBREQ_SOFTBREQ_SHIFT)
#define GPDMA_SOFTBREQ_SOFTBREQ(x) ((x) << GPDMA_SOFTBREQ_SOFTBREQ_SHIFT)

/* --- GPDMA_SOFTSREQ values ------------------------------------ */

/* SOFTSREQ: Software single transfer request flags for each of 16 possible sources */
#define GPDMA_SOFTSREQ_SOFTSREQ_SHIFT (0)
#define GPDMA_SOFTSREQ_SOFTSREQ_MASK (0xffff << GPDMA_SOFTSREQ_SOFTSREQ_SHIFT)
#define GPDMA_SOFTSREQ_SOFTSREQ(x) ((x) << GPDMA_SOFTSREQ_SOFTSREQ_SHIFT)

/* --- GPDMA_SOFTLBREQ values ----------------------------------- */

/* SOFTLBREQ: Software last burst request flags for each of 16 possible sources */
#define GPDMA_SOFTLBREQ_SOFTLBREQ_SHIFT (0)
#define GPDMA_SOFTLBREQ_SOFTLBREQ_MASK (0xffff << GPDMA_SOFTLBREQ_SOFTLBREQ_SHIFT)
#define GPDMA_SOFTLBREQ_SOFTLBREQ(x) ((x) << GPDMA_SOFTLBREQ_SOFTLBREQ_SHIFT)

/* --- GPDMA_SOFTLSREQ values ----------------------------------- */

/* SOFTLSREQ: Software last single transfer request flags for each of 16 possible sources */
#define GPDMA_SOFTLSREQ_SOFTLSREQ_SHIFT (0)
#define GPDMA_SOFTLSREQ_SOFTLSREQ_MASK (0xffff << GPDMA_SOFTLSREQ_SOFTLSREQ_SHIFT)
#define GPDMA_SOFTLSREQ_SOFTLSREQ(x) ((x) << GPDMA_SOFTLSREQ_SOFTLSREQ_SHIFT)

/* --- GPDMA_CONFIG values -------------------------------------- */

/* E: DMA Controller enable */
#define GPDMA_CONFIG_E_SHIFT (0)
#define GPDMA_CONFIG_E_MASK (0x1 << GPDMA_CONFIG_E_SHIFT)
#define GPDMA_CONFIG_E(x) ((x) << GPDMA_CONFIG_E_SHIFT)

/* M0: AHB Master 0 endianness configuration */
#define GPDMA_CONFIG_M0_SHIFT (1)
#define GPDMA_CONFIG_M0_MASK (0x1 << GPDMA_CONFIG_M0_SHIFT)
#define GPDMA_CONFIG_M0(x) ((x) << GPDMA_CONFIG_M0_SHIFT)

/* M1: AHB Master 1 endianness configuration */
#define GPDMA_CONFIG_M1_SHIFT (2)
#define GPDMA_CONFIG_M1_MASK (0x1 << GPDMA_CONFIG_M1_SHIFT)
#define GPDMA_CONFIG_M1(x) ((x) << GPDMA_CONFIG_M1_SHIFT)

/* --- GPDMA_SYNC values ---------------------------------------- */

/* DMACSYNC: Controls the synchronization logic for DMA request signals */
#define GPDMA_SYNC_DMACSYNC_SHIFT (0)
#define GPDMA_SYNC_DMACSYNC_MASK (0xffff << GPDMA_SYNC_DMACSYNC_SHIFT)
#define GPDMA_SYNC_DMACSYNC(x) ((x) << GPDMA_SYNC_DMACSYNC_SHIFT)

/* --- GPDMA_C0SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C0SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C0SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C0SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C0SRCADDR_SRCADDR(x) ((x) << GPDMA_C0SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C1SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C1SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C1SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C1SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C1SRCADDR_SRCADDR(x) ((x) << GPDMA_C1SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C2SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C2SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C2SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C2SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C2SRCADDR_SRCADDR(x) ((x) << GPDMA_C2SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C3SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C3SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C3SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C3SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C3SRCADDR_SRCADDR(x) ((x) << GPDMA_C3SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C4SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C4SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C4SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C4SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C4SRCADDR_SRCADDR(x) ((x) << GPDMA_C4SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C5SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C5SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C5SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C5SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C5SRCADDR_SRCADDR(x) ((x) << GPDMA_C5SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C6SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C6SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C6SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C6SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C6SRCADDR_SRCADDR(x) ((x) << GPDMA_C6SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C7SRCADDR values ----------------------------------- */

/* SRCADDR: DMA source address */
#define GPDMA_C7SRCADDR_SRCADDR_SHIFT (0)
#define GPDMA_C7SRCADDR_SRCADDR_MASK (0xffffffff << GPDMA_C7SRCADDR_SRCADDR_SHIFT)
#define GPDMA_C7SRCADDR_SRCADDR(x) ((x) << GPDMA_C7SRCADDR_SRCADDR_SHIFT)

/* --- GPDMA_C0DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C0DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C0DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C0DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C0DESTADDR_DESTADDR(x) ((x) << GPDMA_C0DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C1DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C1DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C1DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C1DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C1DESTADDR_DESTADDR(x) ((x) << GPDMA_C1DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C2DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C2DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C2DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C2DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C2DESTADDR_DESTADDR(x) ((x) << GPDMA_C2DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C3DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C3DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C3DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C3DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C3DESTADDR_DESTADDR(x) ((x) << GPDMA_C3DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C4DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C4DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C4DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C4DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C4DESTADDR_DESTADDR(x) ((x) << GPDMA_C4DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C5DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C5DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C5DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C5DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C5DESTADDR_DESTADDR(x) ((x) << GPDMA_C5DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C6DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C6DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C6DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C6DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C6DESTADDR_DESTADDR(x) ((x) << GPDMA_C6DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C7DESTADDR values ---------------------------------- */

/* DESTADDR: DMA source address */
#define GPDMA_C7DESTADDR_DESTADDR_SHIFT (0)
#define GPDMA_C7DESTADDR_DESTADDR_MASK (0xffffffff << GPDMA_C7DESTADDR_DESTADDR_SHIFT)
#define GPDMA_C7DESTADDR_DESTADDR(x) ((x) << GPDMA_C7DESTADDR_DESTADDR_SHIFT)

/* --- GPDMA_C0LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C0LLI_LM_SHIFT (0)
#define GPDMA_C0LLI_LM_MASK (0x1 << GPDMA_C0LLI_LM_SHIFT)
#define GPDMA_C0LLI_LM(x) ((x) << GPDMA_C0LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C0LLI_LLI_SHIFT (2)
#define GPDMA_C0LLI_LLI_MASK (0x3fffffff << GPDMA_C0LLI_LLI_SHIFT)
#define GPDMA_C0LLI_LLI(x) ((x) << GPDMA_C0LLI_LLI_SHIFT)

/* --- GPDMA_C1LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C1LLI_LM_SHIFT (0)
#define GPDMA_C1LLI_LM_MASK (0x1 << GPDMA_C1LLI_LM_SHIFT)
#define GPDMA_C1LLI_LM(x) ((x) << GPDMA_C1LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C1LLI_LLI_SHIFT (2)
#define GPDMA_C1LLI_LLI_MASK (0x3fffffff << GPDMA_C1LLI_LLI_SHIFT)
#define GPDMA_C1LLI_LLI(x) ((x) << GPDMA_C1LLI_LLI_SHIFT)

/* --- GPDMA_C2LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C2LLI_LM_SHIFT (0)
#define GPDMA_C2LLI_LM_MASK (0x1 << GPDMA_C2LLI_LM_SHIFT)
#define GPDMA_C2LLI_LM(x) ((x) << GPDMA_C2LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C2LLI_LLI_SHIFT (2)
#define GPDMA_C2LLI_LLI_MASK (0x3fffffff << GPDMA_C2LLI_LLI_SHIFT)
#define GPDMA_C2LLI_LLI(x) ((x) << GPDMA_C2LLI_LLI_SHIFT)

/* --- GPDMA_C3LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C3LLI_LM_SHIFT (0)
#define GPDMA_C3LLI_LM_MASK (0x1 << GPDMA_C3LLI_LM_SHIFT)
#define GPDMA_C3LLI_LM(x) ((x) << GPDMA_C3LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C3LLI_LLI_SHIFT (2)
#define GPDMA_C3LLI_LLI_MASK (0x3fffffff << GPDMA_C3LLI_LLI_SHIFT)
#define GPDMA_C3LLI_LLI(x) ((x) << GPDMA_C3LLI_LLI_SHIFT)

/* --- GPDMA_C4LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C4LLI_LM_SHIFT (0)
#define GPDMA_C4LLI_LM_MASK (0x1 << GPDMA_C4LLI_LM_SHIFT)
#define GPDMA_C4LLI_LM(x) ((x) << GPDMA_C4LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C4LLI_LLI_SHIFT (2)
#define GPDMA_C4LLI_LLI_MASK (0x3fffffff << GPDMA_C4LLI_LLI_SHIFT)
#define GPDMA_C4LLI_LLI(x) ((x) << GPDMA_C4LLI_LLI_SHIFT)

/* --- GPDMA_C5LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C5LLI_LM_SHIFT (0)
#define GPDMA_C5LLI_LM_MASK (0x1 << GPDMA_C5LLI_LM_SHIFT)
#define GPDMA_C5LLI_LM(x) ((x) << GPDMA_C5LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C5LLI_LLI_SHIFT (2)
#define GPDMA_C5LLI_LLI_MASK (0x3fffffff << GPDMA_C5LLI_LLI_SHIFT)
#define GPDMA_C5LLI_LLI(x) ((x) << GPDMA_C5LLI_LLI_SHIFT)

/* --- GPDMA_C6LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C6LLI_LM_SHIFT (0)
#define GPDMA_C6LLI_LM_MASK (0x1 << GPDMA_C6LLI_LM_SHIFT)
#define GPDMA_C6LLI_LM(x) ((x) << GPDMA_C6LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C6LLI_LLI_SHIFT (2)
#define GPDMA_C6LLI_LLI_MASK (0x3fffffff << GPDMA_C6LLI_LLI_SHIFT)
#define GPDMA_C6LLI_LLI(x) ((x) << GPDMA_C6LLI_LLI_SHIFT)

/* --- GPDMA_C7LLI values --------------------------------------- */

/* LM: AHB master select for loading the next LLI */
#define GPDMA_C7LLI_LM_SHIFT (0)
#define GPDMA_C7LLI_LM_MASK (0x1 << GPDMA_C7LLI_LM_SHIFT)
#define GPDMA_C7LLI_LM(x) ((x) << GPDMA_C7LLI_LM_SHIFT)

/* LLI: Linked list item */
#define GPDMA_C7LLI_LLI_SHIFT (2)
#define GPDMA_C7LLI_LLI_MASK (0x3fffffff << GPDMA_C7LLI_LLI_SHIFT)
#define GPDMA_C7LLI_LLI(x) ((x) << GPDMA_C7LLI_LLI_SHIFT)

/* --- GPDMA_C0CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C0CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C0CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C0CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C0CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C0CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C0CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C0CONTROL_SBSIZE_MASK (0x7 << GPDMA_C0CONTROL_SBSIZE_SHIFT)
#define GPDMA_C0CONTROL_SBSIZE(x) ((x) << GPDMA_C0CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C0CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C0CONTROL_DBSIZE_MASK (0x7 << GPDMA_C0CONTROL_DBSIZE_SHIFT)
#define GPDMA_C0CONTROL_DBSIZE(x) ((x) << GPDMA_C0CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C0CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C0CONTROL_SWIDTH_MASK (0x7 << GPDMA_C0CONTROL_SWIDTH_SHIFT)
#define GPDMA_C0CONTROL_SWIDTH(x) ((x) << GPDMA_C0CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C0CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C0CONTROL_DWIDTH_MASK (0x7 << GPDMA_C0CONTROL_DWIDTH_SHIFT)
#define GPDMA_C0CONTROL_DWIDTH(x) ((x) << GPDMA_C0CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C0CONTROL_S_SHIFT (24)
#define GPDMA_C0CONTROL_S_MASK (0x1 << GPDMA_C0CONTROL_S_SHIFT)
#define GPDMA_C0CONTROL_S(x) ((x) << GPDMA_C0CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C0CONTROL_D_SHIFT (25)
#define GPDMA_C0CONTROL_D_MASK (0x1 << GPDMA_C0CONTROL_D_SHIFT)
#define GPDMA_C0CONTROL_D(x) ((x) << GPDMA_C0CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C0CONTROL_SI_SHIFT (26)
#define GPDMA_C0CONTROL_SI_MASK (0x1 << GPDMA_C0CONTROL_SI_SHIFT)
#define GPDMA_C0CONTROL_SI(x) ((x) << GPDMA_C0CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C0CONTROL_DI_SHIFT (27)
#define GPDMA_C0CONTROL_DI_MASK (0x1 << GPDMA_C0CONTROL_DI_SHIFT)
#define GPDMA_C0CONTROL_DI(x) ((x) << GPDMA_C0CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C0CONTROL_PROT1_SHIFT (28)
#define GPDMA_C0CONTROL_PROT1_MASK (0x1 << GPDMA_C0CONTROL_PROT1_SHIFT)
#define GPDMA_C0CONTROL_PROT1(x) ((x) << GPDMA_C0CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C0CONTROL_PROT2_SHIFT (29)
#define GPDMA_C0CONTROL_PROT2_MASK (0x1 << GPDMA_C0CONTROL_PROT2_SHIFT)
#define GPDMA_C0CONTROL_PROT2(x) ((x) << GPDMA_C0CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C0CONTROL_PROT3_SHIFT (30)
#define GPDMA_C0CONTROL_PROT3_MASK (0x1 << GPDMA_C0CONTROL_PROT3_SHIFT)
#define GPDMA_C0CONTROL_PROT3(x) ((x) << GPDMA_C0CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C0CONTROL_I_SHIFT (31)
#define GPDMA_C0CONTROL_I_MASK (0x1 << GPDMA_C0CONTROL_I_SHIFT)
#define GPDMA_C0CONTROL_I(x) ((x) << GPDMA_C0CONTROL_I_SHIFT)

/* --- GPDMA_C1CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C1CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C1CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C1CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C1CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C1CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C1CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C1CONTROL_SBSIZE_MASK (0x7 << GPDMA_C1CONTROL_SBSIZE_SHIFT)
#define GPDMA_C1CONTROL_SBSIZE(x) ((x) << GPDMA_C1CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C1CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C1CONTROL_DBSIZE_MASK (0x7 << GPDMA_C1CONTROL_DBSIZE_SHIFT)
#define GPDMA_C1CONTROL_DBSIZE(x) ((x) << GPDMA_C1CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C1CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C1CONTROL_SWIDTH_MASK (0x7 << GPDMA_C1CONTROL_SWIDTH_SHIFT)
#define GPDMA_C1CONTROL_SWIDTH(x) ((x) << GPDMA_C1CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C1CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C1CONTROL_DWIDTH_MASK (0x7 << GPDMA_C1CONTROL_DWIDTH_SHIFT)
#define GPDMA_C1CONTROL_DWIDTH(x) ((x) << GPDMA_C1CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C1CONTROL_S_SHIFT (24)
#define GPDMA_C1CONTROL_S_MASK (0x1 << GPDMA_C1CONTROL_S_SHIFT)
#define GPDMA_C1CONTROL_S(x) ((x) << GPDMA_C1CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C1CONTROL_D_SHIFT (25)
#define GPDMA_C1CONTROL_D_MASK (0x1 << GPDMA_C1CONTROL_D_SHIFT)
#define GPDMA_C1CONTROL_D(x) ((x) << GPDMA_C1CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C1CONTROL_SI_SHIFT (26)
#define GPDMA_C1CONTROL_SI_MASK (0x1 << GPDMA_C1CONTROL_SI_SHIFT)
#define GPDMA_C1CONTROL_SI(x) ((x) << GPDMA_C1CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C1CONTROL_DI_SHIFT (27)
#define GPDMA_C1CONTROL_DI_MASK (0x1 << GPDMA_C1CONTROL_DI_SHIFT)
#define GPDMA_C1CONTROL_DI(x) ((x) << GPDMA_C1CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C1CONTROL_PROT1_SHIFT (28)
#define GPDMA_C1CONTROL_PROT1_MASK (0x1 << GPDMA_C1CONTROL_PROT1_SHIFT)
#define GPDMA_C1CONTROL_PROT1(x) ((x) << GPDMA_C1CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C1CONTROL_PROT2_SHIFT (29)
#define GPDMA_C1CONTROL_PROT2_MASK (0x1 << GPDMA_C1CONTROL_PROT2_SHIFT)
#define GPDMA_C1CONTROL_PROT2(x) ((x) << GPDMA_C1CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C1CONTROL_PROT3_SHIFT (30)
#define GPDMA_C1CONTROL_PROT3_MASK (0x1 << GPDMA_C1CONTROL_PROT3_SHIFT)
#define GPDMA_C1CONTROL_PROT3(x) ((x) << GPDMA_C1CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C1CONTROL_I_SHIFT (31)
#define GPDMA_C1CONTROL_I_MASK (0x1 << GPDMA_C1CONTROL_I_SHIFT)
#define GPDMA_C1CONTROL_I(x) ((x) << GPDMA_C1CONTROL_I_SHIFT)

/* --- GPDMA_C2CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C2CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C2CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C2CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C2CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C2CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C2CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C2CONTROL_SBSIZE_MASK (0x7 << GPDMA_C2CONTROL_SBSIZE_SHIFT)
#define GPDMA_C2CONTROL_SBSIZE(x) ((x) << GPDMA_C2CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C2CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C2CONTROL_DBSIZE_MASK (0x7 << GPDMA_C2CONTROL_DBSIZE_SHIFT)
#define GPDMA_C2CONTROL_DBSIZE(x) ((x) << GPDMA_C2CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C2CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C2CONTROL_SWIDTH_MASK (0x7 << GPDMA_C2CONTROL_SWIDTH_SHIFT)
#define GPDMA_C2CONTROL_SWIDTH(x) ((x) << GPDMA_C2CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C2CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C2CONTROL_DWIDTH_MASK (0x7 << GPDMA_C2CONTROL_DWIDTH_SHIFT)
#define GPDMA_C2CONTROL_DWIDTH(x) ((x) << GPDMA_C2CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C2CONTROL_S_SHIFT (24)
#define GPDMA_C2CONTROL_S_MASK (0x1 << GPDMA_C2CONTROL_S_SHIFT)
#define GPDMA_C2CONTROL_S(x) ((x) << GPDMA_C2CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C2CONTROL_D_SHIFT (25)
#define GPDMA_C2CONTROL_D_MASK (0x1 << GPDMA_C2CONTROL_D_SHIFT)
#define GPDMA_C2CONTROL_D(x) ((x) << GPDMA_C2CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C2CONTROL_SI_SHIFT (26)
#define GPDMA_C2CONTROL_SI_MASK (0x1 << GPDMA_C2CONTROL_SI_SHIFT)
#define GPDMA_C2CONTROL_SI(x) ((x) << GPDMA_C2CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C2CONTROL_DI_SHIFT (27)
#define GPDMA_C2CONTROL_DI_MASK (0x1 << GPDMA_C2CONTROL_DI_SHIFT)
#define GPDMA_C2CONTROL_DI(x) ((x) << GPDMA_C2CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C2CONTROL_PROT1_SHIFT (28)
#define GPDMA_C2CONTROL_PROT1_MASK (0x1 << GPDMA_C2CONTROL_PROT1_SHIFT)
#define GPDMA_C2CONTROL_PROT1(x) ((x) << GPDMA_C2CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C2CONTROL_PROT2_SHIFT (29)
#define GPDMA_C2CONTROL_PROT2_MASK (0x1 << GPDMA_C2CONTROL_PROT2_SHIFT)
#define GPDMA_C2CONTROL_PROT2(x) ((x) << GPDMA_C2CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C2CONTROL_PROT3_SHIFT (30)
#define GPDMA_C2CONTROL_PROT3_MASK (0x1 << GPDMA_C2CONTROL_PROT3_SHIFT)
#define GPDMA_C2CONTROL_PROT3(x) ((x) << GPDMA_C2CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C2CONTROL_I_SHIFT (31)
#define GPDMA_C2CONTROL_I_MASK (0x1 << GPDMA_C2CONTROL_I_SHIFT)
#define GPDMA_C2CONTROL_I(x) ((x) << GPDMA_C2CONTROL_I_SHIFT)

/* --- GPDMA_C3CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C3CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C3CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C3CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C3CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C3CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C3CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C3CONTROL_SBSIZE_MASK (0x7 << GPDMA_C3CONTROL_SBSIZE_SHIFT)
#define GPDMA_C3CONTROL_SBSIZE(x) ((x) << GPDMA_C3CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C3CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C3CONTROL_DBSIZE_MASK (0x7 << GPDMA_C3CONTROL_DBSIZE_SHIFT)
#define GPDMA_C3CONTROL_DBSIZE(x) ((x) << GPDMA_C3CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C3CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C3CONTROL_SWIDTH_MASK (0x7 << GPDMA_C3CONTROL_SWIDTH_SHIFT)
#define GPDMA_C3CONTROL_SWIDTH(x) ((x) << GPDMA_C3CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C3CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C3CONTROL_DWIDTH_MASK (0x7 << GPDMA_C3CONTROL_DWIDTH_SHIFT)
#define GPDMA_C3CONTROL_DWIDTH(x) ((x) << GPDMA_C3CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C3CONTROL_S_SHIFT (24)
#define GPDMA_C3CONTROL_S_MASK (0x1 << GPDMA_C3CONTROL_S_SHIFT)
#define GPDMA_C3CONTROL_S(x) ((x) << GPDMA_C3CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C3CONTROL_D_SHIFT (25)
#define GPDMA_C3CONTROL_D_MASK (0x1 << GPDMA_C3CONTROL_D_SHIFT)
#define GPDMA_C3CONTROL_D(x) ((x) << GPDMA_C3CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C3CONTROL_SI_SHIFT (26)
#define GPDMA_C3CONTROL_SI_MASK (0x1 << GPDMA_C3CONTROL_SI_SHIFT)
#define GPDMA_C3CONTROL_SI(x) ((x) << GPDMA_C3CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C3CONTROL_DI_SHIFT (27)
#define GPDMA_C3CONTROL_DI_MASK (0x1 << GPDMA_C3CONTROL_DI_SHIFT)
#define GPDMA_C3CONTROL_DI(x) ((x) << GPDMA_C3CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C3CONTROL_PROT1_SHIFT (28)
#define GPDMA_C3CONTROL_PROT1_MASK (0x1 << GPDMA_C3CONTROL_PROT1_SHIFT)
#define GPDMA_C3CONTROL_PROT1(x) ((x) << GPDMA_C3CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C3CONTROL_PROT2_SHIFT (29)
#define GPDMA_C3CONTROL_PROT2_MASK (0x1 << GPDMA_C3CONTROL_PROT2_SHIFT)
#define GPDMA_C3CONTROL_PROT2(x) ((x) << GPDMA_C3CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C3CONTROL_PROT3_SHIFT (30)
#define GPDMA_C3CONTROL_PROT3_MASK (0x1 << GPDMA_C3CONTROL_PROT3_SHIFT)
#define GPDMA_C3CONTROL_PROT3(x) ((x) << GPDMA_C3CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C3CONTROL_I_SHIFT (31)
#define GPDMA_C3CONTROL_I_MASK (0x1 << GPDMA_C3CONTROL_I_SHIFT)
#define GPDMA_C3CONTROL_I(x) ((x) << GPDMA_C3CONTROL_I_SHIFT)

/* --- GPDMA_C4CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C4CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C4CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C4CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C4CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C4CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C4CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C4CONTROL_SBSIZE_MASK (0x7 << GPDMA_C4CONTROL_SBSIZE_SHIFT)
#define GPDMA_C4CONTROL_SBSIZE(x) ((x) << GPDMA_C4CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C4CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C4CONTROL_DBSIZE_MASK (0x7 << GPDMA_C4CONTROL_DBSIZE_SHIFT)
#define GPDMA_C4CONTROL_DBSIZE(x) ((x) << GPDMA_C4CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C4CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C4CONTROL_SWIDTH_MASK (0x7 << GPDMA_C4CONTROL_SWIDTH_SHIFT)
#define GPDMA_C4CONTROL_SWIDTH(x) ((x) << GPDMA_C4CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C4CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C4CONTROL_DWIDTH_MASK (0x7 << GPDMA_C4CONTROL_DWIDTH_SHIFT)
#define GPDMA_C4CONTROL_DWIDTH(x) ((x) << GPDMA_C4CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C4CONTROL_S_SHIFT (24)
#define GPDMA_C4CONTROL_S_MASK (0x1 << GPDMA_C4CONTROL_S_SHIFT)
#define GPDMA_C4CONTROL_S(x) ((x) << GPDMA_C4CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C4CONTROL_D_SHIFT (25)
#define GPDMA_C4CONTROL_D_MASK (0x1 << GPDMA_C4CONTROL_D_SHIFT)
#define GPDMA_C4CONTROL_D(x) ((x) << GPDMA_C4CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C4CONTROL_SI_SHIFT (26)
#define GPDMA_C4CONTROL_SI_MASK (0x1 << GPDMA_C4CONTROL_SI_SHIFT)
#define GPDMA_C4CONTROL_SI(x) ((x) << GPDMA_C4CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C4CONTROL_DI_SHIFT (27)
#define GPDMA_C4CONTROL_DI_MASK (0x1 << GPDMA_C4CONTROL_DI_SHIFT)
#define GPDMA_C4CONTROL_DI(x) ((x) << GPDMA_C4CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C4CONTROL_PROT1_SHIFT (28)
#define GPDMA_C4CONTROL_PROT1_MASK (0x1 << GPDMA_C4CONTROL_PROT1_SHIFT)
#define GPDMA_C4CONTROL_PROT1(x) ((x) << GPDMA_C4CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C4CONTROL_PROT2_SHIFT (29)
#define GPDMA_C4CONTROL_PROT2_MASK (0x1 << GPDMA_C4CONTROL_PROT2_SHIFT)
#define GPDMA_C4CONTROL_PROT2(x) ((x) << GPDMA_C4CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C4CONTROL_PROT3_SHIFT (30)
#define GPDMA_C4CONTROL_PROT3_MASK (0x1 << GPDMA_C4CONTROL_PROT3_SHIFT)
#define GPDMA_C4CONTROL_PROT3(x) ((x) << GPDMA_C4CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C4CONTROL_I_SHIFT (31)
#define GPDMA_C4CONTROL_I_MASK (0x1 << GPDMA_C4CONTROL_I_SHIFT)
#define GPDMA_C4CONTROL_I(x) ((x) << GPDMA_C4CONTROL_I_SHIFT)

/* --- GPDMA_C5CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C5CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C5CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C5CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C5CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C5CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C5CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C5CONTROL_SBSIZE_MASK (0x7 << GPDMA_C5CONTROL_SBSIZE_SHIFT)
#define GPDMA_C5CONTROL_SBSIZE(x) ((x) << GPDMA_C5CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C5CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C5CONTROL_DBSIZE_MASK (0x7 << GPDMA_C5CONTROL_DBSIZE_SHIFT)
#define GPDMA_C5CONTROL_DBSIZE(x) ((x) << GPDMA_C5CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C5CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C5CONTROL_SWIDTH_MASK (0x7 << GPDMA_C5CONTROL_SWIDTH_SHIFT)
#define GPDMA_C5CONTROL_SWIDTH(x) ((x) << GPDMA_C5CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C5CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C5CONTROL_DWIDTH_MASK (0x7 << GPDMA_C5CONTROL_DWIDTH_SHIFT)
#define GPDMA_C5CONTROL_DWIDTH(x) ((x) << GPDMA_C5CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C5CONTROL_S_SHIFT (24)
#define GPDMA_C5CONTROL_S_MASK (0x1 << GPDMA_C5CONTROL_S_SHIFT)
#define GPDMA_C5CONTROL_S(x) ((x) << GPDMA_C5CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C5CONTROL_D_SHIFT (25)
#define GPDMA_C5CONTROL_D_MASK (0x1 << GPDMA_C5CONTROL_D_SHIFT)
#define GPDMA_C5CONTROL_D(x) ((x) << GPDMA_C5CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C5CONTROL_SI_SHIFT (26)
#define GPDMA_C5CONTROL_SI_MASK (0x1 << GPDMA_C5CONTROL_SI_SHIFT)
#define GPDMA_C5CONTROL_SI(x) ((x) << GPDMA_C5CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C5CONTROL_DI_SHIFT (27)
#define GPDMA_C5CONTROL_DI_MASK (0x1 << GPDMA_C5CONTROL_DI_SHIFT)
#define GPDMA_C5CONTROL_DI(x) ((x) << GPDMA_C5CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C5CONTROL_PROT1_SHIFT (28)
#define GPDMA_C5CONTROL_PROT1_MASK (0x1 << GPDMA_C5CONTROL_PROT1_SHIFT)
#define GPDMA_C5CONTROL_PROT1(x) ((x) << GPDMA_C5CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C5CONTROL_PROT2_SHIFT (29)
#define GPDMA_C5CONTROL_PROT2_MASK (0x1 << GPDMA_C5CONTROL_PROT2_SHIFT)
#define GPDMA_C5CONTROL_PROT2(x) ((x) << GPDMA_C5CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C5CONTROL_PROT3_SHIFT (30)
#define GPDMA_C5CONTROL_PROT3_MASK (0x1 << GPDMA_C5CONTROL_PROT3_SHIFT)
#define GPDMA_C5CONTROL_PROT3(x) ((x) << GPDMA_C5CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C5CONTROL_I_SHIFT (31)
#define GPDMA_C5CONTROL_I_MASK (0x1 << GPDMA_C5CONTROL_I_SHIFT)
#define GPDMA_C5CONTROL_I(x) ((x) << GPDMA_C5CONTROL_I_SHIFT)

/* --- GPDMA_C6CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C6CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C6CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C6CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C6CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C6CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C6CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C6CONTROL_SBSIZE_MASK (0x7 << GPDMA_C6CONTROL_SBSIZE_SHIFT)
#define GPDMA_C6CONTROL_SBSIZE(x) ((x) << GPDMA_C6CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C6CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C6CONTROL_DBSIZE_MASK (0x7 << GPDMA_C6CONTROL_DBSIZE_SHIFT)
#define GPDMA_C6CONTROL_DBSIZE(x) ((x) << GPDMA_C6CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C6CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C6CONTROL_SWIDTH_MASK (0x7 << GPDMA_C6CONTROL_SWIDTH_SHIFT)
#define GPDMA_C6CONTROL_SWIDTH(x) ((x) << GPDMA_C6CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C6CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C6CONTROL_DWIDTH_MASK (0x7 << GPDMA_C6CONTROL_DWIDTH_SHIFT)
#define GPDMA_C6CONTROL_DWIDTH(x) ((x) << GPDMA_C6CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C6CONTROL_S_SHIFT (24)
#define GPDMA_C6CONTROL_S_MASK (0x1 << GPDMA_C6CONTROL_S_SHIFT)
#define GPDMA_C6CONTROL_S(x) ((x) << GPDMA_C6CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C6CONTROL_D_SHIFT (25)
#define GPDMA_C6CONTROL_D_MASK (0x1 << GPDMA_C6CONTROL_D_SHIFT)
#define GPDMA_C6CONTROL_D(x) ((x) << GPDMA_C6CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C6CONTROL_SI_SHIFT (26)
#define GPDMA_C6CONTROL_SI_MASK (0x1 << GPDMA_C6CONTROL_SI_SHIFT)
#define GPDMA_C6CONTROL_SI(x) ((x) << GPDMA_C6CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C6CONTROL_DI_SHIFT (27)
#define GPDMA_C6CONTROL_DI_MASK (0x1 << GPDMA_C6CONTROL_DI_SHIFT)
#define GPDMA_C6CONTROL_DI(x) ((x) << GPDMA_C6CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C6CONTROL_PROT1_SHIFT (28)
#define GPDMA_C6CONTROL_PROT1_MASK (0x1 << GPDMA_C6CONTROL_PROT1_SHIFT)
#define GPDMA_C6CONTROL_PROT1(x) ((x) << GPDMA_C6CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C6CONTROL_PROT2_SHIFT (29)
#define GPDMA_C6CONTROL_PROT2_MASK (0x1 << GPDMA_C6CONTROL_PROT2_SHIFT)
#define GPDMA_C6CONTROL_PROT2(x) ((x) << GPDMA_C6CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C6CONTROL_PROT3_SHIFT (30)
#define GPDMA_C6CONTROL_PROT3_MASK (0x1 << GPDMA_C6CONTROL_PROT3_SHIFT)
#define GPDMA_C6CONTROL_PROT3(x) ((x) << GPDMA_C6CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C6CONTROL_I_SHIFT (31)
#define GPDMA_C6CONTROL_I_MASK (0x1 << GPDMA_C6CONTROL_I_SHIFT)
#define GPDMA_C6CONTROL_I(x) ((x) << GPDMA_C6CONTROL_I_SHIFT)

/* --- GPDMA_C7CONTROL values ----------------------------------- */

/* TRANSFERSIZE: Transfer size in number of transfers */
#define GPDMA_C7CONTROL_TRANSFERSIZE_SHIFT (0)
#define GPDMA_C7CONTROL_TRANSFERSIZE_MASK (0xfff << GPDMA_C7CONTROL_TRANSFERSIZE_SHIFT)
#define GPDMA_C7CONTROL_TRANSFERSIZE(x) ((x) << GPDMA_C7CONTROL_TRANSFERSIZE_SHIFT)

/* SBSIZE: Source burst size */
#define GPDMA_C7CONTROL_SBSIZE_SHIFT (12)
#define GPDMA_C7CONTROL_SBSIZE_MASK (0x7 << GPDMA_C7CONTROL_SBSIZE_SHIFT)
#define GPDMA_C7CONTROL_SBSIZE(x) ((x) << GPDMA_C7CONTROL_SBSIZE_SHIFT)

/* DBSIZE: Destination burst size */
#define GPDMA_C7CONTROL_DBSIZE_SHIFT (15)
#define GPDMA_C7CONTROL_DBSIZE_MASK (0x7 << GPDMA_C7CONTROL_DBSIZE_SHIFT)
#define GPDMA_C7CONTROL_DBSIZE(x) ((x) << GPDMA_C7CONTROL_DBSIZE_SHIFT)

/* SWIDTH: Source transfer width */
#define GPDMA_C7CONTROL_SWIDTH_SHIFT (18)
#define GPDMA_C7CONTROL_SWIDTH_MASK (0x7 << GPDMA_C7CONTROL_SWIDTH_SHIFT)
#define GPDMA_C7CONTROL_SWIDTH(x) ((x) << GPDMA_C7CONTROL_SWIDTH_SHIFT)

/* DWIDTH: Destination transfer width */
#define GPDMA_C7CONTROL_DWIDTH_SHIFT (21)
#define GPDMA_C7CONTROL_DWIDTH_MASK (0x7 << GPDMA_C7CONTROL_DWIDTH_SHIFT)
#define GPDMA_C7CONTROL_DWIDTH(x) ((x) << GPDMA_C7CONTROL_DWIDTH_SHIFT)

/* S: Source AHB master select */
#define GPDMA_C7CONTROL_S_SHIFT (24)
#define GPDMA_C7CONTROL_S_MASK (0x1 << GPDMA_C7CONTROL_S_SHIFT)
#define GPDMA_C7CONTROL_S(x) ((x) << GPDMA_C7CONTROL_S_SHIFT)

/* D: Destination AHB master select */
#define GPDMA_C7CONTROL_D_SHIFT (25)
#define GPDMA_C7CONTROL_D_MASK (0x1 << GPDMA_C7CONTROL_D_SHIFT)
#define GPDMA_C7CONTROL_D(x) ((x) << GPDMA_C7CONTROL_D_SHIFT)

/* SI: Source increment */
#define GPDMA_C7CONTROL_SI_SHIFT (26)
#define GPDMA_C7CONTROL_SI_MASK (0x1 << GPDMA_C7CONTROL_SI_SHIFT)
#define GPDMA_C7CONTROL_SI(x) ((x) << GPDMA_C7CONTROL_SI_SHIFT)

/* DI: Destination increment */
#define GPDMA_C7CONTROL_DI_SHIFT (27)
#define GPDMA_C7CONTROL_DI_MASK (0x1 << GPDMA_C7CONTROL_DI_SHIFT)
#define GPDMA_C7CONTROL_DI(x) ((x) << GPDMA_C7CONTROL_DI_SHIFT)

/* PROT1: This information is provided to the peripheral during a DMA bus access and indicates that the access is in user mode or privileged mode */
#define GPDMA_C7CONTROL_PROT1_SHIFT (28)
#define GPDMA_C7CONTROL_PROT1_MASK (0x1 << GPDMA_C7CONTROL_PROT1_SHIFT)
#define GPDMA_C7CONTROL_PROT1(x) ((x) << GPDMA_C7CONTROL_PROT1_SHIFT)

/* PROT2: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is bufferable or not bufferable */
#define GPDMA_C7CONTROL_PROT2_SHIFT (29)
#define GPDMA_C7CONTROL_PROT2_MASK (0x1 << GPDMA_C7CONTROL_PROT2_SHIFT)
#define GPDMA_C7CONTROL_PROT2(x) ((x) << GPDMA_C7CONTROL_PROT2_SHIFT)

/* PROT3: This information is provided to the peripheral during a DMA bus access and indicates to the peripheral that the access is cacheable or not cacheable */
#define GPDMA_C7CONTROL_PROT3_SHIFT (30)
#define GPDMA_C7CONTROL_PROT3_MASK (0x1 << GPDMA_C7CONTROL_PROT3_SHIFT)
#define GPDMA_C7CONTROL_PROT3(x) ((x) << GPDMA_C7CONTROL_PROT3_SHIFT)

/* I: Terminal count interrupt enable bit */
#define GPDMA_C7CONTROL_I_SHIFT (31)
#define GPDMA_C7CONTROL_I_MASK (0x1 << GPDMA_C7CONTROL_I_SHIFT)
#define GPDMA_C7CONTROL_I(x) ((x) << GPDMA_C7CONTROL_I_SHIFT)

/* --- GPDMA_C0CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C0CONFIG_E_SHIFT (0)
#define GPDMA_C0CONFIG_E_MASK (0x1 << GPDMA_C0CONFIG_E_SHIFT)
#define GPDMA_C0CONFIG_E(x) ((x) << GPDMA_C0CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C0CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C0CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C0CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C0CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C0CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C0CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C0CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C0CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C0CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C0CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C0CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C0CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C0CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C0CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C0CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C0CONFIG_IE_SHIFT (14)
#define GPDMA_C0CONFIG_IE_MASK (0x1 << GPDMA_C0CONFIG_IE_SHIFT)
#define GPDMA_C0CONFIG_IE(x) ((x) << GPDMA_C0CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C0CONFIG_ITC_SHIFT (15)
#define GPDMA_C0CONFIG_ITC_MASK (0x1 << GPDMA_C0CONFIG_ITC_SHIFT)
#define GPDMA_C0CONFIG_ITC(x) ((x) << GPDMA_C0CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C0CONFIG_L_SHIFT (16)
#define GPDMA_C0CONFIG_L_MASK (0x1 << GPDMA_C0CONFIG_L_SHIFT)
#define GPDMA_C0CONFIG_L(x) ((x) << GPDMA_C0CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C0CONFIG_A_SHIFT (17)
#define GPDMA_C0CONFIG_A_MASK (0x1 << GPDMA_C0CONFIG_A_SHIFT)
#define GPDMA_C0CONFIG_A(x) ((x) << GPDMA_C0CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C0CONFIG_H_SHIFT (18)
#define GPDMA_C0CONFIG_H_MASK (0x1 << GPDMA_C0CONFIG_H_SHIFT)
#define GPDMA_C0CONFIG_H(x) ((x) << GPDMA_C0CONFIG_H_SHIFT)

/* --- GPDMA_C1CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C1CONFIG_E_SHIFT (0)
#define GPDMA_C1CONFIG_E_MASK (0x1 << GPDMA_C1CONFIG_E_SHIFT)
#define GPDMA_C1CONFIG_E(x) ((x) << GPDMA_C1CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C1CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C1CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C1CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C1CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C1CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C1CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C1CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C1CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C1CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C1CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C1CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C1CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C1CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C1CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C1CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C1CONFIG_IE_SHIFT (14)
#define GPDMA_C1CONFIG_IE_MASK (0x1 << GPDMA_C1CONFIG_IE_SHIFT)
#define GPDMA_C1CONFIG_IE(x) ((x) << GPDMA_C1CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C1CONFIG_ITC_SHIFT (15)
#define GPDMA_C1CONFIG_ITC_MASK (0x1 << GPDMA_C1CONFIG_ITC_SHIFT)
#define GPDMA_C1CONFIG_ITC(x) ((x) << GPDMA_C1CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C1CONFIG_L_SHIFT (16)
#define GPDMA_C1CONFIG_L_MASK (0x1 << GPDMA_C1CONFIG_L_SHIFT)
#define GPDMA_C1CONFIG_L(x) ((x) << GPDMA_C1CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C1CONFIG_A_SHIFT (17)
#define GPDMA_C1CONFIG_A_MASK (0x1 << GPDMA_C1CONFIG_A_SHIFT)
#define GPDMA_C1CONFIG_A(x) ((x) << GPDMA_C1CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C1CONFIG_H_SHIFT (18)
#define GPDMA_C1CONFIG_H_MASK (0x1 << GPDMA_C1CONFIG_H_SHIFT)
#define GPDMA_C1CONFIG_H(x) ((x) << GPDMA_C1CONFIG_H_SHIFT)

/* --- GPDMA_C2CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C2CONFIG_E_SHIFT (0)
#define GPDMA_C2CONFIG_E_MASK (0x1 << GPDMA_C2CONFIG_E_SHIFT)
#define GPDMA_C2CONFIG_E(x) ((x) << GPDMA_C2CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C2CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C2CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C2CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C2CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C2CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C2CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C2CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C2CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C2CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C2CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C2CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C2CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C2CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C2CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C2CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C2CONFIG_IE_SHIFT (14)
#define GPDMA_C2CONFIG_IE_MASK (0x1 << GPDMA_C2CONFIG_IE_SHIFT)
#define GPDMA_C2CONFIG_IE(x) ((x) << GPDMA_C2CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C2CONFIG_ITC_SHIFT (15)
#define GPDMA_C2CONFIG_ITC_MASK (0x1 << GPDMA_C2CONFIG_ITC_SHIFT)
#define GPDMA_C2CONFIG_ITC(x) ((x) << GPDMA_C2CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C2CONFIG_L_SHIFT (16)
#define GPDMA_C2CONFIG_L_MASK (0x1 << GPDMA_C2CONFIG_L_SHIFT)
#define GPDMA_C2CONFIG_L(x) ((x) << GPDMA_C2CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C2CONFIG_A_SHIFT (17)
#define GPDMA_C2CONFIG_A_MASK (0x1 << GPDMA_C2CONFIG_A_SHIFT)
#define GPDMA_C2CONFIG_A(x) ((x) << GPDMA_C2CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C2CONFIG_H_SHIFT (18)
#define GPDMA_C2CONFIG_H_MASK (0x1 << GPDMA_C2CONFIG_H_SHIFT)
#define GPDMA_C2CONFIG_H(x) ((x) << GPDMA_C2CONFIG_H_SHIFT)

/* --- GPDMA_C3CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C3CONFIG_E_SHIFT (0)
#define GPDMA_C3CONFIG_E_MASK (0x1 << GPDMA_C3CONFIG_E_SHIFT)
#define GPDMA_C3CONFIG_E(x) ((x) << GPDMA_C3CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C3CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C3CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C3CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C3CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C3CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C3CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C3CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C3CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C3CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C3CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C3CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C3CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C3CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C3CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C3CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C3CONFIG_IE_SHIFT (14)
#define GPDMA_C3CONFIG_IE_MASK (0x1 << GPDMA_C3CONFIG_IE_SHIFT)
#define GPDMA_C3CONFIG_IE(x) ((x) << GPDMA_C3CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C3CONFIG_ITC_SHIFT (15)
#define GPDMA_C3CONFIG_ITC_MASK (0x1 << GPDMA_C3CONFIG_ITC_SHIFT)
#define GPDMA_C3CONFIG_ITC(x) ((x) << GPDMA_C3CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C3CONFIG_L_SHIFT (16)
#define GPDMA_C3CONFIG_L_MASK (0x1 << GPDMA_C3CONFIG_L_SHIFT)
#define GPDMA_C3CONFIG_L(x) ((x) << GPDMA_C3CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C3CONFIG_A_SHIFT (17)
#define GPDMA_C3CONFIG_A_MASK (0x1 << GPDMA_C3CONFIG_A_SHIFT)
#define GPDMA_C3CONFIG_A(x) ((x) << GPDMA_C3CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C3CONFIG_H_SHIFT (18)
#define GPDMA_C3CONFIG_H_MASK (0x1 << GPDMA_C3CONFIG_H_SHIFT)
#define GPDMA_C3CONFIG_H(x) ((x) << GPDMA_C3CONFIG_H_SHIFT)

/* --- GPDMA_C4CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C4CONFIG_E_SHIFT (0)
#define GPDMA_C4CONFIG_E_MASK (0x1 << GPDMA_C4CONFIG_E_SHIFT)
#define GPDMA_C4CONFIG_E(x) ((x) << GPDMA_C4CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C4CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C4CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C4CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C4CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C4CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C4CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C4CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C4CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C4CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C4CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C4CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C4CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C4CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C4CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C4CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C4CONFIG_IE_SHIFT (14)
#define GPDMA_C4CONFIG_IE_MASK (0x1 << GPDMA_C4CONFIG_IE_SHIFT)
#define GPDMA_C4CONFIG_IE(x) ((x) << GPDMA_C4CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C4CONFIG_ITC_SHIFT (15)
#define GPDMA_C4CONFIG_ITC_MASK (0x1 << GPDMA_C4CONFIG_ITC_SHIFT)
#define GPDMA_C4CONFIG_ITC(x) ((x) << GPDMA_C4CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C4CONFIG_L_SHIFT (16)
#define GPDMA_C4CONFIG_L_MASK (0x1 << GPDMA_C4CONFIG_L_SHIFT)
#define GPDMA_C4CONFIG_L(x) ((x) << GPDMA_C4CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C4CONFIG_A_SHIFT (17)
#define GPDMA_C4CONFIG_A_MASK (0x1 << GPDMA_C4CONFIG_A_SHIFT)
#define GPDMA_C4CONFIG_A(x) ((x) << GPDMA_C4CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C4CONFIG_H_SHIFT (18)
#define GPDMA_C4CONFIG_H_MASK (0x1 << GPDMA_C4CONFIG_H_SHIFT)
#define GPDMA_C4CONFIG_H(x) ((x) << GPDMA_C4CONFIG_H_SHIFT)

/* --- GPDMA_C5CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C5CONFIG_E_SHIFT (0)
#define GPDMA_C5CONFIG_E_MASK (0x1 << GPDMA_C5CONFIG_E_SHIFT)
#define GPDMA_C5CONFIG_E(x) ((x) << GPDMA_C5CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C5CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C5CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C5CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C5CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C5CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C5CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C5CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C5CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C5CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C5CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C5CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C5CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C5CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C5CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C5CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C5CONFIG_IE_SHIFT (14)
#define GPDMA_C5CONFIG_IE_MASK (0x1 << GPDMA_C5CONFIG_IE_SHIFT)
#define GPDMA_C5CONFIG_IE(x) ((x) << GPDMA_C5CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C5CONFIG_ITC_SHIFT (15)
#define GPDMA_C5CONFIG_ITC_MASK (0x1 << GPDMA_C5CONFIG_ITC_SHIFT)
#define GPDMA_C5CONFIG_ITC(x) ((x) << GPDMA_C5CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C5CONFIG_L_SHIFT (16)
#define GPDMA_C5CONFIG_L_MASK (0x1 << GPDMA_C5CONFIG_L_SHIFT)
#define GPDMA_C5CONFIG_L(x) ((x) << GPDMA_C5CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C5CONFIG_A_SHIFT (17)
#define GPDMA_C5CONFIG_A_MASK (0x1 << GPDMA_C5CONFIG_A_SHIFT)
#define GPDMA_C5CONFIG_A(x) ((x) << GPDMA_C5CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C5CONFIG_H_SHIFT (18)
#define GPDMA_C5CONFIG_H_MASK (0x1 << GPDMA_C5CONFIG_H_SHIFT)
#define GPDMA_C5CONFIG_H(x) ((x) << GPDMA_C5CONFIG_H_SHIFT)

/* --- GPDMA_C6CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C6CONFIG_E_SHIFT (0)
#define GPDMA_C6CONFIG_E_MASK (0x1 << GPDMA_C6CONFIG_E_SHIFT)
#define GPDMA_C6CONFIG_E(x) ((x) << GPDMA_C6CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C6CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C6CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C6CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C6CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C6CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C6CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C6CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C6CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C6CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C6CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C6CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C6CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C6CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C6CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C6CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C6CONFIG_IE_SHIFT (14)
#define GPDMA_C6CONFIG_IE_MASK (0x1 << GPDMA_C6CONFIG_IE_SHIFT)
#define GPDMA_C6CONFIG_IE(x) ((x) << GPDMA_C6CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C6CONFIG_ITC_SHIFT (15)
#define GPDMA_C6CONFIG_ITC_MASK (0x1 << GPDMA_C6CONFIG_ITC_SHIFT)
#define GPDMA_C6CONFIG_ITC(x) ((x) << GPDMA_C6CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C6CONFIG_L_SHIFT (16)
#define GPDMA_C6CONFIG_L_MASK (0x1 << GPDMA_C6CONFIG_L_SHIFT)
#define GPDMA_C6CONFIG_L(x) ((x) << GPDMA_C6CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C6CONFIG_A_SHIFT (17)
#define GPDMA_C6CONFIG_A_MASK (0x1 << GPDMA_C6CONFIG_A_SHIFT)
#define GPDMA_C6CONFIG_A(x) ((x) << GPDMA_C6CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C6CONFIG_H_SHIFT (18)
#define GPDMA_C6CONFIG_H_MASK (0x1 << GPDMA_C6CONFIG_H_SHIFT)
#define GPDMA_C6CONFIG_H(x) ((x) << GPDMA_C6CONFIG_H_SHIFT)

/* --- GPDMA_C7CONFIG values ------------------------------------ */

/* E: Channel enable */
#define GPDMA_C7CONFIG_E_SHIFT (0)
#define GPDMA_C7CONFIG_E_MASK (0x1 << GPDMA_C7CONFIG_E_SHIFT)
#define GPDMA_C7CONFIG_E(x) ((x) << GPDMA_C7CONFIG_E_SHIFT)

/* SRCPERIPHERAL: Source peripheral */
#define GPDMA_C7CONFIG_SRCPERIPHERAL_SHIFT (1)
#define GPDMA_C7CONFIG_SRCPERIPHERAL_MASK (0x1f << GPDMA_C7CONFIG_SRCPERIPHERAL_SHIFT)
#define GPDMA_C7CONFIG_SRCPERIPHERAL(x) ((x) << GPDMA_C7CONFIG_SRCPERIPHERAL_SHIFT)

/* DESTPERIPHERAL: Destination peripheral */
#define GPDMA_C7CONFIG_DESTPERIPHERAL_SHIFT (6)
#define GPDMA_C7CONFIG_DESTPERIPHERAL_MASK (0x1f << GPDMA_C7CONFIG_DESTPERIPHERAL_SHIFT)
#define GPDMA_C7CONFIG_DESTPERIPHERAL(x) ((x) << GPDMA_C7CONFIG_DESTPERIPHERAL_SHIFT)

/* FLOWCNTRL: Flow control and transfer type */
#define GPDMA_C7CONFIG_FLOWCNTRL_SHIFT (11)
#define GPDMA_C7CONFIG_FLOWCNTRL_MASK (0x7 << GPDMA_C7CONFIG_FLOWCNTRL_SHIFT)
#define GPDMA_C7CONFIG_FLOWCNTRL(x) ((x) << GPDMA_C7CONFIG_FLOWCNTRL_SHIFT)

/* IE: Interrupt error mask */
#define GPDMA_C7CONFIG_IE_SHIFT (14)
#define GPDMA_C7CONFIG_IE_MASK (0x1 << GPDMA_C7CONFIG_IE_SHIFT)
#define GPDMA_C7CONFIG_IE(x) ((x) << GPDMA_C7CONFIG_IE_SHIFT)

/* ITC: Terminal count interrupt mask */
#define GPDMA_C7CONFIG_ITC_SHIFT (15)
#define GPDMA_C7CONFIG_ITC_MASK (0x1 << GPDMA_C7CONFIG_ITC_SHIFT)
#define GPDMA_C7CONFIG_ITC(x) ((x) << GPDMA_C7CONFIG_ITC_SHIFT)

/* L: Lock */
#define GPDMA_C7CONFIG_L_SHIFT (16)
#define GPDMA_C7CONFIG_L_MASK (0x1 << GPDMA_C7CONFIG_L_SHIFT)
#define GPDMA_C7CONFIG_L(x) ((x) << GPDMA_C7CONFIG_L_SHIFT)

/* A: Active */
#define GPDMA_C7CONFIG_A_SHIFT (17)
#define GPDMA_C7CONFIG_A_MASK (0x1 << GPDMA_C7CONFIG_A_SHIFT)
#define GPDMA_C7CONFIG_A(x) ((x) << GPDMA_C7CONFIG_A_SHIFT)

/* H: Halt */
#define GPDMA_C7CONFIG_H_SHIFT (18)
#define GPDMA_C7CONFIG_H_MASK (0x1 << GPDMA_C7CONFIG_H_SHIFT)
#define GPDMA_C7CONFIG_H(x) ((x) << GPDMA_C7CONFIG_H_SHIFT)


#endif
