/* 

KS0035 Microphone Sound Sensor with Potentiometer
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

src: https://wiki.keyestudio.com/KS0035_Microphone_Sound_Sensor_with_Potentiometer
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
