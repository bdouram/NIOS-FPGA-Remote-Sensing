/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'cpu' in SOPC Builder design 'hw'
 * SOPC Builder design path: C:/Users/ra153277/Downloads/sdram/hw.sopcinfo
 *
 * Generated: Fri Dec 01 14:03:43 AMT 2017
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_qsys"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x8000820
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1c
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x4000020
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "cpu"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_RESET_ADDR 0x4000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x8000820
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1c
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x4000020
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_RESET_ADDR 0x4000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_LCD_16207
#define __ALTERA_AVALON_NEW_SDRAM_CONTROLLER
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_SYSID_QSYS
#define __ALTERA_AVALON_TIMER
#define __ALTERA_AVALON_UART
#define __ALTERA_NIOS2_QSYS


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone IV E"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag"
#define ALT_STDERR_BASE 0x8001138
#define ALT_STDERR_DEV jtag
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag"
#define ALT_STDIN_BASE 0x8001138
#define ALT_STDIN_DEV jtag
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag"
#define ALT_STDOUT_BASE 0x8001138
#define ALT_STDOUT_DEV jtag
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "hw"


/*
 * button1 configuration
 *
 */

#define ALT_MODULE_CLASS_button1 altera_avalon_pio
#define BUTTON1_BASE 0x8001100
#define BUTTON1_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON1_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON1_CAPTURE 0
#define BUTTON1_DATA_WIDTH 1
#define BUTTON1_DO_TEST_BENCH_WIRING 1
#define BUTTON1_DRIVEN_SIM_VALUE 0
#define BUTTON1_EDGE_TYPE "NONE"
#define BUTTON1_FREQ 50000000
#define BUTTON1_HAS_IN 1
#define BUTTON1_HAS_OUT 0
#define BUTTON1_HAS_TRI 0
#define BUTTON1_IRQ -1
#define BUTTON1_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON1_IRQ_TYPE "NONE"
#define BUTTON1_NAME "/dev/button1"
#define BUTTON1_RESET_VALUE 0
#define BUTTON1_SPAN 16
#define BUTTON1_TYPE "altera_avalon_pio"


/*
 * button10 configuration
 *
 */

#define ALT_MODULE_CLASS_button10 altera_avalon_pio
#define BUTTON10_BASE 0x8001060
#define BUTTON10_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON10_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON10_CAPTURE 0
#define BUTTON10_DATA_WIDTH 1
#define BUTTON10_DO_TEST_BENCH_WIRING 1
#define BUTTON10_DRIVEN_SIM_VALUE 0
#define BUTTON10_EDGE_TYPE "NONE"
#define BUTTON10_FREQ 50000000
#define BUTTON10_HAS_IN 1
#define BUTTON10_HAS_OUT 0
#define BUTTON10_HAS_TRI 0
#define BUTTON10_IRQ -1
#define BUTTON10_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON10_IRQ_TYPE "NONE"
#define BUTTON10_NAME "/dev/button10"
#define BUTTON10_RESET_VALUE 0
#define BUTTON10_SPAN 16
#define BUTTON10_TYPE "altera_avalon_pio"


/*
 * button11 configuration
 *
 */

#define ALT_MODULE_CLASS_button11 altera_avalon_pio
#define BUTTON11_BASE 0x8001050
#define BUTTON11_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON11_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON11_CAPTURE 0
#define BUTTON11_DATA_WIDTH 1
#define BUTTON11_DO_TEST_BENCH_WIRING 1
#define BUTTON11_DRIVEN_SIM_VALUE 0
#define BUTTON11_EDGE_TYPE "NONE"
#define BUTTON11_FREQ 50000000
#define BUTTON11_HAS_IN 1
#define BUTTON11_HAS_OUT 0
#define BUTTON11_HAS_TRI 0
#define BUTTON11_IRQ -1
#define BUTTON11_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON11_IRQ_TYPE "NONE"
#define BUTTON11_NAME "/dev/button11"
#define BUTTON11_RESET_VALUE 0
#define BUTTON11_SPAN 16
#define BUTTON11_TYPE "altera_avalon_pio"


