/* 

_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        A0         |
|_________________________________|


SPECIFICATIONS:

module emits one color 
can be set on or off

*/


int led = A0; 
void setup()
{
  pinMode(led, OUTPUT);     //Set Pin7 as output
}
void loop()
{    digitalWrite(led, HIGH);   //Turn off led
          delay(1000);
          digitalWrite(led, LOW);    //Turn on led
          delay(1000);
}