/* ***************************************************************** */
/* File name:        Bateria.cpp                                     */
/* File description: This file contains the functions/methods for    */
/*                   initializing and using the battery              */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */
#include "Bateria.h"

/* ***************************************************************** */
/* Method name:        Bateria                                       */
/* Method description: Declaring a Bateria class and initializing it */
/* Input params: pino                                                */
/* Output params: n/a                                                */
/* ***************************************************************** */
Bateria:: Bateria(byte pino) {
  this->pino = pino;

//  void initLeitorBateria();
}

/* ***************************************************************** */
/* Method name:        initLeitorBateria                             */
/* Method description: initializing battery sensor                   */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void Bateria:: initLeitorBateria(){
  pinMode(pino, INPUT); /*settng desired pin to be our level reader*/
}

/* ***************************************************************** */
/* Method name:        getNivelBateria                               */
/* Method description: Get the current battery level                 */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
int Bateria:: getNivelBateria() {
  int sensorBateria = analogRead(pino); /*Setting the analog read as the variable sensorBateria*/
  float fnivelBateria = (sensorBateria*100/1023.0); /*Convert the value to a percentage value (max value from analog pin is 1023)*/
  int inivelBateria = (int) fnivelBateria; /*Convert variable type, from float to int*/
  
  return inivelBateria;
}

/* ***************************************************************** */
/* Method name:        checkAlertaBateria                            */
/* Method description: Check battery level alert                     */
/* Input params: n/a                                                 */
/* Output params: true or false                                      */
/* ***************************************************************** */
boolean Bateria:: checkAlertaBateria() {
  if (getNivelBateria() <= 20){ /*using function getNivelBateria to get our battery level, and if its under 20% will give us an alert*/
  return true;
  }else{
  return false;
  }
}
