#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 16000000UL // CPU Frequency 


int main(void) {
	int number = 0; // Variable to store the displayed number
	
	// PORTA as output for 7-Segment display
	DDRA = 0xFF;
	
	//  PORTC6 as output for controlling common pin of 7-Segment
	DDRC |= (1 << PC6);
	
	// PORTD2 and PORTD3 as input with pull-up resistors for buttons
	DDRD &= ~((1 << PD2) | (1 << PD3));
	PORTD |= ((1 << PD2) | (1 << PD3));
	
	while (1) {
		// Check if button 1 is pressed
		if (!(PIND & (1 << PD2))) {
			_delay_ms(100); // Button delay
			
			// Increment number if it's less than 9
			if (number <9) {
				number++;
			}
		}
		
		// Check if button 2 is pressed
		if (!(PIND & (1 << PD3))) {
			_delay_ms(100); // Button  delay
			
			// Decrement number if it's greater than 0
			if (number > 0) {
				number--;
			}
		}
		
		// Enable common pin of 7-Segment
		PORTC |= (1 << PC6);
		
		// Define 7-segment display patterns for numbers 0 to 9
		int segments[10] = {0b00111111, 0b00000110, 0b01011011, 0b01001111, 0b01100110,
		0b01101101, 0b01111101, 0b00000111, 0b01111111, 0b01101111};
		
		// Output the corresponding segment pattern to display the digit
		PORTA = segments[number];
		
		// Delay to allow the display to be visible
		_delay_ms(65);
		
		// Disable common pin of 7-Segment
		PORTC &= ~(1 << PC6);
	}
	
	return 0;
}
