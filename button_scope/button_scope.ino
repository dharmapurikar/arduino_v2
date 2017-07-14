const int BUTTON_PIN = 6;
const int LED_PIN = 5;

void setup() {
  pinMode(BUTTON_PIN, INPUT);
  pinMode(LED_PIN, INPUT);
  digitalWrite(LED_PIN, HIGH);
  Serial.begin(9600);
}

void loop() {
  Serial.println(digitalRead(BUTTON_PIN));
  delay(50);
  if(digitalRead(BUTTON_PIN) == HIGH) {
    digitalWrite(LED_PIN, HIGH);
  } else {
    digitalWrite(LED_PIN, LOW);
  }
}
