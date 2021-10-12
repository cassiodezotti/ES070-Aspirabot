#include "DriverBuzzer.h"

DriverBuzzer:: DriverBuzzer(byte pino) {
  this->pino = pino;

  void initBuzzer();
}


void DriverBuzzer:: initBuzzer(){
  pinMode(pino, OUTPUT);
  
}

void DriverBuzzer:: tocarAlarme(){
  tone(pino, 1000);
}

void DriverBuzzer:: pararAlarme(){
  noTone(pino);
}
