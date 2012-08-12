/*
  Button
 
 Turns on and off a LED connected to digitalvpin 5, 
 when pressing the LilyPad ProtoSnap pushbutton 
 attached to pin A5. 
  
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe
 modified again 11 Aug 2012
 by Pearl Chen
 
 This example code is in the public domain.
 */

// constants won't change. They're used here to 
// set pin numbers:
const int buttonPin = A5;     // the number of the pushbutton pin
const int ledPin =  5;        // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT); 
  
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  // due to where the button is wired on the LilyPad ProtoSnap, 
  // we need to enable a built-in "pullup resistor" on the same pin,
  // otherwise button presses are erratic and even trigger when the
  // board is flexed.
  digitalWrite(buttonPin, HIGH);
  
}

void loop(){
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);
  Serial.println(buttonState);

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
  delay(50);
}
