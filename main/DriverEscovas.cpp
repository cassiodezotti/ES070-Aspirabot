/* ***************************************************************** */
/* File name:        DriverEscovas.ccp                               */
/* File description: This file contains the functions/methods for    */
/*                   initializing and using the driver for brushes   */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */
#include "DriverEscovas.h"

/* ***************************************************************** */
/* Method name:        DriverEscovas                                 */
/* Method description: Declaring a DriverEscovas class and           */
/*                     initializing it                               */
/* Input params: pino1, pino2, pino3, pino4                          */
/* Output params: n/a                                                */
/* ***************************************************************** */
DriverEscovas:: DriverEscovas(byte pino1, byte pino2, byte pino3, byte pino4) {
  this->pino1 = pino1;
  this->pino2 = pino2;
  this->pino3 = pino3;
  this->pino4 = pino4;

//  void initEscovas();
}

/* ***************************************************************** */
/* Method name:        initEscovas                                   */
/* Method description: initiliazing brushes                          */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverEscovas:: initEscovas(){
  pinMode(pino1, OUTPUT); /*Setting pino1 as an Output */
  pinMode(pino2, OUTPUT); /*Setting pino2 as an Output */
  pinMode(pino3, OUTPUT); /*Setting pino3 as an Output */
  pinMode(pino4, OUTPUT); /*Setting pino4 as an Output */

  digitalWrite(pino1, LOW); /*Setting pino1 as LOW signal */
  digitalWrite(pino2, LOW); /*Setting pino2 as LOW signal */
  digitalWrite(pino3, LOW); /*Setting pino3 as LOW signal */
  digitalWrite(pino4, LOW); /*Setting pino4 as LOW signal */
  
}

/* ***************************************************************** */
/* Method name:        ligaMotores                                   */
/* Method description: Turn on motors                                */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverEscovas:: ligaMotores(){
  analogWrite(pino1, 0); /*Setting pino 1 as 0 on a analog level */
  analogWrite(pino2, 210); /*Setting pino 2 as 210 on a analog level */
  analogWrite(pino3, 210); /*Setting pino 3 as 210 on a analog level */
  analogWrite(pino4, 0); /*Setting pino 4 as 0 on a analog level */
}

/* ***************************************************************** */
/* Method name:        desligaMotores                                */
/* Method description: Turn off motors                               */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverEscovas:: desligaMotores(){
  digitalWrite(pino1, LOW); /*Setting pino1 as LOW signal */
  digitalWrite(pino2, LOW); /*Setting pino2 as LOW signal */
  digitalWrite(pino3, LOW); /*Setting pino3 as LOW signal */
  digitalWrite(pino4, LOW); /*Setting pino4 as LOW signal */
}
