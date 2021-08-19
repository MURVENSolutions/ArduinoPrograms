/*
 Title: IR-Sensor program in C using Arduino UNO
 Components: IR Sensor, Usb mini cable, Jumping wires
 Description: IR Sensor is a device which detects Infrared radiation in its surroundings.
 Company: MURVEN Infotech Design Solutions LLP (www.murven.in) 
*/


void setup() {

  pinMode(13,OUTPUT);
  pinMode(3,INPUT);

}

void loop() {

  if(digitalRead(3)== LOW)
  
  {
    digitalWrite(13,LOW);
   }
    
    else
    {
      digitalWrite(13,HIGH);
      delay(10); 
    }
}
