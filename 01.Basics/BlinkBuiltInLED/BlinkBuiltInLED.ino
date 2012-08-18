/*
  Sketch "BlinkBuiltInLED":
  Turns on built-in LED on pin 13 for one second, 
  then turns it off for one second, repeatedly.
 
  Modified by: Pearl Chen
  This example code is in the public domain.
*/
 
// Assign a variable named "ledPin" to this built-in LED:
int ledPin = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledPin, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(ledPin, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);               // wait for a second
  digitalWrite(ledPin, LOW);    // turn the LED off by making the voltage LOW
  delay(1000);               // wait for a second
}
