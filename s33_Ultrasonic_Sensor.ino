/* 

Ks0206 Keyestudio SR01 Ultrasonic Sensor
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   ECHO     ::        D0         |
|   TRIG     ::        D1         |
|   -        ::        GND        |
|_________________________________|


SPECIFICATIONS:

digital sensor
detects distance through echolation
uses a trigger pin that sends a sound wave and a receiver to detect objects proximity
value in cm

max Range 5m
min Range 2cm

src: https://wiki.keyestudio.com/Ks0206_Keyestudio_SR01_Ultrasonic_Sensor
*/

#define echoPin D0 // Echo Pin
#define trigPin D1 // Trigger Pin
#define LEDPin D6 // Onboard LED

#define maximumRange 200
#define minimumRange 0
long duration, distance; // Duration used to calculate distance (time measure)

void setup() {
 Serial.begin (9600);
 pinMode(trigPin, OUTPUT);
 pinMode(echoPin, INPUT);
 pinMode(LEDPin, OUTPUT); // Use LED indicator (if required)
}

void loop() {
/* The following trigPin/echoPin cycle is used to determine the
 distance of the nearest object by bouncing soundwaves off of it. */ 
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 

 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 digitalWrite(trigPin, LOW);

 duration = pulseIn(echoPin, HIGH);
 
 //Calculate the distance (in cm) based on the speed of sound.
 distance = duration/58.2;
 
 if (distance >= maximumRange || distance <= minimumRange){
 /* Send a negative number to computer and Turn LED ON 
 to indicate "out of range" */
 Serial.println("-1");
 digitalWrite(LEDPin, HIGH); 
 }
 else {
 /* Send the distance to the computer using Serial protocol, and
 turn LED OFF to indicate successful reading. */
 Serial.println(distance);
 digitalWrite(LEDPin, LOW); 
 }
 
 //Delay 50ms before next reading.
 delay(50);
}