#include "sensorDistancia.h"
#include<Arduino.h> 

SensorDistancia:: SensorDistancia(byte pino1, byte pino2) {
  this->pino1 = pino1;
  this->pino2 = pino2;

  void initSensor();
}


void SensorDistancia:: initSensor(){
  pinMode(pino1,INPUT);   // Echo
  pinMode(pino2,OUTPUT);  // Trigger

  digitalWrite(pino1,LOW);
  digitalWrite(pino2,LOW);
}

boolean SensorDistancia:: checkDistance(float distancia){

	if (distancia < 5){
	return true;
	}else{
  return false;
	}
 
}

float SensorDistancia:: getDistance(){

  float tempo;

  digitalWrite(pino2,LOW);
  delayMicroseconds(5);
  digitalWrite(pino2, HIGH);
  delayMicroseconds(10);
  digitalWrite(pino2,LOW);

  digitalWrite(pino1,LOW);
  tempo = pulseIn(pino1,HIGH);

  float dist;
  dist = 100*(tempo*0.00034029)/2;
  
  return dist;
  
}