/*
 * button12 configuration
 *
 */

#define ALT_MODULE_CLASS_button12 altera_avalon_pio
#define BUTTON12_BASE 0x8001040
#define BUTTON12_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON12_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON12_CAPTURE 0
#define BUTTON12_DATA_WIDTH 1
#define BUTTON12_DO_TEST_BENCH_WIRING 1
#define BUTTON12_DRIVEN_SIM_VALUE 0
#define BUTTON12_EDGE_TYPE "NONE"
#define BUTTON12_FREQ 50000000
#define BUTTON12_HAS_IN 1
#define BUTTON12_HAS_OUT 0
#define BUTTON12_HAS_TRI 0
#define BUTTON12_IRQ -1
#define BUTTON12_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON12_IRQ_TYPE "NONE"
#define BUTTON12_NAME "/dev/button12"
#define BUTTON12_RESET_VALUE 0
#define BUTTON12_SPAN 16
#define BUTTON12_TYPE "altera_avalon_pio"


/*
 * button2 configuration
 *
 */

#define ALT_MODULE_CLASS_button2 altera_avalon_pio
#define BUTTON2_BASE 0x80010f0
#define BUTTON2_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON2_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON2_CAPTURE 0
#define BUTTON2_DATA_WIDTH 1
#define BUTTON2_DO_TEST_BENCH_WIRING 1
#define BUTTON2_DRIVEN_SIM_VALUE 0
#define BUTTON2_EDGE_TYPE "NONE"
#define BUTTON2_FREQ 50000000
#define BUTTON2_HAS_IN 1
#define BUTTON2_HAS_OUT 0
#define BUTTON2_HAS_TRI 0
#define BUTTON2_IRQ -1
#define BUTTON2_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON2_IRQ_TYPE "NONE"
#define BUTTON2_NAME "/dev/button2"
#define BUTTON2_RESET_VALUE 0
#define BUTTON2_SPAN 16
#define BUTTON2_TYPE "altera_avalon_pio"


/*
 * button3 configuration
 *
 */

#define ALT_MODULE_CLASS_button3 altera_avalon_pio
#define BUTTON3_BASE 0x80010d0
#define BUTTON3_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON3_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON3_CAPTURE 0
#define BUTTON3_DATA_WIDTH 1
#define BUTTON3_DO_TEST_BENCH_WIRING 1
#define BUTTON3_DRIVEN_SIM_VALUE 0
#define BUTTON3_EDGE_TYPE "NONE"
#define BUTTON3_FREQ 50000000
#define BUTTON3_HAS_IN 1
#define BUTTON3_HAS_OUT 0
#define BUTTON3_HAS_TRI 0
#define BUTTON3_IRQ -1
#define BUTTON3_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON3_IRQ_TYPE "NONE"
#define BUTTON3_NAME "/dev/button3"
#define BUTTON3_RESET_VALUE 0
#define BUTTON3_SPAN 16
#define BUTTON3_TYPE "altera_avalon_pio"


/*
 * button4 configuration
 *
 */

#define ALT_MODULE_CLASS_button4 altera_avalon_pio
#define BUTTON4_BASE 0x80010c0
#define BUTTON4_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON4_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON4_CAPTURE 0
#define BUTTON4_DATA_WIDTH 1
#define BUTTON4_DO_TEST_BENCH_WIRING 1
#define BUTTON4_DRIVEN_SIM_VALUE 0
#define BUTTON4_EDGE_TYPE "NONE"
#define BUTTON4_FREQ 50000000
#define BUTTON4_HAS_IN 1
#define BUTTON4_HAS_OUT 0
#define BUTTON4_HAS_TRI 0
#define BUTTON4_IRQ -1
#define BUTTON4_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON4_IRQ_TYPE "NONE"
#define BUTTON4_NAME "/dev/button4"
#define BUTTON4_RESET_VALUE 0
#define BUTTON4_SPAN 16
#define BUTTON4_TYPE "altera_avalon_pio"


