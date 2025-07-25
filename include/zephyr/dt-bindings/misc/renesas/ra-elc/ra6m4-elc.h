/*
 * Copyright (c) 2025 Renesas Electronics Corporation
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef ZEPHYR_INCLUDE_DT_BINDINGS_MISC_RENESAS_RA_ELC_RA6M4_ELC_H_
#define ZEPHYR_INCLUDE_DT_BINDINGS_MISC_RENESAS_RA_ELC_RA6M4_ELC_H_

/* Sources of event signals to be linked to other peripherals or the CPU */
#define RA_ELC_EVENT_NONE                   0x0
#define RA_ELC_EVENT_ICU_IRQ0               0x001
#define RA_ELC_EVENT_ICU_IRQ1               0x002
#define RA_ELC_EVENT_ICU_IRQ2               0x003
#define RA_ELC_EVENT_ICU_IRQ3               0x004
#define RA_ELC_EVENT_ICU_IRQ4               0x005
#define RA_ELC_EVENT_ICU_IRQ5               0x006
#define RA_ELC_EVENT_ICU_IRQ6               0x007
#define RA_ELC_EVENT_ICU_IRQ7               0x008
#define RA_ELC_EVENT_ICU_IRQ8               0x009
#define RA_ELC_EVENT_ICU_IRQ9               0x00A
#define RA_ELC_EVENT_ICU_IRQ10              0x00B
#define RA_ELC_EVENT_ICU_IRQ11              0x00C
#define RA_ELC_EVENT_ICU_IRQ12              0x00D
#define RA_ELC_EVENT_ICU_IRQ13              0x00E
#define RA_ELC_EVENT_ICU_IRQ14              0x00F
#define RA_ELC_EVENT_ICU_IRQ15              0x010
#define RA_ELC_EVENT_DMAC0_INT              0x020
#define RA_ELC_EVENT_DMAC1_INT              0x021
#define RA_ELC_EVENT_DMAC2_INT              0x022
#define RA_ELC_EVENT_DMAC3_INT              0x023
#define RA_ELC_EVENT_DMAC4_INT              0x024
#define RA_ELC_EVENT_DMAC5_INT              0x025
#define RA_ELC_EVENT_DMAC6_INT              0x026
#define RA_ELC_EVENT_DMAC7_INT              0x027
#define RA_ELC_EVENT_DTC_COMPLETE           0x029
#define RA_ELC_EVENT_DTC_END                0x02A
#define RA_ELC_EVENT_DMA_TRANSERR           0x02B
#define RA_ELC_EVENT_ICU_SNOOZE_CANCEL      0x02D
#define RA_ELC_EVENT_FCU_FIFERR             0x030
#define RA_ELC_EVENT_FCU_FRDYI              0x031
#define RA_ELC_EVENT_LVD_LVD1               0x038
#define RA_ELC_EVENT_LVD_LVD2               0x039
#define RA_ELC_EVENT_CGC_MOSC_STOP          0x03B
#define RA_ELC_EVENT_LPM_SNOOZE_REQUEST     0x03C
#define RA_ELC_EVENT_AGT0_INT               0x040
#define RA_ELC_EVENT_AGT0_COMPARE_A         0x041
#define RA_ELC_EVENT_AGT0_COMPARE_B         0x042
#define RA_ELC_EVENT_AGT1_INT               0x043
#define RA_ELC_EVENT_AGT1_COMPARE_A         0x044
#define RA_ELC_EVENT_AGT1_COMPARE_B         0x045
#define RA_ELC_EVENT_AGT2_INT               0x046
#define RA_ELC_EVENT_AGT2_COMPARE_A         0x047
#define RA_ELC_EVENT_AGT2_COMPARE_B         0x048
#define RA_ELC_EVENT_AGT3_INT               0x049
#define RA_ELC_EVENT_AGT3_COMPARE_A         0x04A
#define RA_ELC_EVENT_AGT3_COMPARE_B         0x04B
#define RA_ELC_EVENT_AGT4_INT               0x04C
#define RA_ELC_EVENT_AGT4_COMPARE_A         0x04D
#define RA_ELC_EVENT_AGT4_COMPARE_B         0x04E
#define RA_ELC_EVENT_AGT5_INT               0x04F
#define RA_ELC_EVENT_AGT5_COMPARE_A         0x050
#define RA_ELC_EVENT_AGT5_COMPARE_B         0x051
#define RA_ELC_EVENT_IWDT_UNDERFLOW         0x052
#define RA_ELC_EVENT_WDT_UNDERFLOW          0x053
#define RA_ELC_EVENT_RTC_ALARM              0x054
#define RA_ELC_EVENT_RTC_PERIOD             0x055
#define RA_ELC_EVENT_RTC_CARRY              0x056
#define RA_ELC_EVENT_USBFS_FIFO_0           0x06B
#define RA_ELC_EVENT_USBFS_FIFO_1           0x06C
#define RA_ELC_EVENT_USBFS_INT              0x06D
#define RA_ELC_EVENT_USBFS_RESUME           0x06E
#define RA_ELC_EVENT_IIC0_RXI               0x073
#define RA_ELC_EVENT_IIC0_TXI               0x074
#define RA_ELC_EVENT_IIC0_TEI               0x075
#define RA_ELC_EVENT_IIC0_ERI               0x076
#define RA_ELC_EVENT_IIC0_WUI               0x077
#define RA_ELC_EVENT_IIC1_RXI               0x078
#define RA_ELC_EVENT_IIC1_TXI               0x079
#define RA_ELC_EVENT_IIC1_TEI               0x07A
#define RA_ELC_EVENT_IIC1_ERI               0x07B
#define RA_ELC_EVENT_SDHIMMC0_ACCS          0x082
#define RA_ELC_EVENT_SDHIMMC0_SDIO          0x083
#define RA_ELC_EVENT_SDHIMMC0_CARD          0x084
#define RA_ELC_EVENT_SDHIMMC0_DMA_REQ       0x085
#define RA_ELC_EVENT_SSI0_TXI               0x08A
#define RA_ELC_EVENT_SSI0_RXI               0x08B
#define RA_ELC_EVENT_SSI0_INT               0x08D
#define RA_ELC_EVENT_CTSU_WRITE             0x09A
#define RA_ELC_EVENT_CTSU_READ              0x09B
#define RA_ELC_EVENT_CTSU_END               0x09C
#define RA_ELC_EVENT_CAC_FREQUENCY_ERROR    0x09E
#define RA_ELC_EVENT_CAC_MEASUREMENT_END    0x09F
#define RA_ELC_EVENT_CAC_OVERFLOW           0x0A0
#define RA_ELC_EVENT_CAN0_ERROR             0x0A1
#define RA_ELC_EVENT_CAN0_FIFO_RX           0x0A2
#define RA_ELC_EVENT_CAN0_FIFO_TX           0x0A3
#define RA_ELC_EVENT_CAN0_MAILBOX_RX        0x0A4
#define RA_ELC_EVENT_CAN0_MAILBOX_TX        0x0A5
#define RA_ELC_EVENT_CAN1_ERROR             0x0A6
#define RA_ELC_EVENT_CAN1_FIFO_RX           0x0A7
#define RA_ELC_EVENT_CAN1_FIFO_TX           0x0A8
#define RA_ELC_EVENT_CAN1_MAILBOX_RX        0x0A9
#define RA_ELC_EVENT_CAN1_MAILBOX_TX        0x0AA
#define RA_ELC_EVENT_IOPORT_EVENT_1         0x0B1
#define RA_ELC_EVENT_IOPORT_EVENT_2         0x0B2
#define RA_ELC_EVENT_IOPORT_EVENT_3         0x0B3
#define RA_ELC_EVENT_IOPORT_EVENT_4         0x0B4
#define RA_ELC_EVENT_ELC_SOFTWARE_EVENT_0   0x0B5
#define RA_ELC_EVENT_ELC_SOFTWARE_EVENT_1   0x0B6
#define RA_ELC_EVENT_POEG0_EVENT            0x0B7
#define RA_ELC_EVENT_POEG1_EVENT            0x0B8
#define RA_ELC_EVENT_POEG2_EVENT            0x0B9
#define RA_ELC_EVENT_POEG3_EVENT            0x0BA
#define RA_ELC_EVENT_GPT0_CAPTURE_COMPARE_A 0x0C0
#define RA_ELC_EVENT_GPT0_CAPTURE_COMPARE_B 0x0C1
#define RA_ELC_EVENT_GPT0_COMPARE_C         0x0C2
#define RA_ELC_EVENT_GPT0_COMPARE_D         0x0C3
#define RA_ELC_EVENT_GPT0_COMPARE_E         0x0C4
#define RA_ELC_EVENT_GPT0_COMPARE_F         0x0C5
#define RA_ELC_EVENT_GPT0_COUNTER_OVERFLOW  0x0C6
#define RA_ELC_EVENT_GPT0_COUNTER_UNDERFLOW 0x0C7
#define RA_ELC_EVENT_GPT0_PC                0x0C8
#define RA_ELC_EVENT_GPT1_CAPTURE_COMPARE_A 0x0C9
#define RA_ELC_EVENT_GPT1_CAPTURE_COMPARE_B 0x0CA
#define RA_ELC_EVENT_GPT1_COMPARE_C         0x0CB
#define RA_ELC_EVENT_GPT1_COMPARE_D         0x0CC
#define RA_ELC_EVENT_GPT1_COMPARE_E         0x0CD
#define RA_ELC_EVENT_GPT1_COMPARE_F         0x0CE
#define RA_ELC_EVENT_GPT1_COUNTER_OVERFLOW  0x0CF
#define RA_ELC_EVENT_GPT1_COUNTER_UNDERFLOW 0x0D0
#define RA_ELC_EVENT_GPT1_PC                0x0D1
#define RA_ELC_EVENT_GPT2_CAPTURE_COMPARE_A 0x0D2
#define RA_ELC_EVENT_GPT2_CAPTURE_COMPARE_B 0x0D3
#define RA_ELC_EVENT_GPT2_COMPARE_C         0x0D4
#define RA_ELC_EVENT_GPT2_COMPARE_D         0x0D5
#define RA_ELC_EVENT_GPT2_COMPARE_E         0x0D6
#define RA_ELC_EVENT_GPT2_COMPARE_F         0x0D7
#define RA_ELC_EVENT_GPT2_COUNTER_OVERFLOW  0x0D8
#define RA_ELC_EVENT_GPT2_COUNTER_UNDERFLOW 0x0D9
#define RA_ELC_EVENT_GPT3_CAPTURE_COMPARE_A 0x0DB
#define RA_ELC_EVENT_GPT3_CAPTURE_COMPARE_B 0x0DC
#define RA_ELC_EVENT_GPT3_COMPARE_C         0x0DD
#define RA_ELC_EVENT_GPT3_COMPARE_D         0x0DE
#define RA_ELC_EVENT_GPT3_COMPARE_E         0x0DF
#define RA_ELC_EVENT_GPT3_COMPARE_F         0x0E0
#define RA_ELC_EVENT_GPT3_COUNTER_OVERFLOW  0x0E1
#define RA_ELC_EVENT_GPT3_COUNTER_UNDERFLOW 0x0E2
#define RA_ELC_EVENT_GPT4_CAPTURE_COMPARE_A 0x0E4
#define RA_ELC_EVENT_GPT4_CAPTURE_COMPARE_B 0x0E5
#define RA_ELC_EVENT_GPT4_COMPARE_C         0x0E6
#define RA_ELC_EVENT_GPT4_COMPARE_D         0x0E7
#define RA_ELC_EVENT_GPT4_COMPARE_E         0x0E8
#define RA_ELC_EVENT_GPT4_COMPARE_F         0x0E9
#define RA_ELC_EVENT_GPT4_COUNTER_OVERFLOW  0x0EA
#define RA_ELC_EVENT_GPT4_COUNTER_UNDERFLOW 0x0EB
#define RA_ELC_EVENT_GPT4_PC                0x0EC
#define RA_ELC_EVENT_GPT5_CAPTURE_COMPARE_A 0x0ED
#define RA_ELC_EVENT_GPT5_CAPTURE_COMPARE_B 0x0EE
#define RA_ELC_EVENT_GPT5_COMPARE_C         0x0EF
#define RA_ELC_EVENT_GPT5_COMPARE_D         0x0F0
#define RA_ELC_EVENT_GPT5_COMPARE_E         0x0F1
#define RA_ELC_EVENT_GPT5_COMPARE_F         0x0F2
#define RA_ELC_EVENT_GPT5_COUNTER_OVERFLOW  0x0F3
#define RA_ELC_EVENT_GPT5_COUNTER_UNDERFLOW 0x0F4
#define RA_ELC_EVENT_GPT5_PC                0x0F5
#define RA_ELC_EVENT_GPT6_CAPTURE_COMPARE_A 0x0F6
#define RA_ELC_EVENT_GPT6_CAPTURE_COMPARE_B 0x0F7
#define RA_ELC_EVENT_GPT6_COMPARE_C         0x0F8
#define RA_ELC_EVENT_GPT6_COMPARE_D         0x0F9
#define RA_ELC_EVENT_GPT6_COMPARE_E         0x0FA
#define RA_ELC_EVENT_GPT6_COMPARE_F         0x0FB
#define RA_ELC_EVENT_GPT6_COUNTER_OVERFLOW  0x0FC
#define RA_ELC_EVENT_GPT6_COUNTER_UNDERFLOW 0x0FD
#define RA_ELC_EVENT_GPT6_PC                0x0FE
#define RA_ELC_EVENT_GPT7_CAPTURE_COMPARE_A 0x0FF
#define RA_ELC_EVENT_GPT7_CAPTURE_COMPARE_B 0x100
#define RA_ELC_EVENT_GPT7_COMPARE_C         0x101
#define RA_ELC_EVENT_GPT7_COMPARE_D         0x102
#define RA_ELC_EVENT_GPT7_COMPARE_E         0x103
#define RA_ELC_EVENT_GPT7_COMPARE_F         0x104
#define RA_ELC_EVENT_GPT7_COUNTER_OVERFLOW  0x105
#define RA_ELC_EVENT_GPT7_COUNTER_UNDERFLOW 0x106
#define RA_ELC_EVENT_GPT8_CAPTURE_COMPARE_A 0x108
#define RA_ELC_EVENT_GPT8_CAPTURE_COMPARE_B 0x109
#define RA_ELC_EVENT_GPT8_COMPARE_C         0x10A
#define RA_ELC_EVENT_GPT8_COMPARE_D         0x10B
#define RA_ELC_EVENT_GPT8_COMPARE_E         0x10C
#define RA_ELC_EVENT_GPT8_COMPARE_F         0x10D
#define RA_ELC_EVENT_GPT8_COUNTER_OVERFLOW  0x10E
#define RA_ELC_EVENT_GPT8_COUNTER_UNDERFLOW 0x10F
#define RA_ELC_EVENT_GPT9_CAPTURE_COMPARE_A 0x111
#define RA_ELC_EVENT_GPT9_CAPTURE_COMPARE_B 0x112
#define RA_ELC_EVENT_GPT9_COMPARE_C         0x113
#define RA_ELC_EVENT_GPT9_COMPARE_D         0x114
#define RA_ELC_EVENT_GPT9_COMPARE_E         0x115
#define RA_ELC_EVENT_GPT9_COMPARE_F         0x116
#define RA_ELC_EVENT_GPT9_COUNTER_OVERFLOW  0x117
#define RA_ELC_EVENT_GPT9_COUNTER_UNDERFLOW 0x118
#define RA_ELC_EVENT_OPS_UVW_EDGE           0x150
#define RA_ELC_EVENT_ADC0_SCAN_END          0x160
#define RA_ELC_EVENT_ADC0_SCAN_END_B        0x161
#define RA_ELC_EVENT_ADC0_WINDOW_A          0x162
#define RA_ELC_EVENT_ADC0_WINDOW_B          0x163
#define RA_ELC_EVENT_ADC0_COMPARE_MATCH     0x164
#define RA_ELC_EVENT_ADC0_COMPARE_MISMATCH  0x165
#define RA_ELC_EVENT_ADC1_SCAN_END          0x166
#define RA_ELC_EVENT_ADC1_SCAN_END_B        0x167
#define RA_ELC_EVENT_ADC1_WINDOW_A          0x168
#define RA_ELC_EVENT_ADC1_WINDOW_B          0x169
#define RA_ELC_EVENT_ADC1_COMPARE_MATCH     0x16A
#define RA_ELC_EVENT_ADC1_COMPARE_MISMATCH  0x16B
#define RA_ELC_EVENT_EDMAC0_EINT            0x16F
#define RA_ELC_EVENT_SCI0_RXI               0x180
#define RA_ELC_EVENT_SCI0_TXI               0x181
#define RA_ELC_EVENT_SCI0_TEI               0x182
#define RA_ELC_EVENT_SCI0_ERI               0x183
#define RA_ELC_EVENT_SCI0_AM                0x184
#define RA_ELC_EVENT_SCI0_RXI_OR_ERI        0x185
#define RA_ELC_EVENT_SCI1_RXI               0x186
#define RA_ELC_EVENT_SCI1_TXI               0x187
#define RA_ELC_EVENT_SCI1_TEI               0x188
#define RA_ELC_EVENT_SCI1_ERI               0x189
#define RA_ELC_EVENT_SCI2_RXI               0x18C
#define RA_ELC_EVENT_SCI2_TXI               0x18D
#define RA_ELC_EVENT_SCI2_TEI               0x18E
#define RA_ELC_EVENT_SCI2_ERI               0x18F
#define RA_ELC_EVENT_SCI3_RXI               0x192
#define RA_ELC_EVENT_SCI3_TXI               0x193
#define RA_ELC_EVENT_SCI3_TEI               0x194
#define RA_ELC_EVENT_SCI3_ERI               0x195
#define RA_ELC_EVENT_SCI3_AM                0x196
#define RA_ELC_EVENT_SCI4_RXI               0x198
#define RA_ELC_EVENT_SCI4_TXI               0x199
#define RA_ELC_EVENT_SCI4_TEI               0x19A
#define RA_ELC_EVENT_SCI4_ERI               0x19B
#define RA_ELC_EVENT_SCI4_AM                0x19C
#define RA_ELC_EVENT_SCI5_RXI               0x19E
#define RA_ELC_EVENT_SCI5_TXI               0x19F
#define RA_ELC_EVENT_SCI5_TEI               0x1A0
#define RA_ELC_EVENT_SCI5_ERI               0x1A1
#define RA_ELC_EVENT_SCI5_AM                0x1A2
#define RA_ELC_EVENT_SCI6_RXI               0x1A4
#define RA_ELC_EVENT_SCI6_TXI               0x1A5
#define RA_ELC_EVENT_SCI6_TEI               0x1A6
#define RA_ELC_EVENT_SCI6_ERI               0x1A7
#define RA_ELC_EVENT_SCI6_AM                0x1A8
#define RA_ELC_EVENT_SCI7_RXI               0x1AA
#define RA_ELC_EVENT_SCI7_TXI               0x1AB
#define RA_ELC_EVENT_SCI7_TEI               0x1AC
#define RA_ELC_EVENT_SCI7_ERI               0x1AD
#define RA_ELC_EVENT_SCI7_AM                0x1AE
#define RA_ELC_EVENT_SCI8_RXI               0x1B0
#define RA_ELC_EVENT_SCI8_TXI               0x1B1
#define RA_ELC_EVENT_SCI8_TEI               0x1B2
#define RA_ELC_EVENT_SCI8_ERI               0x1B3
#define RA_ELC_EVENT_SCI8_AM                0x1B4
#define RA_ELC_EVENT_SCI9_RXI               0x1B6
#define RA_ELC_EVENT_SCI9_TXI               0x1B7
#define RA_ELC_EVENT_SCI9_TEI               0x1B8
#define RA_ELC_EVENT_SCI9_ERI               0x1B9
#define RA_ELC_EVENT_SCI9_AM                0x1BA
#define RA_ELC_EVENT_SCIX0_SCIX0            0x1BC
#define RA_ELC_EVENT_SCI1_SCIX0             0x1BC
#define RA_ELC_EVENT_SCIX0_SCIX1            0x1BD
#define RA_ELC_EVENT_SCI1_SCIX1             0x1BD
#define RA_ELC_EVENT_SCIX0_SCIX2            0x1BE
#define RA_ELC_EVENT_SCI1_SCIX2             0x1BE
#define RA_ELC_EVENT_SCIX0_SCIX3            0x1BF
#define RA_ELC_EVENT_SCI1_SCIX3             0x1BF
#define RA_ELC_EVENT_SCIX1_SCIX0            0x1C0
#define RA_ELC_EVENT_SCI2_SCIX0             0x1C0
#define RA_ELC_EVENT_SCIX1_SCIX1            0x1C1
#define RA_ELC_EVENT_SCI2_SCIX1             0x1C1
#define RA_ELC_EVENT_SCIX1_SCIX2            0x1C2
#define RA_ELC_EVENT_SCI2_SCIX2             0x1C2
#define RA_ELC_EVENT_SCIX1_SCIX3            0x1C3
#define RA_ELC_EVENT_SCI2_SCIX3             0x1C3
#define RA_ELC_EVENT_SPI0_RXI               0x1C4
#define RA_ELC_EVENT_SPI0_TXI               0x1C5
#define RA_ELC_EVENT_SPI0_IDLE              0x1C6
#define RA_ELC_EVENT_SPI0_ERI               0x1C7
#define RA_ELC_EVENT_SPI0_TEI               0x1C8
#define RA_ELC_EVENT_SPI1_RXI               0x1C9
#define RA_ELC_EVENT_SPI1_TXI               0x1CA
#define RA_ELC_EVENT_SPI1_IDLE              0x1CB
#define RA_ELC_EVENT_SPI1_ERI               0x1CC
#define RA_ELC_EVENT_SPI1_TEI               0x1CD
#define RA_ELC_EVENT_OSPI_INT               0x1D9
#define RA_ELC_EVENT_QSPI_INT               0x1DA
#define RA_ELC_EVENT_DOC_INT                0x1DB

