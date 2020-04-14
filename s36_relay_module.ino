  
/* 
Ks0011 keyestudio 5V Relay Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   R        ::        D1         |
|_________________________________|

SPECIFICATIONS:
5v relay


src: https://wiki.keyestudio.com/Ks0011_keyestudio_5V_Relay_Module
*/


#define Relay D0
  void setup()
{
  pinMode(A1, OUTPUT);        
  digitalWrite(D1, HIGH);     
  pinMode(Relay, OUTPUT);     
}
void loop()
{
          digitalWrite(Relay, HIGH);   //Turn off relay
          delay(2000);
          digitalWrite(Relay, LOW);    //Turn on relay
          delay(2000);
}
