void MoveFw(int SpeedDelay) {
  L_F_3_servo.write(60); 
  R_M_3_servo.write(120);
  L_B_3_servo.write(60);
  delay(SpeedDelay);

  L_F_1_servo.write(60);
  R_M_1_servo.write(120);
  L_B_1_servo.write(60);
  delay(SpeedDelay);

  L_F_3_servo.write(90);
  R_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(SpeedDelay);

  R_F_3_servo.write(120);
  L_M_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(SpeedDelay);

  R_F_1_servo.write(120);
  L_M_1_servo.write(60);
  R_B_1_servo.write(120);
  delay(SpeedDelay);
  
  R_F_3_servo.write(90);
  L_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(SpeedDelay);
}

void MoveBw(int SpeedDelay) {  
  L_F_3_servo.write(60);
  R_M_3_servo.write(120);
  L_B_3_servo.write(60);
  delay(SpeedDelay);

  L_F_1_servo.write(120);
  R_M_1_servo.write(60);
  L_B_1_servo.write(120);
  delay(SpeedDelay);

  L_F_3_servo.write(90);
  R_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(SpeedDelay);

  R_F_3_servo.write(120);
  L_M_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(SpeedDelay);

  R_F_1_servo.write(60);
  L_M_1_servo.write(120);
  R_B_1_servo.write(60);
  delay(SpeedDelay);

  R_F_3_servo.write(90);
  L_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(SpeedDelay);
}

void SlideL(int SpeedDelay) {  
  L_F_3_servo.write(60);
  L_M_3_servo.write(60);
  L_B_3_servo.write(60);
  delay(SpeedDelay);

  R_F_1_servo.write(120);
  R_M_1_servo.write(120);
  R_B_1_servo.write(120);
  delay(SpeedDelay);

  L_F_3_servo.write(90);
  L_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(SpeedDelay);

  R_F_3_servo.write(120);
  R_M_3_servo.write(120);
  R_B_3_servo.write(120);
  delay(SpeedDelay);

  L_F_1_servo.write(60);
  L_M_1_servo.write(60);
  L_B_1_servo.write(60);
  delay(SpeedDelay);

  R_F_3_servo.write(90);
  R_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(SpeedDelay);
}


void SlideR(int SpeedDelay) {
  R_F_3_servo.write(120);
  R_M_3_servo.write(120);
  R_B_3_servo.write(120);
  delay(SpeedDelay);

  L_F_1_servo.write(60);
  L_M_1_servo.write(60);
  L_B_1_servo.write(60);
  delay(SpeedDelay);

  R_F_3_servo.write(90);
  R_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(SpeedDelay);
  
  L_F_3_servo.write(60);
  L_M_3_servo.write(60);
  L_B_3_servo.write(60);
  delay(SpeedDelay);

  R_F_1_servo.write(120);
  R_M_1_servo.write(120);
  R_B_1_servo.write(120);
  delay(SpeedDelay);
  
  L_F_3_servo.write(90);
  L_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(SpeedDelay);
}
