/*
 Title: LED blink program in C using Arduino UNO
 Components: Onboard Led or standalone Led + Resister
 Description: Blink an onboard LED using Arduino UNO board
 Company: MURVEN Infotech Design Solutions LLP (www.murven.in) 
*/


void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}
void loop() {
  digitalWrite(LED_BUILTIN, HIGH);   level)
  delay(1000);                 
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000);                 
}
