const byte sensorPin = 3;  
const byte indicator = 13; 

void setup() {
  pinMode(sensorPin, INPUT_PULLUP); 
  pinMode(indicator, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  bool state = digitalRead(sensorPin); 
  digitalWrite(indicator, state);

  Serial.println(state ? "Somebody is in this area!" : "No one!"); 

  delay(500);
}
