/**
 ******************************************************************************
 * @file           : main.c
 * @author         : arturo.dlrios
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * Copyright (c) 2025 embedX.
 * All rights reserved.
 *
 * This software is licensed under terms that can be found in the LICENSE file
 * in the root directory of this software component.
 *
 ******************************************************************************
 */

#include "led.h"
#include "uart.h"
#include "timebase.h"
#include <stdio.h>

int main(void)
{
	led_init();
	uart_tx_init();
	timebase_init();

	while(1)
	{
		delay(1);
		printf("A second just occurred!!\n\r");
	}

	return 0;
}
