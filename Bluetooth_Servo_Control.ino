//Imports
#include <Servo.h>

Servo Servo1;
Servo Servo2;

char Incoming_value = 0;

//Initialization
void setup() {
  Serial.begin(9600);   
  Servo1.attach(13);
  Servo2.attach(12);
  Servo1.write(60);
  Servo2.write(60);
}

void loop() {
  if(Serial.available() > 0)  
  {
    Incoming_value = Serial.read();      
    Serial.print(Incoming_value);        
    Serial.print("\n");        
    if(Incoming_value == '1') {
      Servo1.write(0);
      delay(200);
      Servo1.write(60);
    } else if(Incoming_value == '0') {
      Servo2.write(0);
      delay(200);
      Servo2.write(60);
    }
  }
}
