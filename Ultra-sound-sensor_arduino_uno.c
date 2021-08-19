/*
 Title: Ultrasonic Sensor program in C using Arduino UNO
 Components: Ultrasonic Sensor, Jumper wires, Usb mini cable 
 Description: Ultrasonic sensor is used to measure the distance from the objects using ultrasonic sound waves using Arduino UNO board
 Company: MURVEN Infotech Design Solutions LLP (www.murven.in) 
*/


int trigger_pin = 2;
int echo_pin = 3;
int buzzer_pin = 10; 
int time;
int distance; 
void setup() 
{
        Serial.begin (9600); 
        pinMode (trigger_pin, OUTPUT); 
        pinMode (echo_pin, INPUT);
        pinMode (buzzer_pin, OUTPUT);
}
void loop() 
{
    digitalWrite (trigger_pin, HIGH);
    delayMicroseconds (10);
    digitalWrite (trigger_pin, LOW);
    time = pulseIn (echo_pin, HIGH);
    distance = (time * 0.034) / 2;

  if (distance <= 10) 
        {
        Serial.println (" Door Open ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, HIGH);
        delay (500);
        }
  else {
        Serial.println (" Door closed ");
        Serial.print (" Distance= ");              
        Serial.println (distance);        
        digitalWrite (buzzer_pin, LOW);
        delay (500);        
       } 
}
