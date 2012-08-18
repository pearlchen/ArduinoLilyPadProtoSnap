/*
 Sketch "SwitchBuiltInLED":
 
 Turns on the built-in LED connected to pin 13, 
 when sliding the LilyPad ProtoSnap slide button 
 attached to pin 2 to the 'on' position. 
 Turns off LED when slide is in 'off' position.
 
 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe 
 modified again 11 Aug 2012
 by Pearl Chen
 
 This example code is in the public domain.
 */

// Assign a variable to the built-in LED,
// And another variable for the switch
int ledPin =  13;
int switchPin = 2;
   
// variable for reading the switch on/off state
int switchState; 

void setup() {

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT); 
  
  // initialize the switch pin as an input with a pull-up resistor:
  pinMode(switchPin, INPUT_PULLUP);
  
}

void loop(){
  
  // read the state of the switch 
  // and store it in the 'switchState' variable:
  switchState = digitalRead(switchPin);

  // check if the switch is set to on.
  // if it is, the switchState is LOW:
  if (switchState == LOW) {     
    // turn LED on:    
    digitalWrite(ledPin, HIGH); 
  } 
  else {
    // turn LED off:
    digitalWrite(ledPin, LOW); 
  }

  // add a tiny delay so sketch isn't running at max speed
  delay(100);
  
}
