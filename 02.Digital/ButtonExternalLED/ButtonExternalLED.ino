/*
 Sketch "ButtonExternalLED":
 
 Turns on the external LED connected to pin 5, 
 when pressing the LilyPad ProtoSnap pushbutton attached to pin A5. 
 Turns off LED when button is released.
  
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 modified again 11 Aug 2012
 by Pearl Chen
 
 This example code is in the public domain.
 */

// Assign a constant variable to the external LED,
// And another constant variable for the button
const int ledPin =  5;
const int buttonPin = A5;

// variable for reading the pushbutton status
int buttonState = 0;

void setup() {

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT); 
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT_PULLUP);
  
}

void loop(){
  
  // read the state of the pushbutton value
  // and store it in the 'buttonState' variable:
  buttonState = digitalRead(buttonPin);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is LOW:
  if (buttonState == LOW) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH); 
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }
  delay(100);
}
