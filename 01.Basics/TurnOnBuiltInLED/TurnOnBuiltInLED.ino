/*
  Sketch "TurnOnBuiltInLED":
  Turns on built-in LED on pin 13.
 
  Written by: Pearl Chen
  This example code is in the public domain.
*/
 
// Assign a variable named "ledPin" to this built-in LED:
int ledPin = 13;

void setup() {
  
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);
  
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(ledPin, HIGH); 
  
}

void loop() {
  
}
