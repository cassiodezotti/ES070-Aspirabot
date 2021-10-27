#include "DriverLocomocao.h"

DriverLocomocao:: DriverLocomocao(byte pino1, byte pino2, byte pino3, byte pino4) {
  this->pino1 = pino1;
  this->pino2 = pino2;
  this->pino3 = pino3;
  this->pino4 = pino4;

  void initLocomocao();
}


void DriverLocomocao:: initLocomocao(){
  pinMode(pino1, OUTPUT);
  pinMode(pino2, OUTPUT);
  pinMode(pino3, OUTPUT);
  pinMode(pino4, OUTPUT);

  digitalWrite(pino1, LOW);
  digitalWrite(pino2, LOW);
  digitalWrite(pino3, LOW);
  digitalWrite(pino4, LOW);
}

boolean DriverLocomocao:: moverFrente(){
  //toda velocidade
  analogWrite(pino1, 255);
  analogWrite(pino2, 0);
  analogWrite(pino3, 255);
  analogWrite(pino4, 0);
  //falta a parte do encoder
  return false;
}

boolean DriverLocomocao:: moverTras(){
  analogWrite(pino1, 0);
  analogWrite(pino2, 255);
  analogWrite(pino3, 0);
  analogWrite(pino4, 255);
  
  return false;
}

void DriverLocomocao:: parar(){
  analogWrite(pino1, 0);
  analogWrite(pino2, 0);
  analogWrite(pino3, 0);
  analogWrite(pino4, 0);
  
}

boolean DriverLocomocao:: virarDireita(){
  return false;
}

boolean DriverLocomocao:: virarEsquerda(){
  return false;
}
