#include <Arduino.h>
#include "SegmentManager.h"

// put function declarations here:
int myFunction(int, int);

void setup() {
   // put your setup code here, to run once:
   int result = myFunction(2, 3);
}

void loop() {
   // put your main code here, to run repeatedly:
}

// put function definitions here:
int myFunction(int x, int y) { return x + y; }

void setup() { pinMode(13, OUTPUT); }
void loop() {
   digitalWrite(13, HIGH);
   delay(1000);
   digitalWrite(13, LOW);
   delay(1000);
}