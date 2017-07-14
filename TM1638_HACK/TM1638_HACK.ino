//const int dataPin = 8;
//const int clockPin = 9;
//const int strobePin = 10;
//
//void setup() {
//  pinMode(dataPin, OUTPUT);
//  pinMode(clockPin, OUTPUT);
//  pinMode(strobePin, OUTPUT);
//}
//
//void loop() {
//  digitalWrite(strobePin, LOW);
//  shiftOut(dataPin, clockPin, MSBFIRST, 0xF);
//  digitalWrite(strobePin, HIGH);
//  delay(4000);
//}


#include <TM1638.h>

#define MODULES 4

// define a modules
TM1638 modules[] = {
  TM1638(8, 9, 10),
  TM1638(8, 9, 6),
  TM1638(8, 9, 5),
  TM1638(8, 9, 4)
};

void setup() {
}

const char string[] = "       ISHA SACHIN PRIYA DHARMAPURIKAR        ";
int base = 0;

void loop() {
  for (int i = 0; i < MODULES; i++) {
    const char* pos = string + base + (i * 8);

    if (pos >= string && pos + 8 < string + sizeof(string)) {
      modules[i].setDisplayToString(pos);
    } else {
      modules[i].clearDisplay();
    }
  }

  base++;

  if (base == sizeof(string) - 8) {
    base = -MODULES * 8;
  }

  delay(100);
}

