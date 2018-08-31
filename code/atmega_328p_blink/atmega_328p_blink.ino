// Trivial program to test the ATMEGA328p.
//
// Toggles LED on and off for a fixed period of time.
//  Typical blink sketch.


#define led 9

void setup() {
  // Initialize ATMEGA328p digital physical pin 15
  //	(programming pin 0) as an output.
  pinMode(led, OUTPUT);
}

void loop() {
  // Toggle LED on
  digitalWrite(led, HIGH);
  delay(1000);

  // Toggle LED off
  digitalWrite(led, LOW);
  delay(1000);
}
