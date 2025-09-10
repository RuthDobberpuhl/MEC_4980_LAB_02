#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(960);
  Serial.println("Starting Reads");
}

int ledBrightness = 0;
int reading2 = 0;

void loop() {
  delay(250); // read every .25 seconds
  int reading = analogRead(A0);
  Serial.print("Result: ");
  Serial.println(reading/16); 
  reading2 = 256-reading/16;
  analogWrite(LED_BUILTIN, reading2);
  //ledBrightness = (ledBrightness+ 1) % 256;
  Serial.println(reading2);
  
}

