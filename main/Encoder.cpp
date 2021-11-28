
#include "Encoder.h"

Encoder:: Encoder(byte pino1) {
  this->pino1 = pino1;

  void initEncoder();
}


void Encoder:: initEncoder(){
  pinMode(pino1, INPUT_PULLUP);
}

float Encoder:: getVelocity(){
  int pulse = digitalRead(pino1);
  return pulse;
}

boolean Encoder:: isMoving(){
  boolean isMoving = false;
  
  int counter = 0;
  int pulses = 0;
  
  int prevPulse = digitalRead(pino1);
  int pulse = digitalRead(pino1);
  
  while (!isMoving){
    pulse = digitalRead(pino1);
    delay(10);
    if(prevPulse != pulse){
      delay(10);
      pulses++;
    }else{
      counter++;
    }
    
    prevPulse = pulse;
    if(pulses > 3){
      delay(10);
      isMoving = true;
      
    }
    if(counter > 200){
      break;
    }
  }
  
  return isMoving;
}
