#include <Servo.h>
#include <BluetoothSerial.h>

BluetoothSerial SerialBT;

Servo LeftLeg[6], RightLeg[6];

const int LegPinLeft[6] = { 1, 2, 3, 4, 5, 6 };
const int LegPinRight[6] = { 7, 8, 9, 10, 11, 12 };

int LeftStart[6] = { 90, 90, 90, 90, 90, 90 };
int RightStart[6] = { 90, 90, 90, 90, 90, 90 };

bool moving_yumai = false;  


void setup() {
  Serial.begin(115200);
  SerialBT.begin("shoya");

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
  if (SerialBT.available()) {
    char command = SerialBT.read();
    Serial.println("Received: " + String(command));

    // ตรวจคำสั่งที่ส่งมา
    switch (command) {
      case 'F':
        if (!moving_yumai) {
          MoveFw();
          moving_yumai = true; 
        }
        break;
      case 'B':
        if (!moving_yumai) {
          MoveBw();
          moving_yumai = true;
        }
        break;
      case 'L':
        if (!moving_yumai) {
          SlideLeft();
          moving_yumai = true;
        }
        break;
      case 'R':
        if (!moving_yumai) {
          SlideRight();
          moving_yumai = true;
        }
        break;
      case 'S':
        StopMovement();
        moving_yumai = false; 
        break;
      default:
        Serial.println("mairu command");
    }
  }

  if (!SerialBT.available() && moving_yumai) {
    StopMovement();
    moving_yumai = false;
  }
}