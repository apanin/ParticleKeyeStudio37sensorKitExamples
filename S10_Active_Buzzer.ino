/* 

Ks0018 keyestudio Digital Buzzer Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|_________________________________|


SPECIFICATIONS:

digital buzzer based on high/low input

src: https://wiki.keyestudio.com/Ks0018_keyestudio_Digital_Buzzer_Module
*/

#include <math.h>
#define buzzer D0  

 void setup()  
 {        
  pinMode(buzzer, OUTPUT);     
}
 void loop()                     
{
  for(int i = 0; i < 10; i++)
    {
      digitalWrite(buzzer, HIGH);
      delay(1);
      digitalWrite(buzzer, LOW); 
      delay(1);
    }
}
