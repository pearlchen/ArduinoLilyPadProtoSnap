/* 
  Sketch "TempSensor":
  Blowing on the temperature sensor to turn the red LED on.
  
  Slimmed down version of ProtoSnap LilyPad Development Platform Example Code
  by: Pete Lewis
      SparkFun Electronics
  date: 8/24/11
  license: Creative Commons Attribution-Share-alike v3.0 CC BY-SA 3.0
  http://creativecommons.org/licenses/by-sa/3.0/
  
  Modified by Pearl Chen
  

  Finally, the status of each input is streamed over the serial line at 9600 bps.
  To see what the values are, open up the serial monitor (the top right icon)
  and make sure the baud is set to 9600.
*/

/* Pin Definitions */
const int redLedPin = 9;
const int greenLedPin = 11;
const int tempSensorPin = A1;

int temperatureReading;

void setup()
{
  pinMode(redLedPin, OUTPUT);
  pinMode(greenLedPin, OUTPUT);
  //pinMode(tempSensorPin, INPUT);

  Serial.begin(9600);  // We'll output some information over serial
  
  digitalWrite(greenLedPin, HIGH);
}

void loop() {
  
  // get the voltage reading from the temperature sensor
  temperatureReading = analogRead(tempSensorPin);
  
  // convert that reading to voltage, LilyPad uses 4.2V not 5.0V
  float voltage = temperatureReading * 4.2;
  voltage /= 1024.0; 
 
  // convert to Celcius
  float temperatureC = (voltage - 0.5) * 100 ;  //converting from 10 mv per degree wit 500 mV offset
                                               //to degrees ((volatge - 500mV) times 100)

  Serial.print(temperatureC); Serial.println(" degrees C");
 
  if (temperatureC > 28) {
    //Turn on red LED - to indicate "hot"
    digitalWrite(redLedPin, HIGH); 
    digitalWrite(greenLedPin, LOW);
  }else{
    // turn the red LED off
    digitalWrite(redLedPin, LOW);
    digitalWrite(greenLedPin, HIGH); 
  }
  
  delay(500);
  
}
