// Define the LED pin
#define LED_PIN 1

void setup() {
  // Set the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH); // Turn off the LED
  delay(5000);                 // short button press
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN, LOW);  // ESP-01 LED is active LOW
  delay(100);                 // short button press

  // Turn the LED off
  digitalWrite(LED_PIN, HIGH); // Turn off the LED

  // sleep from 2 - 13 seconds
  delay(random(2000, 13001));
}
