/**
 ******************************************************************************
 * @file           : main.c
 * @author         : arturo.dlrios
 * @brief          : Main program body
 ******************************************************************************

 */

#include "led.h"

int main(void)
{
	led_init();

	while(1)
	{
		led_on();
		for(int i=0; i<90000;i++);
		led_off();
		for(int i=0; i<90000;i++);
	}

	return 0;
}
