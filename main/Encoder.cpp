#include "Encoder.h"

Encoder:: Encoder(byte pino1, byte pino2) {
  this->pino1 = pino1;
  this->pino2 = pino2;

  void initEncoder();
}


void Encoder:: initEncoder(){
  
}

float Encoder:: getVelocity(){
  return 0.0;
}
