/*
 Fade
 
 This example shows how to fade a RGB LED on pins 9-11 
 using the analogWrite() function.
 
 This example code is in the public domain.
 */

int redLed = 9;        // the pin that the led rgb pins are attached to
int blueLed = 10;
int greenLed = 11;

int brightness = 0;    // how bright the led is
int fadeAmount = 5;    // how many points to fade the led by

// the setup routine runs once when you press reset:
void setup()  { 
  // declare all led pins to be an output:
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(greenLed, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of red pin:
  analogWrite(redLed, brightness);

  // set the brightness of blue pin:
  analogWrite(blueLed, brightness); 

  // set the brightness of green pin:
  analogWrite(greenLed, brightness);   

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

