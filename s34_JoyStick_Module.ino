/* 

Ks0008 keyestudio Joystick Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   B        ::        D0         |
|   X        ::        A0         |
|   Y        ::        A1         |
|_________________________________|


SPECIFICATIONS:

digital button + xy analog map
maps x and on from 0 to 4095
src: https://wiki.keyestudio.com/Ks0008_keyestudio_Joystick_Module
*/

#define JoyStick_X A0 //x
#define JoyStick_Y A1 //y
#define JoyStick_Z D0 //key

  void setup() 
{
  pinMode(JoyStick_Z, INPUT); 
  Serial.begin(9600); // 9600 bps
}

void loop() 
{
  int x,y,z;
  x=analogRead(JoyStick_X);
  y=analogRead(JoyStick_Y);
  z=digitalRead(JoyStick_Z);
  Serial.print(x ,DEC);
  Serial.print(",");
  Serial.print(y ,DEC);
  Serial.print(",");
  Serial.println(z ,DEC);
  delay(100);
}