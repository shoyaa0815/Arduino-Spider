void TurnLeft(int SpeedDelay) {
  L_F_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(speedDelay);
  
  L_M_3_servo.write(60);
  R_F_3_servo.write(120);
  delay(speedDelay);
  
  L_F_3_servo.write(90);
  R_B_3_servo.write(90);
  L_M_3_servo.write(90);
  R_F_3_servo.write(90);
  delay(speedDelay);

  L_B_3_servo.write(60);
  R_F_3_servo.write(120);
  delay(speedDelay);
  
  L_F_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(speedDelay);
  
  L_B_3_servo.write(90);
  R_F_3_servo.write(90);
  L_F_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(speedDelay);
}

void TurnRight(int SpeedDelay) {
  L_B_3_servo.write(60);
  R_F_3_servo.write(120);
  delay(speedDelay);
  
  L_F_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(speedDelay);
  
  L_B_3_servo.write(90);
  R_F_3_servo.write(90);
  L_F_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(speedDelay);

  L_F_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(speedDelay);
  
  L_M_3_servo.write(60);
  R_F_3_servo.write(120);
  delay(speedDelay);
  
  L_F_3_servo.write(90);
  R_B_3_servo.write(90);
  L_M_3_servo.write(90);
  R_F_3_servo.write(90);
  delay(speedDelay);
}