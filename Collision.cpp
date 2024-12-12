const int Led = 2;  
const int Shock = 3; 

void setup() {
  pinMode(LED_BUILTIN, OUTPUT); 
  pinMode(Led, OUTPUT);         
  pinMode(Shock, INPUT_PULLUP); 
}

void loop() {
  
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);

  int x = digitalRead(Shock); 
  if (x == HIGH) {          
    digitalWrite(Led, LOW);  
  } else {                  
    digitalWrite(Led, HIGH);
  }
}
