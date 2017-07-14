const int inputPin = 2;
unsigned int count = 0;
unsigned long time;

void setup() {
  Serial.begin(9600);
  pinMode(inputPin, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(inputPin), increment, FALLING);  
}

void loop() {
  if(millis() - time > 1000) {
    Serial.print("Approx frequency: ");
    Serial.print("[");
    Serial.print(count);
    Serial.print("]");
    Serial.print((count * 1000.00)/ (millis() - time));
    Serial.println("Hz");
    time = millis(); 
    count = 0;
  }
}

void increment() {
  count += 1;
//  Serial.println("Blink");
}


