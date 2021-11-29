/* ***************************************************************** */
/* File name:        Encoder.ccp                                     */
/* File description: This file contains the functions/methods for    */
/*                   initializing and using the encoder              */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */
#include "Encoder.h"

/* ***************************************************************** */
/* Method name:        Encoder                                       */
/* Method description: Declaring a Encoder class and initializing it */
/* Input params: pino1                                               */
/* Output params: n/a                                                */
/* ***************************************************************** */
Encoder:: Encoder(byte pino1) {
  this->pino1 = pino1;

  void initEncoder();
}

/* ***************************************************************** */
/* Method name:        initEncoder                                   */
/* Method description: Iniializing the encoder                       */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void Encoder:: initEncoder(){
  pinMode(pino1, INPUT_PULLUP); /* defining selected pin as a PULLUP input */
}

/* ***************************************************************** */
/* Method name:        getVeocity                                    */
/* Method description: Get current robot velocity                    */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
float Encoder:: getVelocity(){
  int pulse = digitalRead(pino1); /* get the velocity value from the selected pin */
  return pulse;
}

/* ***************************************************************** */
/* Method name:        isMoving                                      */
/* Method description: return true if motor is moving                */
/* Input params: m/a                                                 */
/* Output params: true or false                                      */
/* ***************************************************************** */
boolean Encoder:: isMoving(){
  boolean isMoving = false;
  
  int counter = 0;
  int pulses = 0;
  
  int prevPulse = digitalRead(pino1); /* get pulse value from pino1 */
  int pulse = digitalRead(pino1); /* get another pulse value from pino1 */
  
  while (!isMoving){
    pulse = digitalRead(pino1); /* get pulse value from pino1 */
    delay(10); /* delay 10 miliseconds */
    if(prevPulse != pulse){ /* check previous pulse with actual pulse */
      delay(10);
      pulses++; /* if they are different add to pulses*/
    }else{
      counter++; /*if they are equal add to counter */
    }
    
    prevPulse = pulse;
    if(pulses > 3){ /* check if number of counted pulses is greater than 3 */
      delay(10);
      isMoving = true; /*if its true then our robot is moving */
      
    }
    if(counter > 200){ /* check if number of counter is geater than 200 */
      break; /*the robot is not moving */
    }
  }
  
  return isMoving;
}
