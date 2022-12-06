/*
 * Led1.c
 *
 * Created: 02/12/2022 01:02:39 a. m.
 * Author : jeslo
 */ 
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
    DDRA=0x01;
	PORTA=0x00;
    while (1) 
    {
		PORTA=0x01;
		_delay_ms(250);
		_delay_ms(250);
		PORTA=0x00;
		_delay_ms(250);
		_delay_ms(250);
    }
}

