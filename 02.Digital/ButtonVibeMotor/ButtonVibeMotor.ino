/*
 Sketch "ButtonVibeMotor":
 
 Vibrates the motor connected to pin 3, 
 when pressing the LilyPad ProtoSnap pushbutton attached to pin A5. 
 Stops vibrating when button is released.
  
 created by Pearl Chen
 
 This example code is in the public domain.
 */

// Assign a variable to the vibe motor,
// And another variable for the button
int vibePin =  3;
int buttonPin = A5;
   
// variable for reading the pushbutton status
int buttonState; 

void setup() {

  // initialize the vibe motor pin as an output:
  pinMode(vibePin, OUTPUT); 
  
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
    digitalWrite(vibePin, HIGH); 
  } 
  else {
    // turn LED off:
    digitalWrite(vibePin, LOW); 
  }

  // add a tiny delay so sketch isn't running at max speed
  delay(100);
  
}
