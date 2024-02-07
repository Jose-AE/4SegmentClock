#include <Arduino.h>
#include "SegmentManager.h"

#define BUTTON_B_PIN 7  // D0
#define BUTTON_D_PIN 6  // D1
#define BUTTON_A_PIN 5  // D2
#define BUTTON_C_PIN 4  // D3

bool isButtonPressedA() { return digitalRead(BUTTON_A_PIN); }
bool isButtonPressedB() { return digitalRead(BUTTON_B_PIN); }
bool isButtonPressedC() { return digitalRead(BUTTON_C_PIN); }
bool isButtonPressedD() { return digitalRead(BUTTON_D_PIN); }

void setup() {
   // Initialize serial communication at 9600 baud
   Serial.begin(9600);
}

void loop() {

   // Print the value to the Serial Monitor
   if (isButtonPressedA()) {
      Serial.println("A");
   } else if (isButtonPressedB()) {
      Serial.println("B");

   } else if (isButtonPressedC()) {
      Serial.println("C");

   } else if (isButtonPressedD()) {
      Serial.println("D");
   } else {
      Serial.println("NA");
   }

   // Delay for a short while to avoid flooding the Serial Monitor
   delay(100);
}
