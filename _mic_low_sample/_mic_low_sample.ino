byte incomingAudio;
void setup() {
  pinMode(A0, INPUT);
  for (int i = 0; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
}

void loop() {
  incomingAudio = analogRead(A0);
  PORTD = incomingAudio;
  delay(10);
}
