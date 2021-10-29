#include "DriverEscovas.h"

DriverEscovas:: DriverEscovas(byte pino1, byte pino2, byte pino3, byte pino4) {
  this->pino1 = pino1;
  this->pino2 = pino2;
  this->pino3 = pino3;
  this->pino4 = pino4;

  void initEscovas();
}


void DriverEscovas:: initEscovas(){
  pinMode(pino1, OUTPUT);
  pinMode(pino2, OUTPUT);
  pinMode(pino3, OUTPUT);
  pinMode(pino4, OUTPUT);

  digitalWrite(pino1, LOW);
  digitalWrite(pino2, LOW);
  digitalWrite(pino3, LOW);
  digitalWrite(pino4, LOW);
  
}

void DriverEscovas:: ligaMotores(){
  analogWrite(pino1, 255);
  analogWrite(pino2, 0);
  analogWrite(pino3, 255);
  analogWrite(pino4, 0);
}

void DriverEscovas:: desligaMotores(){
  analogWrite(pino1, 0);
  analogWrite(pino2, 0);
  analogWrite(pino3, 0);
  analogWrite(pino4, 0);
}
