/*
  Sketch "TurnOnExternalLED":
  Turns on two external LEDs on pins 6 and A4.
 
  Written by: Pearl Chen
  This example code is in the public domain.
*/
 
// Assign a variable named "ledPin" to this built-in LED:
int led1Pin = 6;
int led2Pin = A4;

void setup() {
  
  // initialize the digital pin as an output.
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  
  // turn the LED on (HIGH is the voltage level)
  digitalWrite(led1Pin, HIGH);
  digitalWrite(led2Pin, HIGH);
  
}

void loop() {
  
}
