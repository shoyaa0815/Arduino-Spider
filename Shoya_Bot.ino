#include <Servo.h>

Servo LeftLeg[6], RightLeg[6];

const int LegPinLeft[6] = { 1, 2, 3, 4, 5, 6 };
const int LegPinRight[6] = { 7, 8, 9, 10, 11, 12 };

int LeftStart[6] = { 90, 90, 90, 90, 90, 90 };
int RightStart[6] = { 90, 90, 90, 90, 90, 90 };

void setup() {
  for (int i = 0; i < 6; i++) {
    LeftLeg[i].attach(LegPinLeft[i]);
    RightLeg[i].attach(LegPinRight[i]);
  }


  for (int i = 0; i < 6; i++) {
    LeftLeg[i].write(LeftStart[i]);
    RightLeg[i].write(RightStart[i]);
  }

  delay(1000);
}

void loop() {

  // MoveFw();
  // delay(2000);
}
