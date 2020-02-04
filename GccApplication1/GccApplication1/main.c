/*
 * GccApplication1.c
 *
 * Created: 29/01/2020 12:42:50
 * Author : joelle
 */ 
#define F_CPU 8e6

#include <avr/io.h>
#include <util/delay.h>

void ButtonC0Pressed();

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
	ButtonC0Pressed(); 
	
	
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

void ButtonC0Pressed()
{
	int state = 1; 
	int waitTIme = 1000; 
	DDRD = 0x00;
	DDRD = 0b11111111;			// All pins PORTD are set to output
	while (1)
	{
		if(PINC & 0x01){
			if ( (state == 1))
			{
				waitTIme = 1000;
				state = 0;
				
				}else if((state == 0)){
				
				waitTIme = 250;
				state = 1;
			}
			
			/*waitTIme = waitTIme/state; 
			if(state > 3){
				state = 1; 
			}else{
				state ++;
			}*/
			
		}
		
		PORTD = 0x80;
		wait(100);
		
		PORTD = 0x00;
		wait(1000);
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
	 
	
}

