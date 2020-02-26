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

analog Output
Detects "loudness"

src: hhttps://wiki.keyestudio.com/Ks0068_keyestudio_37_in_1_Sensor_Kit_for_Arduino_Starters#Project_7:_Analog_Sound
*/

int sensorPin =A0 ;  // define analog port A0
int value = 0;    //set value to 0
void setup() 
{
 Serial.begin(9600); //set the baud rate to 9600
 pinMode(sensorPin, INPUT);
}  
void loop() 
{
value = analogRead(sensorPin);  //set the value as the value read from A0
Serial.println(value, DEC);  //print the value and line wrap
delay(200);  //delay 0.2S
} 
