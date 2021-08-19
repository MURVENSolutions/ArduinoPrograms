/*
Title: BLE/UART in C using Arduino Uno
Components: Arduino,USB mini
Description: BLE/UART is a special type of communication here. Using these type of communication we can transfer or receive the 
data serially with entering the respective baud rate.
Company: MURVEN Infotech Design Solution LLP (www.murven.in)
*/


int led=13;
int read=0;

void setup()
{

  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Serial.println("1 - LED ON");
  Serial.println("2 - LED OFF");
}

void loop()
{
 
 if(Serial.available() > 0)
 {
   read = Serial.read();
   delay(10);
     
   if(read=='1')
   {
   
     Serial.println("Led ON");
     digitalWrite(13,HIGH);
   }
   
   if(read=='0')
   {
   
     Serial.println("Led OFF");
     digitalWrite(13,LOW);
   }
 }
}
