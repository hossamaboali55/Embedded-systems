#include <avr/io.h>
#include <util/delay.h>
#define F_CPU 16000000
#define LED_PORT PORTC
#define LED_DDR DDRC
#define BUZZER_PIN PD1

int main() {
	LED_DDR |= (1 << PC0) | (1 << PC1) | (1 << PC2);

	DDRD |= (1 << BUZZER_PIN);

	while (1) {
		int i;
		
		for (i = 0; i < 3; i++) {
		
			LED_PORT |= (1 << i);
			_delay_ms(500); 
			
			LED_PORT &= ~(1 << i);
		}
		
		for (i = 1; i >= 0; i--) {
		
			LED_PORT |= (1 << i);
			_delay_ms(500); 
			LED_PORT &= ~(1 << i);
		}

		
		PORTD |= (1 << BUZZER_PIN);
		_delay_ms(1000); 
		PORTD &= ~(1 << BUZZER_PIN);
	}

	return 0;
}
