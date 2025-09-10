#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  Serial.begin(115200);
  Serial.println("Starting Reads");
}

void loop() {
  delay(1000);
  analogRead(A0);
  int reading = analogRead(A0);
  Serial.print("Result: ");
  Serial.println(reading);
  Serial.println("");


}
