/* ***************************************************************** */
/* File name:        DriverBuuzer.ccp                                */
/* File description: This file contains the functions/methods for    */
/*                   initializing and using the Buzzer               */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */
#include "DriverBuzzer.h"

/* ***************************************************************** */
/* Method name:        DriverBuzzer                                  */
/* Method description: Declaring a DriverBuzzer class and            */
/*                     initializing it                               */
/* Input params: pino                                                */
/* Output params: n/a                                                */
/* ***************************************************************** */
DriverBuzzer:: DriverBuzzer(byte pino) {
  this->pino = pino;

  void initBuzzer();
}

/* ***************************************************************** */
/* Method name:        initBuzzer                                    */
/* Method description: Initializing the Buzzer and setting is pin    */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverBuzzer:: initBuzzer(){
  pinMode(pino, INPUT_PULLUP); /*Defining select pin as a PULLUP Input */

}

/* ***************************************************************** */
/* Method name:        tocarAlarme                                   */
/* Method description: Start playing our Buzzer                      */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverBuzzer:: tocarAlarme(){
  tone(pino, 1000); /*Setting our alarm tone */
  delay(1000); /*Delaying the alarm for 1000ms */
  tone(pino,3000); /*Setting a different tone from before */
  delay(1000); /*Delaying the alarm for 1000ms */
}

/* ***************************************************************** */
/* Method name:        pararAlarme                                   */
/* Method description: Stop playing our Buzzer                       */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverBuzzer:: pararAlarme(){
  noTone(pino); /*Setting no tone to Buzzer so it won't play anymore */
}
