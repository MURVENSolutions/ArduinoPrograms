/*

 Title: Sound detection sensor program in C using Arduino UNO
 Components: Arduino Uno, Sound detection sensor, Jumper cables.
 Description: The output components can be directly enabled by giving power supply manually. 
              But in some cases if we need to activate any output devices automatically, we use sensors.
              So this sound sensor enables triggers if the sound is produced along the surroundings. 
 Company: MURVEN Infotech Design Solutions LLP (www.murven.in) 
 
*/

const int led=13;
const int threshold=200;

void setup()
{
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(A2,INPUT);
  
}
 void loop()
 {
 
  int soundsensor=analogRead(A2);
  
  if(soundsensor >= threshold)
  {
    digitalWrite(led,HIGH);
    Serial.println("Sound detects!");
    }
    
   else
    {
      digitalWrite(led,LOW);
      }
  }
