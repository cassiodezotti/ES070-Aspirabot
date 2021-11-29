/* ***************************************************************** */
/* File name:        SensorDistancia.cpp                             */
/* File description: This file contains the functions/methods for    */
/*                   initializing and using the sensor for distance  */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */
#include "sensorDistancia.h"
#include<Arduino.h> 

/* ***************************************************************** */
/* Method name:        SensorDistancia                               */
/* Method description: Declaring a SensorDistancia class and         */
/*                     initializing it                               */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
SensorDistancia:: SensorDistancia(byte pino1, byte pino2) {
  this->pino1 = pino1;
  this->pino2 = pino2;

  void initSensor();
}

/* ***************************************************************** */
/* Method name:        initSensor                                    */
/* Method description: Initializing the sensor                       */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void SensorDistancia:: initSensor(){
  pinMode(pino1,INPUT);   /* Echo */
  pinMode(pino2,OUTPUT);  /* Trigger */

  digitalWrite(pino1,LOW); /* defining pino1 as LOW signal */
  digitalWrite(pino2,LOW); /* defining pino2 as LOW signal */
}

/* ***************************************************************** */
/* Method name:        checkDistance                                 */
/* Method description: Compare the distance to the sensor with the   */
/*                     value from input                              */
/* Input params: n/a                                                 */
/* Output params: true or false                                      */
/* ***************************************************************** */
boolean SensorDistancia:: checkDistance(float distancia){

	if (distancia < 5){
	return true;
	}else{
  return false;
	}
 
}

/* ***************************************************************** */
/* Method name:        getDistance                                   */
/* Method description: Get distance to the sensor                    */
/* Input params: m/a                                                 */
/* Output params: dist(float)                                        */
/* ***************************************************************** */
float SensorDistancia:: getDistance(){

  float tempo;

  digitalWrite(pino2,LOW); /* setting pino2 as LOW sginal */
  delayMicroseconds(5); /*delay 5 miliseconds */
  digitalWrite(pino2, HIGH); /* setting pino2 as HIGH signal */
  delayMicroseconds(10); /*delay 10 miliseconds */
  digitalWrite(pino2,LOW); /*setting pino2 as LOW signal */

  digitalWrite(pino1,LOW); /* setting pino1 as LOW signal */
  tempo = pulseIn(pino1,HIGH); /* get time that pino1 signal is HIGH (echo from ultrasound) */

  float dist;
  dist = 100*(tempo*0.00034029)/2; /*calculate distance using sound velocity in miliseconds */
                                   /* and multiply by 100 to get values in cm */
  
  return dist;
  
}
