#include <Arduino.h>

const int ledPins[] = {2, 4, 5, 18};
const int numLeds = 4;      
int delayTime = 200;       

void setup() {
  for (int i = 0; i < numLeds; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  for (int i = 0; i < numLeds; i++) {
    digitalWrite(ledPins[i], HIGH);  
    delay(delayTime);                
    digitalWrite(ledPins[i], LOW);  
  }
}