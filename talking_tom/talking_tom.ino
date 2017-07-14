int BTN_PIN = 3;
int REC_LED = 4;
int PLAY_PIN = 5;
int REC_PIN = 6;
int PLAY_LED = 7;
int count = 0;
volatile byte state = LOW;

void setup() {
  pinMode(PLAY_LED, OUTPUT);
  pinMode(REC_LED, OUTPUT);
  pinMode(PLAY_PIN, OUTPUT);
  pinMode(REC_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(BTN_PIN), start, CHANGE);
  digitalWrite(REC_PIN, LOW);
  delay(100);
  digitalWrite(PLAY_PIN, LOW);
  delay(100);
//  Serial.begin(9600);
}

void loop() {
  if (state == HIGH) {
//    Serial.println("Record...");
    digitalWrite(REC_PIN, HIGH);
    delay(4000);
    digitalWrite(REC_PIN, LOW);
    delay(100);
//    Serial.println("Play...");
    digitalWrite(PLAY_PIN, HIGH);
    delay(4000);
    digitalWrite(PLAY_PIN, LOW);
    delay(100);
//    Serial.println("Stop...");
    count = count + 1;
    if (count >= 5) {
      count = 0;
//      Serial.println("Reset");
      state = !state;
    }
  }
}

void start() {
  if (state == LOW) {
//    Serial.println("Activating circuit!");
    state = !state;
  }
}