/*
 * button5 configuration
 *
 */

#define ALT_MODULE_CLASS_button5 altera_avalon_pio
#define BUTTON5_BASE 0x80010b0
#define BUTTON5_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON5_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON5_CAPTURE 0
#define BUTTON5_DATA_WIDTH 1
#define BUTTON5_DO_TEST_BENCH_WIRING 1
#define BUTTON5_DRIVEN_SIM_VALUE 0
#define BUTTON5_EDGE_TYPE "NONE"
#define BUTTON5_FREQ 50000000
#define BUTTON5_HAS_IN 1
#define BUTTON5_HAS_OUT 0
#define BUTTON5_HAS_TRI 0
#define BUTTON5_IRQ -1
#define BUTTON5_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON5_IRQ_TYPE "NONE"
#define BUTTON5_NAME "/dev/button5"
#define BUTTON5_RESET_VALUE 0
#define BUTTON5_SPAN 16
#define BUTTON5_TYPE "altera_avalon_pio"


/*
 * button6 configuration
 *
 */

#define ALT_MODULE_CLASS_button6 altera_avalon_pio
#define BUTTON6_BASE 0x80010a0
#define BUTTON6_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON6_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON6_CAPTURE 0
#define BUTTON6_DATA_WIDTH 1
#define BUTTON6_DO_TEST_BENCH_WIRING 1
#define BUTTON6_DRIVEN_SIM_VALUE 0
#define BUTTON6_EDGE_TYPE "NONE"
#define BUTTON6_FREQ 50000000
#define BUTTON6_HAS_IN 1
#define BUTTON6_HAS_OUT 0
#define BUTTON6_HAS_TRI 0
#define BUTTON6_IRQ -1
#define BUTTON6_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON6_IRQ_TYPE "NONE"
#define BUTTON6_NAME "/dev/button6"
#define BUTTON6_RESET_VALUE 0
#define BUTTON6_SPAN 16
#define BUTTON6_TYPE "altera_avalon_pio"


/*
 * button7 configuration
 *
 */

#define ALT_MODULE_CLASS_button7 altera_avalon_pio
#define BUTTON7_BASE 0x8001090
#define BUTTON7_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON7_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON7_CAPTURE 0
#define BUTTON7_DATA_WIDTH 1
#define BUTTON7_DO_TEST_BENCH_WIRING 1
#define BUTTON7_DRIVEN_SIM_VALUE 0
#define BUTTON7_EDGE_TYPE "NONE"
#define BUTTON7_FREQ 50000000
#define BUTTON7_HAS_IN 1
#define BUTTON7_HAS_OUT 0
#define BUTTON7_HAS_TRI 0
#define BUTTON7_IRQ -1
#define BUTTON7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON7_IRQ_TYPE "NONE"
#define BUTTON7_NAME "/dev/button7"
#define BUTTON7_RESET_VALUE 0
#define BUTTON7_SPAN 16
#define BUTTON7_TYPE "altera_avalon_pio"


/*
 * button8 configuration
 *
 */

#define ALT_MODULE_CLASS_button8 altera_avalon_pio
#define BUTTON8_BASE 0x8001080
#define BUTTON8_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON8_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON8_CAPTURE 0
#define BUTTON8_DATA_WIDTH 1
#define BUTTON8_DO_TEST_BENCH_WIRING 1
#define BUTTON8_DRIVEN_SIM_VALUE 0
#define BUTTON8_EDGE_TYPE "NONE"
#define BUTTON8_FREQ 50000000
#define BUTTON8_HAS_IN 1
#define BUTTON8_HAS_OUT 0
#define BUTTON8_HAS_TRI 0
#define BUTTON8_IRQ -1
#define BUTTON8_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON8_IRQ_TYPE "NONE"
#define BUTTON8_NAME "/dev/button8"
#define BUTTON8_RESET_VALUE 0
#define BUTTON8_SPAN 16
#define BUTTON8_TYPE "altera_avalon_pio"


