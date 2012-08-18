/*
  Sketch "BlinkExternalLED":
  Turns on all LEDs one at a time, then off for one second, repeatedly.
  
  Modified by: Pearl Chen
  This example code is in the public domain.
*/
 
// assign all the LEDs to a variable
int led1Pin = 5;
int led2Pin = 6;
int led3Pin = A2;
int led4Pin = A4;
int led5Pin = A3;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize all the digital pins as an output.
  pinMode(led1Pin, OUTPUT);
  pinMode(led2Pin, OUTPUT);
  pinMode(led3Pin, OUTPUT);
  pinMode(led4Pin, OUTPUT);
  pinMode(led5Pin, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // turn the LEDs on (HIGH is the voltage level) with a 500ms pause
  digitalWrite(led1Pin, HIGH);   
  delay(500);
  digitalWrite(led2Pin, HIGH);   
  delay(500);
  digitalWrite(led3Pin, HIGH);   
  delay(500);
  digitalWrite(led4Pin, HIGH);   
  delay(500);
  digitalWrite(led5Pin, HIGH);   
  delay(500);
  
  // wait for 2 seconds after lighting them all up
  delay(2000);               
  
  digitalWrite(led1Pin, LOW);   
  delay(500);
  digitalWrite(led2Pin, LOW);   
  delay(500);
  digitalWrite(led3Pin, LOW);   
  delay(500);
  digitalWrite(led4Pin, LOW);   
  delay(500);
  digitalWrite(led5Pin, LOW);   
  delay(500);
  
  // wait for 2 seconds after turning them all off
  delay(2000);               
}
