/*
 * GccApplication1.c
 *
 * Created: 29/01/2020 12:42:50
 * Author : joelle
 */ 
#define F_CP 8e0

#include <avr/io.h>
#include <util/delay.h>

void wait(int miliseconds)
{
	for (int i = 0; i< miliseconds; i++)
	{
		
		_delay_ms ( 1 );
	}

}

int main(void)
{
    /* Replace with your application code */
	
	
}

void omenom(){
	DDRD = 0b11111111;			// All pins PORTD are set to output
	DDRC = 0xff;
	while (1)
	{
		//PORTD = 0xAA;			// Write 10101010b PORTD
		PORTC = 0b10000000;
		
		wait( 500 );
		//PORTD = 0x55;			// Write 01010101b PORTD
		PORTC = 0b01000000;
		wait( 500 );
	}


}

void eerste(){
	 /*Replace with your application code */
	 
	 DDRD = 0b11111111;
	 while (1)
	 {
	 PORTD = 0xAA;
	 wait( 250 );
	 PORTD = 0x55;			// Write 01010101b PORTD
	 wait( 250 );
	 }
	 
	 return 1;

}

