#include "SensorDistancia.h"

SensorDistancia:: SensorDistancia(byte pino1, byte pino2) {
  this->pino1 = pino1;
  this->pino2 = pino2;

  void initSensor();
}


void SensorDistancia:: initSensor(){
  Ultrasonic ultrasonic1(pino1, pino2);  
}

boolean SensorDistancia:: checkDistance(float distancia){
  return false;
}

float SensorDistancia:: getDistance(){
  return 0.0;
}
