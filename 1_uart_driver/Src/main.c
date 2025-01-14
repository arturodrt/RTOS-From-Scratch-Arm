/**
 ******************************************************************************
 * @file           : main.c
 * @author         : arturo.dlrios
 * @brief          : Main program body
 ******************************************************************************
 */

#include "led.h"
#include "uart.h"
#include <stdio.h>

int main(void)
{
	led_init();
	uart_tx_init();

	while(1)
	{
		printf("Hello from STM32F4.........\n\r");
	}

	return 0;
}
