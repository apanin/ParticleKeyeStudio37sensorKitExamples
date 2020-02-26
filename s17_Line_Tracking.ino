/* 

Ks0050 keyestudio Line Tracking Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|_________________________________|


SPECIFICATIONS:

digital sensor
sensor differenciates black from white
analog signal
lines must be thick
effective distance: 1-5cm

src: https://wiki.keyestudio.com/Ks0050_keyestudio_Line_Tracking_Sensor
*/

#define SensorPin A0
int state = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(SensorPin, OUTPUT);
}
//value is low if black line is detected
void loop()
{
  if (analogRead(SensorPin) > 1000){
    state = 0;
  }
  else state = 1;
  Serial.println(state);
  delay(500);
}


