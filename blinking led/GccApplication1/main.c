/*
 * GccApplication1.c
 *
 * Created: 08/03/2023 06:17:pm
 * Author : Davie
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRC = 0xff;   // Set Port D as output pins

	while (1)
	{
		PORTC = 0xff;   // Toggle the state of Port D
		_delay_ms(2000);  // Delay for 500 milliseconds
		PORTC= 0x00;
		_delay_ms(1000);
		
		PORTC =0b00000001;
		_delay_ms(1000);
		//PORTC = 0b00000000;
		//_delay_ms(1000);
		
		PORTC =0b00000011;
		_delay_ms(1000);
		//PORTC = 0b00000000;
		//_delay_ms(1000);
		PORTC =0b00000111;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
		PORTC =0b00001111;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
		
		PORTC =0b00011111;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
		
		PORTC =0b00111111;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
		
		PORTC =0b01111111;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
		
		PORTC =0b11111111;
		_delay_ms(1000);
		PORTC = 0b00000000;
		_delay_ms(1000);
	}
	

	return 0;
}

