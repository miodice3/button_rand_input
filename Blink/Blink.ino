// Define the LED pin
#define LED_PIN 1

void setup() {
  // Set the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW); // Turn on the LED (pin low)
  delay(5000);                 // short button press
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN, HIGH);  // Turn off LED, (pin high)
  delay(100);                 // short button press

  // Turn the LED off
  digitalWrite(LED_PIN, LOW); // Turn on the LED (pin low)

  // sleep from 2 - 13 seconds
  delay(random(2000, 13001));
}
