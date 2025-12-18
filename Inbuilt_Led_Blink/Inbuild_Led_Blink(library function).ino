
void setup() {
  // setting inbuilt led as output
  pinMode(LED_BUILTIN, OUTPUT);
}


void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // led is on
  delay(1000);                      // 1 sec wait
  digitalWrite(LED_BUILTIN, LOW);   // led is off
  delay(1000);                      // 1 sec wait 
}
