/* 

Ks0024 keyestudio Knock Sensor Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   led      ::        D4         |
|   -        ::        GND        |
|_________________________________|


SPECIFICATIONS:

digital button
not very sensitive
reactive to the mouvement of the spring

src: https://wiki.keyestudio.com/Ks0024_keyestudio_Knock_Sensor_Module
*/

#define Led D4
#define Shock D0//define knock sensor interface
int val;//define digital variable val
void setup()
{
pinMode(Led,OUTPUT);//define LED to be output interface
pinMode(Shock,INPUT);//define knock sensor to be output interface
}
void loop()
Seiral./
{
val=digitalRead(Shock);//read the value of interface3 and evaluate it to val
if(val==HIGH)//when the knock sensor detect a signal, LED will be flashing
{
digitalWrite(Led,LOW);
}
else
{
digitalWrite(Led,HIGH);
}
}