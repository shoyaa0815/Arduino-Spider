void MoveFw() {
  LeftLeg[0].write(45);
  RightLeg[0].write(135);
  LeftLeg[1].write(45);
  RightLeg[1].write(135);
  delay(500);

  LeftLeg[0].write(90); 
  RightLeg[0].write(90);
  LeftLeg[1].write(90);
  RightLeg[1].write(90);
  delay(500);
}

void MoveBw() {
  LeftLeg[0].write(135);
  RightLeg[0].write(45);
  LeftLeg[1].write(135);
  RightLeg[1].write(45);
  delay(500);

  LeftLeg[0].write(90);
  RightLeg[0].write(90);
  LeftLeg[1].write(90);
  RightLeg[1].write(90);
  delay(500);
}

void SlideLeft() {
  LeftLeg[0].write(45);
  RightLeg[5].write(135);
  delay(500);

  LeftLeg[0].write(90);
  RightLeg[5].write(90);
  delay(500);
}

void SlideRight() {
  LeftLeg[4].write(135);
  RightLeg[2].write(45);
  delay(500);

  LeftLeg[4].write(90);
  RightLeg[2].write(90);
  delay(500);
}

void StopMovement() {
  for (int i = 0; i < 6; i++) {
    LeftLeg[i].write(90);
    RightLeg[i].write(90);
  }
}