/* 

Ks0020 keyestudio Hall Magnetic Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   S        ::        D0         |
|   led      ::        D4         |
|   -        ::        GND        |
|_________________________________|


SPECIFICATIONS:

magnetic digital button
embedded LED
Senses magnetic materials
detects withing a range of 3cm (depending on the strength of the magnet)

src: https://wiki.keyestudio.com/Ks0020_keyestudio_Hall_Magnetic_Sensor
*/

#define ledPin D4
#define inputPin D0
int val = 0;

void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare push button as input
}
 
void loop(){
  val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH); // turn LED ON
  }
}
