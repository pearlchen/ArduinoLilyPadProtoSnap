/*
 Sketch "toneKeyboard":
 Plays a pitch that changes based on a changing analog input
 
 circuit:
 * light sensor on pin A6 (outputs levels ~0-1000)
 * 8-ohm speaker on digital pin 7
 
 created 21 Jan 2010
 modified 9 Apr 2012
 by Tom Igoe
 modified again 11 Aug 2011
 by Pearl Chen
 
 This example code is in the public domain.
 
 http://arduino.cc/en/Tutorial/Tone3
 
 */

#include "pitches.h"

// the number of the buzzer/speaker pin
const int lightSensor = A6;
const int speakerPin =  7;

// minimum reading of the sensors that generates a note
const int threshold = 10;

// notes to play, corresponding to the 3 sensors:
int notes[] = {
  NOTE_A4, NOTE_B4, NOTE_C3 };

void setup() {
  
  // start up Serial for debugging
  //Serial.begin(9600);
  
}

void loop() {
  
  // get a sensor reading:
  int sensorReading = analogRead(lightSensor);
  
  // debugging
  //Serial.println(sensorReading);

  // if the sensor is pressed hard enough:
  if (sensorReading > threshold) {
    // play a corresponding level of frequency
    // more light means higher frequency
    tone(speakerPin, sensorReading );
  }else{
     noTone(speakerPin);
  }

}
