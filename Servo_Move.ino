void MoveFw() {
  L_F_3_servo.write(60); 
  R_M_3_servo.write(120);
  L_B_3_servo.write(60);
  delay(200);

  L_F_1_servo.write(60);
  R_M_1_servo.write(120);
  L_B_1_servo.write(60);
  delay(200);

  L_F_3_servo.write(90);
  R_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(200);

  R_F_3_servo.write(120);
  L_M_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(200);

  R_F_1_servo.write(120);
  L_M_1_servo.write(60);
  R_B_1_servo.write(120);
  delay(200);
  
  R_F_3_servo.write(90);
  L_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(200);
}

void MoveBw() {  
  L_F_3_servo.write(60);
  R_M_3_servo.write(120);
  L_B_3_servo.write(60);
  delay(200);

  L_F_1_servo.write(120);
  R_M_1_servo.write(60);
  L_B_1_servo.write(120);
  delay(200);

  L_F_3_servo.write(90);
  R_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(200);

  R_F_3_servo.write(120);
  L_M_3_servo.write(60);
  R_B_3_servo.write(120);
  delay(200);

  R_F_1_servo.write(60);
  L_M_1_servo.write(120);
  R_B_1_servo.write(60);
  delay(200);

  R_F_3_servo.write(90);
  L_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(200);
}

void SlideL() {  
  L_F_3_servo.write(60);
  L_M_3_servo.write(60);
  L_B_3_servo.write(60);
  delay(200);

  R_F_1_servo.write(120);
  R_M_1_servo.write(120);
  R_B_1_servo.write(120);
  delay(200);

  L_F_3_servo.write(90);
  L_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(200);

  R_F_3_servo.write(120);
  R_M_3_servo.write(120);
  R_B_3_servo.write(120);
  delay(200);

  L_F_1_servo.write(60);
  L_M_1_servo.write(60);
  L_B_1_servo.write(60);
  delay(200);

  R_F_3_servo.write(90);
  R_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(200);
}


void SlideR() {
  R_F_3_servo.write(120);
  R_M_3_servo.write(120);
  R_B_3_servo.write(120);
  delay(200);

  L_F_1_servo.write(60);
  L_M_1_servo.write(60);
  L_B_1_servo.write(60);
  delay(200);

  R_F_3_servo.write(90);
  R_M_3_servo.write(90);
  R_B_3_servo.write(90);
  delay(200);
  
  L_F_3_servo.write(60);
  L_M_3_servo.write(60);
  L_B_3_servo.write(60);
  delay(200);

  R_F_1_servo.write(120);
  R_M_1_servo.write(120);
  R_B_1_servo.write(120);
  delay(200);
  
  L_F_3_servo.write(90);
  L_M_3_servo.write(90);
  L_B_3_servo.write(90);
  delay(200);
}