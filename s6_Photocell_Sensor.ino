/* 

KS0016 keyesstudio Piranha LED Light Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        A0         |
|_________________________________|


SPECIFICATIONS:

analog sensor
max value: 4096

https://learn.adafruit.com/photocells/measuring-light

src: https://wiki.keyestudio.com/Ks0016_keyestudio_Piranha_LED_Light_Module
*/

#define sensorPin A0 
int value = 0; 
void setup() 
{
 Serial.begin(9600); } 
void loop() 
{
 value = analogRead(sensorPin); 
 
  Serial.println(value, DEC); 
 
  delay(1000); 
}