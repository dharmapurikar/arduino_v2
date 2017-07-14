#include <TM1638.h>
// define a module on data pin 8, clock pin 9 and strobe pin 10
TM1638 module(8, 9, 10);
unsigned long a = 1;

void setup()
{
}

void loop()
{
  for (a = 1; a <= 10; a++)
  {
    module.setDisplayToDecNumber(a, 0, false);
    delay(1500);
  }
  module.setDisplayToString("ISHA D   ");
  delay(5000);
}
