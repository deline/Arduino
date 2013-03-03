#include "Arduino.h"

// Include application, user and local libraries
#include "LocalLibrary.h"


// Define variables and constants
const int LED_COUNT = 5;
int ledPins[] = {1, 2, 3, 4, 5};

// Setup
void setup() {
    for(int i = 0; i < LED_COUNT; i++) {
        pinMode(ledPins[i], OUTPUT);
    }
}

// Loop
void loop() {
    blink(ledPins, LED_COUNT);
}
