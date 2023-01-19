void TurnLeft() {
  MotorStop();
  sl(TurnSpeed);
  delay(6000 / TurnSpeed);
  sl(TurnSpeed / 2);
  Convert7ADC();
  while (L2 == 1) {
    Convert7ADC();
  }
  MotorStop();
}

void TurnRight() {
  MotorStop();
  sr(TurnSpeed);
  delay(6000 / TurnSpeed);
  sr(TurnSpeed / 2);
  Convert7ADC();
  while (R2 == 1) {
    Convert7ADC();
  }
  MotorStop();
}

void UTurnLeft() {
  MotorStop();
  MotorStop();
  sl(TurnSpeed);
  delay(18000 / TurnSpeed);
  Convert7ADC();
  while (L2 == 1) {
    Convert7ADC();
  }
  MotorStop();
}

void UTurnRight() {
  MotorStop();
  sr(TurnSpeed);
  delay(18000 / TurnSpeed);
  Convert7ADC();
  while (R2 == 1) {
    Convert7ADC();
  }
  MotorStop();
}

void Left(int Speed , int Time) {
  sl(Speed);
  delay(Time);
  ao();
}

void Right(int Speed , int Time) {
  sr(Speed);
  delay(Time);
  ao();
}

void TurnLeftDelay(int Speed , int Time) {
  tl(Speed);
  delay(Time);
}

void TurnRightDelay(int Speed , int Time) {
  tr(Speed);
  delay(Time);
}
