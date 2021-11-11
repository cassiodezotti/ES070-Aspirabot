#include "DriverBuzzer.h"

DriverBuzzer:: DriverBuzzer(byte pino) {
  this->pino = pino;

  void initBuzzer();
}


void DriverBuzzer:: initBuzzer(){
  pinMode(pino, INPUT_PULLUP);
  
}

void DriverBuzzer:: tocarAlarme(){
  tone(pino, 1000);
  delay(1000);
  tone(pino,3000);
  delay(1000);
}

void DriverBuzzer:: pararAlarme(){
  noTone(pino);
}
