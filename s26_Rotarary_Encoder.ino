/* 

Ks0013 keyestudio Rotary Encoder Module
_________________________________
|  SETUP                          | 
|Sensor pin  ::    Particle pin   |
|   +        ::        3.3v       |
|   -        ::        GND        |
|   CLK      ::        A2         |
|   DT       ::        A3         |
|   SW       ::        A4         |
|_________________________________|


SPECIFICATIONS:

digital module / button (when pressed)
spins indefinetely
knows which oriented the encoder is being turned
works effectively when twisted one notch at the time
might get stuck in a positive state and continue incrementing


src: https://wiki.keyestudio.com/Ks0013_keyestudio_Rotary_Encoder_Module
*/
     
#define CLK A2
#define DAT A3
#define BUTTON  A4 //button
#define LED1 D5
#define LED2 D6

int COUNT = 0;

void setup() 
 {
  pinMode(CLK, INPUT); 
  digitalWrite(2, HIGH);  // Pull High Restance  
  pinMode(DAT, INPUT); 
  digitalWrite(3, HIGH);  // Pull High Restance 
 
pinMode(BUTTON, INPUT); 
  digitalWrite(4, HIGH);  // Pull High Restance
  pinMode(LED1, OUTPUT); 
  pinMode(LED2, OUTPUT); 
   Serial.begin(9600);
 }


void loop() 
{
  if  (!(digitalRead(BUTTON))) 
    {
     COUNT = 0;  
     Serial.println("STOP COUNT = 0");
     digitalWrite(LED1, LOW);
     digitalWrite(LED2, LOW);
     delay (2000);
    }
    if (!digitalRead(CLK)){
      RoteStateChanged();
    }
}

//-------------------------------------------
void RoteStateChanged() //When CLK  FALLING READ DAT
{
 if  (digitalRead(DAT)) // When DAT = HIGH IS FORWARD
   {
    COUNT++;
    digitalWrite(LED1, HIGH);
    digitalWrite(LED2, LOW);
    Serial.println(COUNT);  
    delay(20);
   }
 else                   // When DAT = LOW IS BackRote
   {
    COUNT--;
    digitalWrite(LED2, HIGH);
    digitalWrite(LED1, LOW);
    Serial.println(COUNT);  
    delay(20);
   }
   delay(100);
}
