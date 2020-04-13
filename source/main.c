/*	Author: jalam004
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    /* Insert your solution below */
//DDRB = 0x00;   // PORTB = 0x00;
DDRA= 0x00;
DDRC = 0xFF;	PORTA = 0xFF; // Configure port B's 8 pins as outputs
PORTC = 0x00; 
unsigned char tmpA = 0x00;	// Initialize PORTB output to 0’s
//unsigned char cnt = 0x04;

	while(1){
unsigned char cnt = 0x04;
	tmpA = PINA;
	//tmpB = PINB; // Writes port B's 8 pins with 00001111
//unsigned char cnt = 0x04;

	if (tmpA &  0x01)
	{cnt--;
	PORTC = cnt;
	}
        if (tmpA &  0x02) 
	{cnt --;
	PORTC = cnt;
	}
	if(tmpA &  0x03)
	{
	cnt--;
	PORTC = cnt;
	}if(tmpA &  0x04) {
	cnt--;PORTC = cnt;
}// if(cnt < 0)
//{
//	cnt = cnt * -1;

//PORTC = cnt;
//}
//else{
//PORTC = cnt;
//}
}


	return 0;
}
