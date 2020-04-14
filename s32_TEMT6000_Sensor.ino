/* 

Ks0098 keyestudio TEMT6000 Ambient Light Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        A0         |
|_________________________________|


SPECIFICATIONS:

Analog Sensor
measures ambiant lighting
detects variations better in bright lighting

src: https://wiki.keyestudio.com/Ks0098_keyestudio_TEMT6000_Ambient_Light_Sensor
*/


#define temt6000Pin A0

void setup() {
 Serial.begin(9600);
}
void loop() {
 int value = analogRead(temt6000Pin);
 Serial.println(value);
 delay(100); //only here to slow down the output so it is easier to read
}