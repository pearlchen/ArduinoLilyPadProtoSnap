/*
  Sketch "DimExternalLEDs":
  Turns on LEDs on pin 5 and 6 at brightness steps 1 and 255
  
  Modified by: Pearl Chen
  This example code is in the public domain.
*/
 
// assign all the LEDs to a variable
int led1Pin = 5;
int led2Pin = 6;

// the setup routine runs once when you press reset:
void setup() {
  
  // declaring led pin to be an output is optional for analogWrite(): 
  //pinMode(led1Pin, OUTPUT);
  //pinMode(led2Pin, OUTPUT);
  
  // turn the LEDs on (1 is very dim, 255 is max)
  analogWrite(led1Pin, 1);
  analogWrite(led2Pin, 200);
}

// the loop routine runs over and over again forever:
void loop() {  
             
}
