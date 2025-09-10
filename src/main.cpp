#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting Reads");
}

int ledBrightness = 0;

void loop() {
  delay(10);
  int reading = analogRead(A0);
  Serial.print("Result: ");
  Serial.println(reading);
  Serial.println("");
  analogWrite(LED_BUILTIN, reading/8);
  ledBrightness = (ledBrightness+ 1) % 256;
}
