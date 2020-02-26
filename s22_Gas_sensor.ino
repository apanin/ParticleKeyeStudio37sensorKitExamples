/* 

Ks0040 keyestudio Analog Gas Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   A0       ::        A0         |
|   D0       ::        null       |
|_________________________________|


SPECIFICATIONS:

analog sensor
can adjust sensitivity with screw
embedded led
must be calibrated to use
detects LPG, I-butane, propane, methane, alcohol, Hydrogen and smoke. (tested with co2 smoke)

src: https://wiki.keyestudio.com/Ks0040_keyestudio_Analog_Gas_Sensor
*/

#include <math.h>
#define gasSensor A0  
void setup()
{
  Serial.begin(9600);
  pinMode(gasSensor, INPUT);
}
void loop()
{
int val;
val=analogRead(gasSensor);//Read Gas value from analog 0
Serial.println(val,DEC);//Print the value to serial port
delay(500);
}