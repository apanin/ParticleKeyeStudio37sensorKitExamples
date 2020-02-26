/* 

Ks0037 keyestudio Vibration Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   led      ::        D4         |
|   gnd      ::        GND        |
|_________________________________|


SPECIFICATIONS:

digital sensor
detects impacts/mouvement on surface

src: https://wiki.keyestudio.com/Ks0037_keyestudio_Vibration_Sensor
*/

#define ledPin     D4
#define vibrationSensor D0  //Connect the sensor to digital Pin 3 which is Interrupts 1.
unsigned char state = 0;
 void setup() 
{ 
  pinMode(ledPin, OUTPUT); 
  pinMode(vibrationSensor, INPUT);
  }
void loop()
{ 
  state = digitalRead(vibrationSensor);
  digitalWrite(ledPin, state);
  delay(100);
}