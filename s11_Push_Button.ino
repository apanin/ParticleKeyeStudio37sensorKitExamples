/* 

Ks0029 keyestudio Digital Push Button
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

Basic push button led example
when button is pushed, current goes through

src: https://wiki.keyestudio.com/Ks0029_keyestudio_Digital_Push_Button
*/



#define ledPin D4                // choose the pin for the LED (can be any)
#define inputPin D0               // Connect sensor to input pin 3 
void setup() {
  pinMode(ledPin, OUTPUT);      // declare LED as output
  pinMode(inputPin, INPUT);     // declare pushbutton as input
}
void loop(){
  int val = digitalRead(inputPin);  // read input value
  if (val == HIGH) {            // check if the input is HIGH
    digitalWrite(ledPin, LOW);  // turn LED OFF
  } else {
    digitalWrite(ledPin, HIGH); // turn LED ON
  }
}