#include <Arduino.h>


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(1000); // Wait for serial to initialize
  Serial.println("Hello, Arduino!");

  pinMode(LED_BUILTIN, OUTPUT); // Set pin 13 as output
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("Blinking LED on pin 13");
  digitalWrite(LED_BUILTIN, HIGH); // Turn the LED on
  delay(500);             // Wait for half a second
  digitalWrite(LED_BUILTIN, LOW);  // Turn the LED off
  delay(2000);             // Wait for two seconds
}
