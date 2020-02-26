/* 

KS0016 keyesstudio Piranha LED Light Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|_________________________________|


SPECIFICATIONS:

module emits one color 
must be places on a PWM pin (D0, D1, D2, D3, D4, A4, A5, WKP, RX, TX)

src: https://wiki.keyestudio.com/Ks0016_keyestudio_Piranha_LED_Light_Module
*/

#include <math.h>
#define led D0  
void setup()
{
  pinMode(led, OUTPUT);     //Set Pin3 as output
}
void loop()
{         
          digitalWrite(led, HIGH);   //Turn off led
          delay(2000);
          digitalWrite(led, LOW);    //Turn on led
          delay(2000);
}
