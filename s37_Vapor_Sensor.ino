/* 

Ks0203 keyestudio Vapor Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        A0         |
|_________________________________|


SPECIFICATIONS:

analog sensor
detects vapor/humidity/moisture
works between ranges: －10℃～＋70℃
src: https://wiki.keyestudio.com/Ks0203_keyestudio_Vapor_Sensor
*/

#include <math.h>
#define sensorPin A0

void setup()
{
Serial.begin(9600); //open serial port, and set baud rate at 9600bps
pinMode(sensorPin, OUTPUT);
}
void loop()
{
int val;
val=analogRead(sensorPin); //plug vapor sensor into analog port 0
Serial.print("Moisture is ");
Serial.println(val,DEC); //read analog value through serial port printed
delay(100);
}