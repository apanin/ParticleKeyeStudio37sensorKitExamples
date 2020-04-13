/* 

Ks0014 keyestudio Analog Rotation Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        A0         |
|_________________________________|


SPECIFICATIONS:

Analog
voltage subdivided by 4096

src: https://wiki.keyestudio.com/Ks0014_keyestudio_Analog_Rotation_Sensor
*/

#define sensorPin A0

void setup()
{
  pinMode(sensorPin, INPUT);
  Serial.begin(9600); //Set serial baud rate to 9600 bps
}
void loop()
{
int val;
val=analogRead(sensorPin);//Read rotation sensor value from analog 0
Serial.println(val,DEC);//Print the value to serial port
delay(100);
}
