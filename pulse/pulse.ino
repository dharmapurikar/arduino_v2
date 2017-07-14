const int pulsePin = 5;

void setup() {
  pinMode(pulsePin, OUTPUT);
}

void loop() {
  delay(1000);
  digitalWrite(pulsePin, HIGH);
  delay(2000);
  digitalWrite(pulsePin, LOW);
}
