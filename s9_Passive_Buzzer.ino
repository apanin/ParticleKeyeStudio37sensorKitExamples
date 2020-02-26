/* 

Ks0019 keyestudio Passive Buzzer module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|_________________________________|


SPECIFICATIONS:

-emmits different frequencies of sound based on signal

src: https://wiki.keyestudio.com/Ks0019_keyestudio_Passive_Buzzer_module
*/

#include <math.h>
#define buzzer D0  

void setup() 
{ 
pinMode(buzzer,OUTPUT);// set digital IO pin pattern, OUTPUT to be output 
Serial.begin(9600);
} 

void loop() 
{ 

//regular sound  
digitalWrite(buzzer, HIGH);
delay(1000);
digitalWrite(buzzer, LOW);
delay(500);
// beep example
unsigned char i;
while(1){
  for(i=0;i<80;i++)// output a frequency sound
  { 
    digitalWrite(buzzer,HIGH);// sound
    delay(1);//delay1ms 
    digitalWrite(buzzer,LOW);//not sound
    delay(1);//ms delay 
  } 
  for(i=0;i<100;i++)// output a frequency sound
  { 
    digitalWrite(buzzer,HIGH);// sound
    digitalWrite(buzzer,LOW);//not sound
    delay(2);//2ms delay 
  }
Serial.println('beep');
}
} 