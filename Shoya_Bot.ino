#include <Servo.h> 

/*
  L == Left
  R == Right

  F == Front
  M == Middle
  B == Back

  1, 2, 3 == อันดับ Servo (นับจากข้างบนตัวหุ่น โดยให้หัวหันไปด้านหน้าและนับจากด้านในออกด้านนอก)
*/

const int Num_Servos = 18;

int ServoPins[Num_Servos] = {
  2, 3, 4,   // ขาพินสำหรับ Left Front (L_F_1, L_F_2, L_F_3)
  5, 6, 7,   // ขาพินสำหรับ Left Middle (L_M_1, L_M_2, L_M_3)
  8, 9, 10,  // ขาพินสำหรับ Left Back (L_B_1, L_B_2, L_B_3)
  11, 12, 13, // ขาพินสำหรับ Right Front (R_F_1, R_F_2, R_F_3)
  14, 15, 16, // ขาพินสำหรับ Right Middle (R_M_1, R_M_2, R_M_3)
  17, 18, 19  // ขาพินสำหรับ Right Back (R_B_1, R_B_2, R_B_3)
};

// Array ที่จะเก็บ Servo ทั้งหมด
Servo AllServos[Num_Servos];

L_F_1_servo = AllServos[0];
L_F_2_servo = AllServos[1];
L_F_3_servo = AllServos[2];

L_M_1_servo = AllServos[3];
L_M_2_servo = AllServos[4];
L_M_3_servo = AllServos[5];

L_B_1_servo = AllServos[6];
L_B_2_servo = AllServos[7];
L_B_3_servo = AllServos[8];

R_F_1_servo = AllServos[9];
R_F_2_servo = AllServos[10];
R_F_3_servo = AllServos[11];

R_M_1_servo = AllServos[12];
R_M_2_servo = AllServos[13];
R_M_3_servo = AllServos[14];

R_B_1_servo = AllServos[15];
R_B_2_servo = AllServos[16];
R_B_3_servo = AllServos[17];


void setup() { 
  Serial.begin(9600); 
  Serial.println("Set Servo "); 

  for (int i = 0; i < Num_Servos; i++) {
    AllServos[i].attach(ServoPins[i]);
  }
  
  for (int i = 0; i < Num_Servos; i++) {
    AllServos[i].write(90);
  }
  
  delay(1000); 

  Serial.println("Set Servo Completed "); 
} 

void loop() { 
  // MoveFw(SpeedDelay);
}



// #include <Servo.h>

// /*L == Left
//   R == Right

//   F == Front
//   M == Middle
//   B == Back

//   1 , 2 , 3 == อันดับServo(เวลานับให้ดูจากข้างบนตัวให้หัวหันไปด้านหน้านับจากด้านในออกด้านนอก)
//   */
// int L_F_1 = 1;
// int L_F_2 = 1;
// int L_F_3 = 1;

// int L_M_1 = 1;
// int L_M_2 = 1;
// int L_M_3 = 1;

// int L_B_1 = 1;
// int L_B_2 = 1;
// int L_B_3 = 1;

// int R_F_1 = 1;
// int R_F_2 = 1;
// int R_F_3 = 1;

// int R_M_1 = 1;
// int R_M_2 = 1;
// int R_M_3 = 1;

// int R_B_1 = 1;
// int R_B_2 = 1;
// int R_B_3 = 1;

// void setup() {
//   Serial.begin(9600);
//   Serial.println("Set Servo ");

//   L_F_1_servo.attach(2);  
//   L_F_2_servo.attach(3);  
//   L_F_3_servo.attach(4);  

//   L_M_1_servo.attach(5);
//   L_M_2_servo.attach(6);
//   L_M_3_servo.attach(7);

//   L_B_1_servo.attach(8);
//   L_B_2_servo.attach(9);
//   L_B_3_servo.attach(10);

//   R_F_1_servo.attach(11);
//   R_F_2_servo.attach(12);
//   R_F_3_servo.attach(13);

//   R_M_1_servo.attach(14);
//   R_M_2_servo.attach(15);
//   R_M_3_servo.attach(16);

//   R_B_1_servo.attach(17);
//   R_B_2_servo.attach(18);
//   R_B_3_servo.attach(19);

//   L_F_1_servo.write(90);
//   L_F_2_servo.write(90);
//   L_F_3_servo.write(90);
  
//   L_M_1_servo.write(90);
//   L_M_2_servo.write(90);
//   L_M_3_servo.write(90);
  
//   L_B_1_servo.write(90);
//   L_B_2_servo.write(90);
//   L_B_3_servo.write(90);
  
//   R_F_1_servo.write(90);
//   R_F_2_servo.write(90);
//   R_F_3_servo.write(90);
  
//   R_M_1_servo.write(90);
//   R_M_2_servo.write(90);
//   R_M_3_servo.write(90);
  
//   R_B_1_servo.write(90);
//   R_B_2_servo.write(90);
//   R_B_3_servo.write(90);
  
//   delay(1000);


//   Serial.println("Set Servo Completed ");
// }

// void loop() {

// }
