#include "DriverLocomocao.h"

DriverLocomocao:: DriverLocomocao(byte pino1, byte pino2, byte pino3, byte pino4) {
  this->pino1 = pino1;
  this->pino2 = pino2;
  this->pino3 = pino3;
  this->pino4 = pino4;

  void initLocomocao();
}


void DriverLocomocao:: initLocomocao(){
  
}

boolean DriverLocomocao:: moverFrente(){
  return false;
}

boolean DriverLocomocao:: moverTras(){
  return false;
}

boolean DriverLocomocao:: virarDireita(){
  return false;
}

boolean DriverLocomocao:: virarEsquerda(){
  return false;
}
