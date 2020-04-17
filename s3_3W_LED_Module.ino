/* 

Ks0010 keyestudio 3W LED Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|_________________________________|


SPECIFICATIONS:

bright light 
intensity can fluctuate on a PWM pin (D0, D1, D2, D3, D4, A4, A5, WKP, RX, TX)

src: https://wiki.keyestudio.com/Ks0010_keyestudio_3W_LED_Module
*/
#include <math.h>
#define led D0  
float x;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(led, OUTPUT);
  Serial.begin(9600);
  x = 0;
}

// the loop function runs over and over again forever
//fade in fade out effect
void loop() {
  analogWrite(led, fabs(255*sin(x)));  
  delay(50);             
  x += M_PI / 100;
}
