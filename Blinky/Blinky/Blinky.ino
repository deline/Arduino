#include "Arduino.h"

// Include application, user and local libraries
#include "LocalLibrary.h"

// Define variables and constants
uint8_t numberOfLeds = 5;   // assumes pins 1-5 are used!


// Setup
void setup() {
    for(int i=1; i<=5; i++) {
        pinMode(i, OUTPUT);
    }
}

// Loop
void loop() {
  blink(numberOfLeds, 3, 333);    
}
