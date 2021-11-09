
#include "DriverBuzzer.h"
#include "DriverEscovas.h"
#include "DriverHG7881.h"
#include "DriverLcd.h"
#include "DriverLocomocao.h"
#include "Encoder.h"
#include "SensorDistancia.h"


//Portas só para ilustrar, o planejamento das portas será feito depois
byte pinosLcd[6] = {1,2,3,4,5,6};
SensorDistancia sensorEsquerda(1,1);
SensorDistancia sensorFrontal(1,1);
SensorDistancia sensorDireito(1,1);
DriverLocomocao motoresLocomocao(1,2,3,4);
DriverEscovas motoresEscovas(1,2,3,4);
DriverBuzzer buzzer(1);
DriverLcd lcd;
//Bateria bateriaSistema(1,2);
int objetosDetectados = 0;
float distanciaMin = 0.0;
int alertaAtual = 0;
int modoOperacao; //Depois será testado com enum


void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}

void iniciarPlaca() {
  
}

void modoAleatorio() {
  
}

void modoSeguidor() {
  
}

void modoAlerta( int tipoAlerta) {
  
}
