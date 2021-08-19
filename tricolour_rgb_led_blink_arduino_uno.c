/*
 Title: Tricolour RGB LED blink program in C using Arduino UNO
 Components: Tricolour RGB Led + 3 Resisters
 Description: Blink an tricolour RGB Led in different colours using Arduino UNO board
 Company: MURVEN Infotech Design Solutions LLP (www.murven.in) 
*/


void setup()
{
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  digitalWrite(10, HIGH);
  delay(1000);    // wait for 1000 milliseconds
  digitalWrite(10, LOW);
  delay(1000);
  digitalWrite(11,HIGH);
  delay(1000);
  digitalWrite(11,LOW);
  delay(1000);
  digitalWrite(12,HIGH);
  delay(1000);
  digitalWrite(12,LOW);
  delay(1000);
}