/* Possible peripherals to be linked to event signals */
#define RA_ELC_PERIPHERAL_GPT_A   0
#define RA_ELC_PERIPHERAL_GPT_B   1
#define RA_ELC_PERIPHERAL_GPT_C   2
#define RA_ELC_PERIPHERAL_GPT_D   3
#define RA_ELC_PERIPHERAL_GPT_E   4
#define RA_ELC_PERIPHERAL_GPT_F   5
#define RA_ELC_PERIPHERAL_GPT_G   6
#define RA_ELC_PERIPHERAL_GPT_H   7
#define RA_ELC_PERIPHERAL_ADC0    8
#define RA_ELC_PERIPHERAL_ADC0_B  9
#define RA_ELC_PERIPHERAL_ADC1    10
#define RA_ELC_PERIPHERAL_ADC1_B  11
#define RA_ELC_PERIPHERAL_DAC0    12
#define RA_ELC_PERIPHERAL_DAC1    13
#define RA_ELC_PERIPHERAL_IOPORT1 14
#define RA_ELC_PERIPHERAL_IOPORT2 15
#define RA_ELC_PERIPHERAL_IOPORT3 16
#define RA_ELC_PERIPHERAL_IOPORT4 17
#define RA_ELC_PERIPHERAL_CTSU    18

#endif /* ZEPHYR_INCLUDE_DT_BINDINGS_MISC_RENESAS_RA_ELC_RA6M4_ELC_H_ */
