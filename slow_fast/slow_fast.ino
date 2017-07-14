
void setup() {
  DDRD = B01000000;
  noInterrupts();
}

void loop() {
  PORTD = B01000000;
//  PORTD = B01000000;
//  PORTD = B01000000;
//  PORTD = B01000000;
  PORTD = B00000000;
  //  digitalWrite(6, HIGH);
  //  digitalWrite(6, LOW);
}
