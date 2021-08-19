/*
 Title: Seven Segment LED program in C using Arduino UNO
 Components: Seven Segment Led + 1 Resisters
 Description: We can display decimal numerical using this type of display.
 Company: MURVEN Infotech Design Solutions LLP (www.murven.in) 
*/

#define type 0 // 0 for common cathode and 1 for common acode

const int displayPins[7] = {2,3,4,5,6,7,8}; // define pins
const int dicimalPoint = 9;// decimal point

// array for seven segment LED values.
//This is used for both common anode and common cathode
byte displayLEDs[10][7] = { 
        { 0,0,0,0,0,0,1 },  // = 0
        { 1,0,0,1,1,1,1 },  // = 1
        { 0,0,1,0,0,1,0 },  // = 2
        { 0,0,0,0,1,1,0 },  // = 3
        { 1,0,0,1,1,0,0 },  // = 4
        { 0,1,0,0,1,0,0 },  // = 5
        { 0,1,0,0,0,0,0 },  // = 6
        { 0,0,0,1,1,1,1 },  // = 7
        { 0,0,0,0,0,0,0 },  // = 8
        { 0,0,0,0,1,0,0 }   // = 9     
        }; 
     
void writeDigit(int digit) {
  Serial.print(digit);
  Serial.print(" ");

   int digitValue;
  for (int i=0; i < 7; i++) 
  {

      digitalWrite(displayPins[i], convertHighLow(displayLEDs[digit][i]));
      Serial.print(convertHighLow(displayLEDs[digit][i]));// print the result to the Serial monitor

  }// for i
}//writeDigit ends here

int convertHighLow(int v)
{
  int convertedValue;
    if(type ==0)
    {
      convertedValue = 1 - v;// if common anode, change the HIGH to LOW and LOW to HIGH
    }else{
      convertedValue = v;// if common cathode, keep it the same
    } 
    return convertedValue;
}

void setup() {
  for(int d=0; d<8; d++)
  {
    pinMode(displayPins[d], OUTPUT);// set pin as output
    
  }
   pinMode(dicimalPoint,OUTPUT);// define a pin for decimal pint
   digitalWrite(dicimalPoint,HIGH);// Set to LOW if common Anode and HIGH for common cathode

  Serial.begin(9600);// initialize serial monitor with 9600 baud
}// setup ends here


void loop() {
 
 for (int i=0; i<=9 ; i++) {
   writeDigit(i); 
   Serial.println(" displayed");
   delay(1000);
  }
  digitalWrite(dicimalPoint,LOW);// turn decimal point ON
  delay(3000);
  //writeDigit(4);
   //delay(3000);

}//loop ends here
 
