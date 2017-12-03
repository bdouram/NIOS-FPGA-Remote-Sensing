#include "system.h"
#include "altera_avalon_uart_regs.h"

#define RX_BUFFER_SIZE_1 1024
#define TX_BUFFER_SIZE_1 1024

unsigned short TxHead_1 = 0;
unsigned short TxTail_1 = 0;
unsigned char tx_buffer_1[TX_BUFFER_SIZE_1];

unsigned short RxHead_1 = 0;
unsigned short RxTail_1 = 0;
unsigned char rx_buffer_1[RX_BUFFER_SIZE_1];

void InitUart1(unsigned int BaudRate) {
	unsigned int divisor;

	divisor = (ALT_CPU_FREQ / BaudRate) + 1;
	IOWR_ALTERA_AVALON_UART_DIVISOR(UART_BASE, divisor);
	IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE,
			ALTERA_AVALON_UART_CONTROL_RRDY_MSK);
}

void IsrUart1(void* context, unsigned int id) {
	int sr;

	sr = IORD_ALTERA_AVALON_UART_STATUS(UART_BASE);
	if (sr & ALTERA_AVALON_UART_STATUS_RRDY_MSK)

	{
		rx_buffer_1[RxHead_1] = IORD_ALTERA_AVALON_UART_RXDATA(UART_BASE);
		IOWR_ALTERA_AVALON_UART_STATUS(UART_BASE, 0);
		if (++RxHead_1 > (RX_BUFFER_SIZE_1 - 1))
			RxHead_1 = 0;



	}
	if (sr & ALTERA_AVALON_UART_STATUS_TRDY_MSK) {
		if (IORD_ALTERA_AVALON_UART_CONTROL(UART_BASE)
				& ALTERA_AVALON_UART_CONTROL_TRDY_MSK)

		{
			if (TxTail_1 != TxHead_1) {
				IOWR_ALTERA_AVALON_UART_TXDATA(UART_BASE,
						tx_buffer_1[TxTail_1]);
				if (++TxTail_1 > (TX_BUFFER_SIZE_1 - 1))
					TxTail_1 = 0;
			} else
				IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE,
						ALTERA_AVALON_UART_CONTROL_RRDY_MSK);
		}
	}
}

unsigned char EmptyUart1() {
	if (RxHead_1 == RxTail_1)
		return 1;
	return 0;
}

unsigned char GetUart1(void) {
	unsigned char rxChar;

	/* buffer is empty */

	rxChar = rx_buffer_1[RxTail_1];
	if (++RxTail_1 > (RX_BUFFER_SIZE_1 - 1))
		RxTail_1 = 0;

	return rxChar;
}

unsigned char PutUart1(unsigned char in_char) {
	unsigned short size;
	unsigned int z;

	z = IORD_ALTERA_AVALON_UART_STATUS(UART_BASE)
			& ALTERA_AVALON_UART_STATUS_TRDY_MSK;

	if ((TxHead_1 == TxTail_1) && z) {
		IOWR_ALTERA_AVALON_UART_TXDATA(UART_BASE, in_char);




	} else {
		if (TxHead_1 >= TxTail_1)
			size = TxHead_1 - TxTail_1;
		else
			size = ((TX_BUFFER_SIZE_1 - 1) - TxTail_1) + TxHead_1;
		if (size > (TX_BUFFER_SIZE_1 - 3))
			return (-1);
		tx_buffer_1[TxHead_1] = in_char;
		if (++TxHead_1 > (TX_BUFFER_SIZE_1 - 1))
			TxHead_1 = 0;
		z = IORD_ALTERA_AVALON_UART_CONTROL(UART_BASE)
				| ALTERA_AVALON_UART_CONTROL_TRDY_MSK;
		IOWR_ALTERA_AVALON_UART_CONTROL(UART_BASE, z);

	}
	return (1);
}

