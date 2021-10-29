
#include "DriverBuzzer.h"
#include "DriverEscovas.h"
#include "DriverHG7881.h"
#include "DriverLcd.h"
#include "DriverLocomocao.h"
#include "Encoder.h"
#include "SensorDistancia.h"


//Portas só para ilustrar, o planejamento das portas será feito depois
//byte pinosLcd[6] = {1,2,3,4,5,6};
//SensorDistancia sensorEsquerda(1,1);
//SensorDistancia sensorFrontal(1,1);
//SensorDistancia sensorDireito(1,1);
DriverLocomocao motoresLocomocao(5,6,10,11);
DriverEscovas motoresEscovas(4,3,8,9);
//DriverBuzzer buzzer(1);
//DriverLcd lcd(pinosLcd);
//Bateria bateriaSistema(1,2);
int objetosDetectados = 0;
float distanciaMin = 0.0;
int aletaAtual = 0;
int modoOperacao; //Depois será testado com enum


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(motoresLocomocao.moverFrente());
  delay(1000);
  motoresLocomocao.parar();
  delay(1000);
  motoresLocomocao.moverTras();
  delay(1000);
  motoresLocomocao.parar();
  delay(1000);
//  motoresEscovas.ligaMotores();
//  delay(2000);
//  motoresEscovas.desligaMotores();
//  delay(1000);
}

void iniciarPlaca() {
  
}

void modoAleatorio() {
  
}

void modoSeguidor() {
  
}

void modoAlerta( int tipoAlerta) {
  
}
