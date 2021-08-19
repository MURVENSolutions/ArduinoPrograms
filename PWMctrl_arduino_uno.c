/*
 Title: PWMctrl program in C using Arduino UNO
 Components: Arduino Uno, Motor driver,dc motor, Jumper wires, Usb mini cable 
 Description: PWM is one of the method to control the motor with the dc pulses.
 Company: MURVEN Infotech Design Solutions LLP (www.murven.in) 
*/

void setup() 
{
  
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  
}
void loop() {
    
    analogWrite(5,255);       //  255 is full pulse signal = 100% duty cycle 
    analogWrite(6,0);
    
    delay(2000);
    
    analogWrite(5,64);        // 64 is 25% of complete duty cycle
    analogWrite(6,0);
    
    delay(4000);
       
    analogWrite(5,128);        
    analogWrite(6,0);
    
    delay(2000);
    
    analogWrite(5,0);        
    analogWrite(6,0);
    delay(3000);
    
    }
    
