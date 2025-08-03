#include <Servo.h>

/*L == Left
  R == Right

  F == Front
  M == Middle
  B == Back

  1 , 2 , 3 == อันดับServo(เวลานับให้ดูจากข้างบนตัวให้หัวหันไปด้านหน้านับจากด้านในออกด้านนอก)
  */
int L_F_1 = 1;
int L_F_2 = 1;
int L_F_3 = 1;

int L_M_1 = 1;
int L_M_2 = 1;
int L_M_3 = 1;

int L_B_1 = 1;
int L_B_2 = 1;
int L_B_3 = 1;

int R_F_1 = 1;
int R_F_2 = 1;
int R_F_3 = 1;

int R_M_1 = 1;
int R_M_2 = 1;
int R_M_3 = 1;

int R_B_1 = 1;
int R_B_2 = 1;
int R_B_3 = 1;

void setup() {
  Serial.begin(9600);
  Serial.println("Set Servo ");

  L_F_1_servo.attach(2);  
  L_F_2_servo.attach(3);  
  L_F_3_servo.attach(4);  

  L_M_1_servo.attach(5);
  L_M_2_servo.attach(6);
  L_M_3_servo.attach(7);

  L_B_1_servo.attach(8);
  L_B_2_servo.attach(9);
  L_B_3_servo.attach(10);

  R_F_1_servo.attach(11);
  R_F_2_servo.attach(12);
  R_F_3_servo.attach(13);

  R_M_1_servo.attach(14);
  R_M_2_servo.attach(15);
  R_M_3_servo.attach(16);

  R_B_1_servo.attach(17);
  R_B_2_servo.attach(18);
  R_B_3_servo.attach(19);

  L_F_1_servo.write(90);
  L_F_2_servo.write(90);
  L_F_3_servo.write(90);
  
  L_M_1_servo.write(90);
  L_M_2_servo.write(90);
  L_M_3_servo.write(90);
  
  L_B_1_servo.write(90);
  L_B_2_servo.write(90);
  L_B_3_servo.write(90);
  
  R_F_1_servo.write(90);
  R_F_2_servo.write(90);
  R_F_3_servo.write(90);
  
  R_M_1_servo.write(90);
  R_M_2_servo.write(90);
  R_M_3_servo.write(90);
  
  R_B_1_servo.write(90);
  R_B_2_servo.write(90);
  R_B_3_servo.write(90);
  
  delay(1000);


  Serial.println("Set Servo Completed ");
}

void loop() {

}