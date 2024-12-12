const int Led = 2;  // Define Led pin
const int Shock = 3; // Define Shock pin

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); // Built-in LED for blinking
  pinMode(Led, OUTPUT);         // Led pin as output
  pinMode(Shock, INPUT_PULLUP); // Shock pin as input with internal pull-up resistor
}

void loop() {
  // Built-in LED blinking (removed the original loop to only have one loop)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  int x = digitalRead(Shock); // Read the value from the Shock pin

  if (x == HIGH) {          // If Shock pin is HIGH (using pull up resistor)
    digitalWrite(Led, LOW);  // Turn Led OFF
  } else {                   // If Shock pin is LOW
    digitalWrite(Led, HIGH); // Turn Led ON
  }
}
