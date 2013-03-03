#include "LocalLibrary.h"

void blink(uint8_t pin, uint8_t times, uint16_t ms) {
    for (uint8_t i=1; i<=5; i++) {
      digitalWrite(i, HIGH);
      
    }
    delay(100);
    
    for (uint8_t i=1; i<=5; i++) {
        digitalWrite(i, LOW);
    
    }
    delay(200);
}