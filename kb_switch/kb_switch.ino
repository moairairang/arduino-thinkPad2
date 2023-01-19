int s1 = 14;
int s2 = 16;
int iot = 12;
int ntp = 15;
int S1, S2;

void setup() {
  Serial.begin(9600);
  pinMode(s1, INPUT_PULLUP);
  pinMode(s2, INPUT_PULLUP);
  pinMode(iot, OUTPUT);
  pinMode(ntp, OUTPUT);
}

void loop() {
  S1 = digitalRead(s1);
  S2 = digitalRead(s2);
  Serial.println("SW1:"+ S1);
 // Serial.println(S2);
delay(100);

}
