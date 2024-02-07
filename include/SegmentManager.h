

///                  when low 0 wil be displayed, when high 1 will be displayed
#define PIN_SEGMENT_1_NUM_0_1 1
#define PIN_SEGMENT_1_NUM_2_3 1

#define PIN_SEGMENT_2_NUM_0_1 1
#define PIN_SEGMENT_2_NUM_2_3 1
#define PIN_SEGMENT_2_NUM_4_5 1
#define PIN_SEGMENT_2_NUM_6_7 1
#define PIN_SEGMENT_2_NUM_8_9 1

#define PIN_SEGMENT_3_NUM_0_1 1
#define PIN_SEGMENT_3_NUM_2_3 1
#define PIN_SEGMENT_3_NUM_4_5 1

#define PIN_SEGMENT_4_NUM_0_1 1
#define PIN_SEGMENT_4_NUM_2_3 1
#define PIN_SEGMENT_4_NUM_4_5 1
#define PIN_SEGMENT_4_NUM_6_7 1
#define PIN_SEGMENT_4_NUM_8_9 1

void SetupPins() {
   // Segment 1 pins
   pinMode(PIN_SEGMENT_1_NUM_0_1, OUTPUT);
   pinMode(PIN_SEGMENT_1_NUM_2_3, OUTPUT);

   // Segment 2 pins
   pinMode(PIN_SEGMENT_2_NUM_0_1, OUTPUT);
   pinMode(PIN_SEGMENT_2_NUM_2_3, OUTPUT);
   pinMode(PIN_SEGMENT_2_NUM_4_5, OUTPUT);
   pinMode(PIN_SEGMENT_2_NUM_6_7, OUTPUT);
   pinMode(PIN_SEGMENT_2_NUM_8_9, OUTPUT);

   // Segment 3 pins
   pinMode(PIN_SEGMENT_3_NUM_0_1, OUTPUT);
   pinMode(PIN_SEGMENT_3_NUM_2_3, OUTPUT);
   pinMode(PIN_SEGMENT_3_NUM_4_5, OUTPUT);

   // Segment 4 pins
   pinMode(PIN_SEGMENT_4_NUM_0_1, OUTPUT);
   pinMode(PIN_SEGMENT_4_NUM_2_3, OUTPUT);
   pinMode(PIN_SEGMENT_4_NUM_4_5, OUTPUT);
   pinMode(PIN_SEGMENT_4_NUM_6_7, OUTPUT);
   pinMode(PIN_SEGMENT_4_NUM_8_9, OUTPUT);
}

void DisplayNumOnSegment(int segment, int num) {

   if (segment == 1) {
      switch (num) {
         case 0:
            digitalWrite(PIN_SEGMENT_1_NUM_0_1, LOW);
            break;
         case 1:
            digitalWrite(PIN_SEGMENT_1_NUM_0_1, HIGH);
            break;
         case 2:
            digitalWrite(PIN_SEGMENT_1_NUM_2_3, LOW);
            break;
         case 3:
            digitalWrite(PIN_SEGMENT_1_NUM_2_3, HIGH);
            break;
         default:
            break;
      }

   } else if (segment == 2) {
      switch (num) {
         case 0:
            digitalWrite(PIN_SEGMENT_2_NUM_0_1, LOW);
            break;
         case 1:
            digitalWrite(PIN_SEGMENT_2_NUM_0_1, HIGH);
            break;
         case 2:
            digitalWrite(PIN_SEGMENT_2_NUM_2_3, LOW);
            break;
         case 3:
            digitalWrite(PIN_SEGMENT_2_NUM_2_3, HIGH);
            break;
         case 4:
            digitalWrite(PIN_SEGMENT_2_NUM_4_5, LOW);
            break;
         case 5:
            digitalWrite(PIN_SEGMENT_2_NUM_4_5, HIGH);
            break;
         case 6:
            digitalWrite(PIN_SEGMENT_2_NUM_6_7, LOW);
            break;
         case 7:
            digitalWrite(PIN_SEGMENT_2_NUM_6_7, HIGH);
            break;
         case 8:
            digitalWrite(PIN_SEGMENT_2_NUM_8_9, LOW);
            break;
         case 9:
            digitalWrite(PIN_SEGMENT_2_NUM_8_9, HIGH);
            break;
         default:
            break;
      }

   } else if (segment == 3) {

      switch (num) {
         case 0:
            digitalWrite(PIN_SEGMENT_3_NUM_0_1, LOW);
            break;
         case 1:
            digitalWrite(PIN_SEGMENT_3_NUM_0_1, HIGH);
            break;
         case 2:
            digitalWrite(PIN_SEGMENT_3_NUM_2_3, LOW);
            break;
         case 3:
            digitalWrite(PIN_SEGMENT_3_NUM_2_3, HIGH);
            break;
         case 4:
            digitalWrite(PIN_SEGMENT_3_NUM_4_5, LOW);
            break;
         case 5:
            digitalWrite(PIN_SEGMENT_3_NUM_4_5, HIGH);
            break;
         default:
            break;
      }

   } else if (segment == 4) {

      switch (num) {
         case 0:
            digitalWrite(PIN_SEGMENT_4_NUM_0_1, LOW);
            break;
         case 1:
            digitalWrite(PIN_SEGMENT_4_NUM_0_1, HIGH);
            break;
         case 2:
            digitalWrite(PIN_SEGMENT_4_NUM_2_3, LOW);
            break;
         case 3:
            digitalWrite(PIN_SEGMENT_4_NUM_2_3, HIGH);
            break;
         case 4:
            digitalWrite(PIN_SEGMENT_4_NUM_4_5, LOW);
            break;
         case 5:
            digitalWrite(PIN_SEGMENT_4_NUM_4_5, HIGH);
            break;
         case 6:
            digitalWrite(PIN_SEGMENT_4_NUM_6_7, LOW);
            break;
         case 7:
            digitalWrite(PIN_SEGMENT_4_NUM_6_7, HIGH);
            break;
         case 8:
            digitalWrite(PIN_SEGMENT_4_NUM_8_9, LOW);
            break;
         case 9:
            digitalWrite(PIN_SEGMENT_4_NUM_8_9, HIGH);
            break;
         default:
            break;
      }
   }
}