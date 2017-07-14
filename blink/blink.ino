const int ledPin = 2;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(1000);               
  digitalWrite(ledPin, LOW); 
  delay(1000);               
}
