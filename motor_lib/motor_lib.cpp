#include "motor_lib.h"



int typeInput; 

void switchMotor(byte in1A, byte in2A, byte inPwm, byte in1B, byte in2B, int ms) { 
  Serial.begin(9600); 
  while (Serial.available()) {
    typeInput = Serial.parseInt(); 
    //move cw
    if (typeInput == 1) {
        Serial.println("Motor is spinning clockwise..");

        digitalWrite(in1A, HIGH);
        digitalWrite(in2A, LOW);

        digitalWrite(in1B, HIGH);
        digitalWrite(in2B, LOW); 
    }
    
    //move ccw
    else if (typeInput == 2) {
        Serial.println("Motor is spinning counterclockwise..");

        digitalWrite(in1A, LOW);
        digitalWrite(in2A, HIGH);

        digitalWrite(in1B, LOW);
        digitalWrite(in2B, HIGH);
    }
    //off
    else if (typeInput == 3) {
        Serial.println("Motor is off..");

        digitalWrite(in1A, LOW);
        digitalWrite(in2A, LOW);

        digitalWrite(in1B, LOW);
        digitalWrite(in2B, LOW);

        analogWrite(inPwm, 0);
    }
    analogWrite(inPwm, ms);
  }
}

