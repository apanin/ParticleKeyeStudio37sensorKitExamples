/* 

Ks0027 keyestudio Digital IR Transmitter Module
Ks0026 keyestudio Digital IR Receiver Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|_________________________________|


SPECIFICATIONS:

module emits one color 
must be places on a PWM pin (D0, D1, D2, D3, D4, A4, A5, WKP, RX, TX)

src: https://wiki.keyestudio.com/Ks0027_keyestudio_Digital_IR_Transmitter_Module
     https://wiki.keyestudio.com/Ks0026_keyestudio_Digital_IR_Receiver_Module
*/

#define led A0
/
void setup() {                
   pinMode(led, OUTPUT);     
}
void loop() {
  digitalWrite(led, HIGH);  
  delay(1000);               
  digitalWrite(led, LOW);   
  delay(1000); 
}