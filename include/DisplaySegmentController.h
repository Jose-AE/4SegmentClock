#pragma once

#include <Arduino.h>

#pragma region

#define PIN_7SEGMENT_1_A 1
#define PIN_7SEGMENT_1_B 2
#define PIN_7SEGMENT_1_C 3
#define PIN_7SEGMENT_1_D 4
#define PIN_7SEGMENT_1_E 5
#define PIN_7SEGMENT_1_F 6
#define PIN_7SEGMENT_1_G 7

#define PIN_7SEGMENT_2_A 8
#define PIN_7SEGMENT_2_B 9
#define PIN_7SEGMENT_2_C 10
#define PIN_7SEGMENT_2_D 11
#define PIN_7SEGMENT_2_E 12
#define PIN_7SEGMENT_2_F 13
#define PIN_7SEGMENT_2_G 14

#define PIN_7SEGMENT_3_A 15
#define PIN_7SEGMENT_3_B 16
#define PIN_7SEGMENT_3_C 17
#define PIN_7SEGMENT_3_D 18
#define PIN_7SEGMENT_3_E 19
#define PIN_7SEGMENT_3_F 20
#define PIN_7SEGMENT_3_G 21

#define PIN_7SEGMENT_4_A 22
#define PIN_7SEGMENT_4_B 23
#define PIN_7SEGMENT_4_C 24
#define PIN_7SEGMENT_4_D 25
#define PIN_7SEGMENT_4_E 26
#define PIN_7SEGMENT_4_F 27
#define PIN_7SEGMENT_4_G 28

#pragma endregion

void setupSevenSegmentPins() {
   // 7-Segment Display 1
   pinMode(PIN_7SEGMENT_1_A, OUTPUT);
   pinMode(PIN_7SEGMENT_1_B, OUTPUT);
   pinMode(PIN_7SEGMENT_1_C, OUTPUT);
   pinMode(PIN_7SEGMENT_1_D, OUTPUT);
   pinMode(PIN_7SEGMENT_1_E, OUTPUT);
   pinMode(PIN_7SEGMENT_1_F, OUTPUT);
   pinMode(PIN_7SEGMENT_1_G, OUTPUT);

   // 7-Segment Display 2
   pinMode(PIN_7SEGMENT_2_A, OUTPUT);
   pinMode(PIN_7SEGMENT_2_B, OUTPUT);
   pinMode(PIN_7SEGMENT_2_C, OUTPUT);
   pinMode(PIN_7SEGMENT_2_D, OUTPUT);
   pinMode(PIN_7SEGMENT_2_E, OUTPUT);
   pinMode(PIN_7SEGMENT_2_F, OUTPUT);
   pinMode(PIN_7SEGMENT_2_G, OUTPUT);

   // 7-Segment Display 3
   pinMode(PIN_7SEGMENT_3_A, OUTPUT);
   pinMode(PIN_7SEGMENT_3_B, OUTPUT);
   pinMode(PIN_7SEGMENT_3_C, OUTPUT);
   pinMode(PIN_7SEGMENT_3_D, OUTPUT);
   pinMode(PIN_7SEGMENT_3_E, OUTPUT);
   pinMode(PIN_7SEGMENT_3_F, OUTPUT);
   pinMode(PIN_7SEGMENT_3_G, OUTPUT);

   // 7-Segment Display 4
   pinMode(PIN_7SEGMENT_4_A, OUTPUT);
   pinMode(PIN_7SEGMENT_4_B, OUTPUT);
   pinMode(PIN_7SEGMENT_4_C, OUTPUT);
   pinMode(PIN_7SEGMENT_4_D, OUTPUT);
   pinMode(PIN_7SEGMENT_4_E, OUTPUT);
   pinMode(PIN_7SEGMENT_4_F, OUTPUT);
   pinMode(PIN_7SEGMENT_4_G, OUTPUT);
}

void DisplayNumOnSegmentDisplay(int segment, int num) {
   // Define the pin configurations for each digit
   int digitPins[10][7] = {
       {1, 1, 1, 1, 1, 1, 0},  // 0
       {0, 1, 1, 0, 0, 0, 0},  // 1
       {1, 1, 0, 1, 1, 0, 1},  // 2
       {1, 1, 1, 1, 0, 0, 1},  // 3
       {0, 1, 1, 0, 0, 1, 1},  // 4
       {1, 0, 1, 1, 0, 1, 1},  // 5
       {1, 0, 1, 1, 1, 1, 1},  // 6
       {1, 1, 1, 0, 0, 0, 0},  // 7
       {1, 1, 1, 1, 1, 1, 1},  // 8
       {1, 1, 1, 1, 0, 1, 1}   // 9
   };

   // Get the pin configuration for the specified number
   int* pins = digitPins[num];

   // Select the correct display based on the 'segment' parameter
   switch (segment) {
      case 1:
         digitalWrite(PIN_7SEGMENT_1_A, pins[0]);
         digitalWrite(PIN_7SEGMENT_1_B, pins[1]);
         digitalWrite(PIN_7SEGMENT_1_C, pins[2]);
         digitalWrite(PIN_7SEGMENT_1_D, pins[3]);
         digitalWrite(PIN_7SEGMENT_1_E, pins[4]);
         digitalWrite(PIN_7SEGMENT_1_F, pins[5]);
         digitalWrite(PIN_7SEGMENT_1_G, pins[6]);
         break;
      case 2:
         digitalWrite(PIN_7SEGMENT_2_A, pins[0]);
         digitalWrite(PIN_7SEGMENT_2_B, pins[1]);
         digitalWrite(PIN_7SEGMENT_2_C, pins[2]);
         digitalWrite(PIN_7SEGMENT_2_D, pins[3]);
         digitalWrite(PIN_7SEGMENT_2_E, pins[4]);
         digitalWrite(PIN_7SEGMENT_2_F, pins[5]);
         digitalWrite(PIN_7SEGMENT_2_G, pins[6]);
         break;
      case 3:
         digitalWrite(PIN_7SEGMENT_3_A, pins[0]);
         digitalWrite(PIN_7SEGMENT_3_B, pins[1]);
         digitalWrite(PIN_7SEGMENT_3_C, pins[2]);
         digitalWrite(PIN_7SEGMENT_3_D, pins[3]);
         digitalWrite(PIN_7SEGMENT_3_E, pins[4]);
         digitalWrite(PIN_7SEGMENT_3_F, pins[5]);
         digitalWrite(PIN_7SEGMENT_3_G, pins[6]);
         break;
      case 4:
         digitalWrite(PIN_7SEGMENT_4_A, pins[0]);
         digitalWrite(PIN_7SEGMENT_4_B, pins[1]);
         digitalWrite(PIN_7SEGMENT_4_C, pins[2]);
         digitalWrite(PIN_7SEGMENT_4_D, pins[3]);
         digitalWrite(PIN_7SEGMENT_4_E, pins[4]);
         digitalWrite(PIN_7SEGMENT_4_F, pins[5]);
         digitalWrite(PIN_7SEGMENT_4_G, pins[6]);
         break;
      default:
         break;  // Invalid segment
   }
}
