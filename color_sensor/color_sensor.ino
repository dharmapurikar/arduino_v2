#include <FreqCount.h>

const int S0 = 3;
const int S1 = 4;
const int S2 = 5;
const int S3 = 6;
const int OE = 2;

void setup() {
  FreqCount.begin(1000);
  pinMode(S0, OUTPUT);
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(OE, INPUT);

  Serial.begin(9600);
  digitalWrite(OE, LOW);
}

void loop() {
  if (FreqCount.available()) {
    unsigned long count = FreqCount.read();
    Serial.println(count);
  }
}
