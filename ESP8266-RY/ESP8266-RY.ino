int RY[] = {5, 4, 0, 2};

void setup() {
  pinMode(RY[0], OUTPUT);
  pinMode(RY[1], OUTPUT);
  pinMode(RY[2], OUTPUT);
  pinMode(RY[3], OUTPUT);

}

void loop() {
    for (int i = 0; i <= 3; i++) {
      digitalWrite(RY[i], HIGH);
      delay(500);
      digitalWrite(RY[i], LOW);
      delay(500);
    }
//  digitalWrite(RY[2], LOW);
//  delay(500);
//  digitalWrite(RY[2], HIGH);
//  delay(500);
}
