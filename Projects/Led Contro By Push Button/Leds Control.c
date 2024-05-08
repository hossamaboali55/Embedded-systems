#include <avr/io.h>

int main(void)
{
	// Configure port C pins as inputs
	DDRB = 0x00;

	// Configure port C pins as outputs
	DDRC=0xff;

	while (1)
	{
		// Check if button 1 is pressed 
		if (PINB & (1 << 0))
		{
			// Turn on LED 1
			PORTC |= (1 << 0);
		}
		else
		{
			// Turn off LED 1
			PORTC &= ~(1 << 0);
		}

		// Check if button 2 is pressed 
		if (PINB & (1 << 1))
		{
			// Turn on LED 2
			PORTC |= (1 << 1);
		}
		else
		{
			// Turn off LED 2
			PORTC &= ~(1 <<1);
		}
	}
}