/*
 * button9 configuration
 *
 */

#define ALT_MODULE_CLASS_button9 altera_avalon_pio
#define BUTTON9_BASE 0x8001070
#define BUTTON9_BIT_CLEARING_EDGE_REGISTER 0
#define BUTTON9_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BUTTON9_CAPTURE 0
#define BUTTON9_DATA_WIDTH 1
#define BUTTON9_DO_TEST_BENCH_WIRING 1
#define BUTTON9_DRIVEN_SIM_VALUE 0
#define BUTTON9_EDGE_TYPE "NONE"
#define BUTTON9_FREQ 50000000
#define BUTTON9_HAS_IN 1
#define BUTTON9_HAS_OUT 0
#define BUTTON9_HAS_TRI 0
#define BUTTON9_IRQ -1
#define BUTTON9_IRQ_INTERRUPT_CONTROLLER_ID -1
#define BUTTON9_IRQ_TYPE "NONE"
#define BUTTON9_NAME "/dev/button9"
#define BUTTON9_RESET_VALUE 0
#define BUTTON9_SPAN 16
#define BUTTON9_TYPE "altera_avalon_pio"


/*
 * entrada configuration
 *
 */

#define ALT_MODULE_CLASS_entrada altera_avalon_pio
#define ENTRADA_BASE 0x8001120
#define ENTRADA_BIT_CLEARING_EDGE_REGISTER 0
#define ENTRADA_BIT_MODIFYING_OUTPUT_REGISTER 0
#define ENTRADA_CAPTURE 0
#define ENTRADA_DATA_WIDTH 8
#define ENTRADA_DO_TEST_BENCH_WIRING 1
#define ENTRADA_DRIVEN_SIM_VALUE 0
#define ENTRADA_EDGE_TYPE "NONE"
#define ENTRADA_FREQ 50000000
#define ENTRADA_HAS_IN 1
#define ENTRADA_HAS_OUT 0
#define ENTRADA_HAS_TRI 0
#define ENTRADA_IRQ -1
#define ENTRADA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ENTRADA_IRQ_TYPE "NONE"
#define ENTRADA_NAME "/dev/entrada"
#define ENTRADA_RESET_VALUE 0
#define ENTRADA_SPAN 16
#define ENTRADA_TYPE "altera_avalon_pio"


/*
 * ext_ram configuration
 *
 */

#define ALT_MODULE_CLASS_ext_ram altera_avalon_new_sdram_controller
#define EXT_RAM_BASE 0x4000000
#define EXT_RAM_CAS_LATENCY 3
#define EXT_RAM_CONTENTS_INFO
#define EXT_RAM_INIT_NOP_DELAY 0.0
#define EXT_RAM_INIT_REFRESH_COMMANDS 2
#define EXT_RAM_IRQ -1
#define EXT_RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define EXT_RAM_IS_INITIALIZED 1
#define EXT_RAM_NAME "/dev/ext_ram"
#define EXT_RAM_POWERUP_DELAY 100.0
#define EXT_RAM_REFRESH_PERIOD 15.625
#define EXT_RAM_REGISTER_DATA_IN 1
#define EXT_RAM_SDRAM_ADDR_WIDTH 0x19
#define EXT_RAM_SDRAM_BANK_WIDTH 2
#define EXT_RAM_SDRAM_COL_WIDTH 10
#define EXT_RAM_SDRAM_DATA_WIDTH 16
#define EXT_RAM_SDRAM_NUM_BANKS 4
#define EXT_RAM_SDRAM_NUM_CHIPSELECTS 1
#define EXT_RAM_SDRAM_ROW_WIDTH 13
#define EXT_RAM_SHARED_DATA 0
#define EXT_RAM_SIM_MODEL_BASE 0
#define EXT_RAM_SPAN 67108864
#define EXT_RAM_STARVATION_INDICATOR 0
#define EXT_RAM_TRISTATE_BRIDGE_SLAVE ""
#define EXT_RAM_TYPE "altera_avalon_new_sdram_controller"
#define EXT_RAM_T_AC 5.5
#define EXT_RAM_T_MRD 3
#define EXT_RAM_T_RCD 20.0
#define EXT_RAM_T_RFC 70.0
#define EXT_RAM_T_RP 20.0
#define EXT_RAM_T_WR 14.0


