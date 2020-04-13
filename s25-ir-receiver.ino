// This #include statement was automatically added by the Particle IDE.
#include <IRremote.h>

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

module emits light on c1 when receiving an IR signal
works with ir remote such as this one:
https://abra-electronics.com/opto-illumination/led-strips/miscellaneous/led-strip-rc1-24-key-rgb-led-ir-remote-controller-with-mini-receiver-3528-5050-size-led-strips..html
decodes the values that are sent, the decoding of the signal depends on the capacity of the remote


src: https://wiki.keyestudio.com/Ks0027_keyestudio_Digital_IR_Transmitter_Module
     https://wiki.keyestudio.com/Ks0026_keyestudio_Digital_IR_Receiver_Module
*/

#include <IRremote.h>

//  int RECV_PIN = 11;
 #define RECV_PIN A1
 IRrecv irrecv(RECV_PIN);
 decode_results results;
 void setup()
{
  Serial.begin(9600);
  Wire.begin();
  irrecv.enableIRIn(); // Start the receiver
}
 void loop() {
  if (irrecv.decode(&results)) {
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay(500);
}