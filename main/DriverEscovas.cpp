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
  
}

void DriverEscovas:: ligaMotores(int motores[2]){
  
}

void DriverEscovas:: desligaMotores(int motores[2]){
  
}
