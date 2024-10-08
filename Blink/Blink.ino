// Define the LED pin
#define LED_PIN_ONBOARD 1
#define LED_PIN_2 2

void setup() {
  // Set the LED pin as an output
  pinMode(LED_PIN_ONBOARD, OUTPUT);
  pinMode(LED_PIN_2, OUTPUT);
  digitalWrite(LED_PIN_ONBOARD, LOW); // Turn on the LED (pin low)
  digitalWrite(LED_PIN_2, LOW); // Turn on the LED (pin low)
  delay(5000);                 // short button press
}

void loop() {
  // Turn the LED on
  digitalWrite(LED_PIN_ONBOARD, HIGH);  // Turn off LED, (pin high)
  digitalWrite(LED_PIN_2, HIGH); // Turn on the LED (pin low)
  delay(180);                 // short button press

  // Turn the LED off
  digitalWrite(LED_PIN_ONBOARD, LOW); // Turn on the LED (pin low)
  digitalWrite(LED_PIN_2, LOW); // Turn on the LED (pin low)

  // sleep from 2 - 13 seconds
  delay(random(2000, 13001));
}
