/* 

Ks0051 keyestudio Infrared Obstacle Avoidance Sensor

_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   EN       ::        null       |
|   led      ::        D4         |
|   gnd      ::        gnd        |
|_________________________________|


SPECIFICATIONS:

internal led
digital button
leave fourth pin vacant
detection distance: 2-40cm (can ajust distance of detection through the nob)
effective angle: 35 degrees

src: https://wiki.keyestudio.com/Ks0051_keyestudio_Infrared_Obstacle_Avoidance_Sensor
*/

#define sensorPin D0
#define ledPin D4
int sensorState = 0;

void setup() {
  pinMode(ledPin, OUTPUT);      
  pinMode(sensorPin, INPUT); }
void loop(){
  // read the state of the sensor value:
  sensorState = digitalRead(sensorPin);
  // if it is, the sensorState is HIGH:
  if (sensorState == HIGH) {     
     digitalWrite(ledPin, LOW);  
  } 
  else {
       digitalWrite(ledPin, HIGH); 
  }
}