/*
 * hal configuration
 *
 */

#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * jtag configuration
 *
 */

#define ALT_MODULE_CLASS_jtag altera_avalon_jtag_uart
#define JTAG_BASE 0x8001138
#define JTAG_IRQ 0
#define JTAG_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_NAME "/dev/jtag"
#define JTAG_READ_DEPTH 64
#define JTAG_READ_THRESHOLD 8
#define JTAG_SPAN 8
#define JTAG_TYPE "altera_avalon_jtag_uart"
#define JTAG_WRITE_DEPTH 64
#define JTAG_WRITE_THRESHOLD 8


/*
 * lcd_display configuration
 *
 */

#define ALT_MODULE_CLASS_lcd_display altera_avalon_lcd_16207
#define LCD_DISPLAY_BASE 0x80010e0
#define LCD_DISPLAY_IRQ -1
#define LCD_DISPLAY_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LCD_DISPLAY_NAME "/dev/lcd_display"
#define LCD_DISPLAY_SPAN 16
#define LCD_DISPLAY_TYPE "altera_avalon_lcd_16207"


/*
 * led_pio configuration
 *
 */

#define ALT_MODULE_CLASS_led_pio altera_avalon_pio
#define LED_PIO_BASE 0x8001110
#define LED_PIO_BIT_CLEARING_EDGE_REGISTER 0
#define LED_PIO_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LED_PIO_CAPTURE 0
#define LED_PIO_DATA_WIDTH 8
#define LED_PIO_DO_TEST_BENCH_WIRING 0
#define LED_PIO_DRIVEN_SIM_VALUE 0
#define LED_PIO_EDGE_TYPE "NONE"
#define LED_PIO_FREQ 50000000
#define LED_PIO_HAS_IN 0
#define LED_PIO_HAS_OUT 1
#define LED_PIO_HAS_TRI 0
#define LED_PIO_IRQ -1
#define LED_PIO_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LED_PIO_IRQ_TYPE "NONE"
#define LED_PIO_NAME "/dev/led_pio"
#define LED_PIO_RESET_VALUE 0
#define LED_PIO_SPAN 16
#define LED_PIO_TYPE "altera_avalon_pio"


/*
 * sysid configuration
 *
 */

#define ALT_MODULE_CLASS_sysid altera_avalon_sysid_qsys
#define SYSID_BASE 0x8001130
#define SYSID_ID 0
#define SYSID_IRQ -1
#define SYSID_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SYSID_NAME "/dev/sysid"
#define SYSID_SPAN 8
#define SYSID_TIMESTAMP 1512150633
#define SYSID_TYPE "altera_avalon_sysid_qsys"


/*
 * timer configuration
 *
 */

#define ALT_MODULE_CLASS_timer altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0x8001000
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 50000000
#define TIMER_IRQ 2
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 49999999
#define TIMER_MULT 1.0
#define TIMER_NAME "/dev/timer"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "s"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1.0
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * uart configuration
 *
 */

#define ALT_MODULE_CLASS_uart altera_avalon_uart
#define UART_BASE 0x8001020
#define UART_BAUD 9600
#define UART_DATA_BITS 8
#define UART_FIXED_BAUD 1
#define UART_FREQ 50000000
#define UART_IRQ 1
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/uart"
#define UART_PARITY 'N'
#define UART_SIM_CHAR_STREAM ""
#define UART_SIM_TRUE_BAUD 0
#define UART_SPAN 32
#define UART_STOP_BITS 1
#define UART_SYNC_REG_DEPTH 2
#define UART_TYPE "altera_avalon_uart"
#define UART_USE_CTS_RTS 0
#define UART_USE_EOP_REGISTER 0

#endif /* __SYSTEM_H_ */
