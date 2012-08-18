/*
 Sketch "FadeExternalLED"
 
 This example shows how to fade an external LED on pin 5
 using the analogWrite() function.
 
 Note: On the LilyPad, the built-in LED cannot fade.
 On the ProtoSnap, only the LEDs hooked up to 5 and 6 can accept analogWrite
 
 Modified by: Pearl Chen
 This example code is in the public domain.
 */

int ledPin = 5;        // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 5;    // how many points to fade the LED by

// the setup routine runs once when you press reset:
void setup()  { 
  // declaring led pin to be an output is optional for analogWrite():
  pinMode(ledPin, OUTPUT);
} 

// the loop routine runs over and over again forever:
void loop()  { 
  // set the brightness of led pin:
  analogWrite(ledPin, brightness);    

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade: 
  if (brightness == 0 || brightness == 255) {
    fadeAmount = -fadeAmount ; 
  }     
  // wait for 30 milliseconds to see the dimming effect    
  delay(30);                            
}

