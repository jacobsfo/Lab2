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
DDRB = 0x00;   // PORTB = 0x00;
DDRA= 0x00;
DDRC = 0xFF;	//PORTA = 0xFF; // Configure port B's 8 pins as outputs
PORTC = 0x00; 
unsigned char tmpB = 0x00;
unsigned char tmpA = 0x00;	// Initialize PORTB output to 0’s
	while(1){
	tmpA = PINA;
	tmpB = PINB; // Writes port B's 8 pins with 00001111
	if (tmpA == 0x01 && tmpB == 0x00) {
	PORTC = 0x01;	
}
	else

{
PORTC = 0x00;
}

}
	return 0;
}
