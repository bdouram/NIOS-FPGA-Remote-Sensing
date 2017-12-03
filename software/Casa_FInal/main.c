#include <stdio.h>
#include <stdio.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <alt_types.h>
#include <io.h>
#include "system.h"
#include "sys/alt_irq.h"
#include "InterruptHandlerForUart.h"
#include "altera_avalon_pio_regs.h"
#include "altera_avalon_uart_regs.h"
#include "basic_io.h"

#define BAUD_RATE 9600

void InitUart() {
	int context_uart1;
	InitUart1(BAUD_RATE);
	alt_irq_register(UART_IRQ, &context_uart1, IsrUart1);
}

int main() {
	int i = 0;

	int presenca_sala = 0;
	int porta_sala = 0;
	int janela_sala = 0;

	int presenca_cozinha = 0;
	int porta_cozinha = 0;
	int janela_cozinha = 0;

	int presenca_quarto = 0;
	int porta_quarto = 0;
	int janela_quarto = 0;

	int presenca_casal = 0;
	int porta_casal = 0;
	int janela_casal = 0;

	InitUart();
	while (1) {
		//SALA
		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON1_BASE) == 1 && presenca_sala == 0) {
			PutUart1('1');
			presenca_sala = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON1_BASE) == 0 && presenca_sala == 1){
			PutUart1('1');
			presenca_sala = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON2_BASE) == 1 && porta_sala == 0){
			PutUart1('q');
			porta_sala = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON2_BASE) == 0 && porta_sala == 1){
			PutUart1('q');
			porta_sala = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON3_BASE) == 1 && janela_sala == 0){
			PutUart1('a');
			janela_sala = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON3_BASE) == 0 && janela_sala == 1){
			PutUart1('a');
			janela_sala = 0;
			msleep(500);
		}

		//COZINHA
		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON4_BASE) == 1 && presenca_cozinha == 0){
			PutUart1('2');
			presenca_cozinha = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON4_BASE) == 0 && presenca_cozinha == 1){
			PutUart1('2');
			presenca_cozinha = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON5_BASE) == 1 && porta_cozinha == 0){
			PutUart1('e');
			porta_cozinha = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON5_BASE) == 0 && porta_cozinha == 1){
			PutUart1('e');
			porta_cozinha = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON6_BASE) == 1 && janela_cozinha == 0){
			PutUart1('s');
			janela_cozinha = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON6_BASE) == 0 && janela_cozinha == 1){
			PutUart1('s');
			janela_cozinha = 0;
			msleep(500);
		}

		//QUARTO
		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON7_BASE) == 1 && presenca_quarto == 0){
			PutUart1('3');
			presenca_quarto = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON7_BASE) == 0 && presenca_quarto == 1){
			PutUart1('3');
			presenca_quarto = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON8_BASE) == 1 && porta_quarto == 0){
			PutUart1('r');
			porta_quarto = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON8_BASE) == 0 && porta_quarto == 1){
			PutUart1('r');
			porta_quarto = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON9_BASE) == 1 && janela_quarto == 0){
			PutUart1('d');
			janela_quarto = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON9_BASE) == 0 && janela_quarto == 1){
			PutUart1('d');
			janela_quarto = 0;
			msleep(500);
		}


		//QUARTO CASAL
		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON10_BASE) == 1 && presenca_casal == 0){
			PutUart1('5');
			presenca_casal = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON10_BASE) == 0 && presenca_casal == 1){
			PutUart1('5');
			presenca_casal = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON11_BASE) == 1 && porta_casal == 0){
			PutUart1('y');
			porta_casal = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON11_BASE) == 0 && porta_casal == 1){
			PutUart1('y');
			porta_casal = 0;
			msleep(500);
		}

		if (IORD_ALTERA_AVALON_PIO_DATA(BUTTON12_BASE) == 1 && janela_casal == 0){
			PutUart1('g');
			janela_casal = 1;
			msleep(500);
		}else if(IORD_ALTERA_AVALON_PIO_DATA(BUTTON12_BASE) == 0 && janela_casal == 1){
			PutUart1('g');
			janela_casal = 0;
			msleep(500);
		}

	}
	return 0;
}
