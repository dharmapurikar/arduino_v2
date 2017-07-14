// Pin 6: Play
// Pin 7: Rec

const int PLAY_PIN = 6;
const int REC_PIN = 7;
const int MIC_PIN = 3;

void setup() {
  pinMode(PLAY_PIN, OUTPUT);
  pinMode(REC_PIN, OUTPUT);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(MIC_PIN, INPUT);
  digitalWrite(REC_PIN, LOW);
  Serial.begin(9600);
}

void loop() {
  Serial.println(analogRead(MIC_PIN));
  delay(100);
}
