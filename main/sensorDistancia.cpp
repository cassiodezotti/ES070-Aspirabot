#include "Ultrasonic.h"
#include "sensorDistancia.h"
#include<Arduino.h> 

SensorDistancia:: SensorDistancia(byte pino1, byte pino2) {
  this->pino1 = pino1;
  this->pino2 = pino2;

  void initSensor();
}


void SensorDistancia:: initSensor(){
  Ultrasonic ultrasonic(pino1,pino2);
}

boolean SensorDistancia:: checkDistance(float distancia){

	if (distancia < 5){
	return true;
	}else{
  return false;
	}
 
}

float SensorDistancia:: getDistance(){
	float distancia;

  distancia = ultrasonic.read(CM);
  
  return distancia;
}
