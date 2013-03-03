#include "LocalLibrary.h"

void blink(int ledPins[], int arraySize) {
    int delayTime = 200;

    for (int i = 0; i < arraySize; i++) {
        int previousIndex = i - 1;
        if (previousIndex < 0) {
            previousIndex = arraySize - 1;
        }        
        
        digitalWrite(ledPins[i], HIGH);
        digitalWrite(ledPins[previousIndex], LOW);
        delay(delayTime);
    }
}