/* 

Ks0041 keyestudio Analog Alcohol Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   D0       ::        null       |
|   A0       ::        A0         |
|_________________________________|


SPECIFICATIONS:

analog sensor
embedded led
screw adjustable sensitivy
breath analyzer
accuracy to be detenubed

src: https://wiki.keyestudio.com/Ks0041_keyestudio_Analog_Alcohol_Sensor
*/

#include <math.h>
#define sensorPin A0
void setup()
{
  Serial.begin(9600); //Set serial baud rate to 9600 bps
}
void loop()
{
Serial.println(analogRead(sensorPin),DEC);//Print the value to serial port
delay(500);
}