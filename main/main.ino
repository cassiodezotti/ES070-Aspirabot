
#include "DriverBuzzer.h"
#include "DriverEscovas.h"
#include "DriverHG7881.h"
#include "DriverLcd.h"
#include "DriverLocomocao.h"
#include "Encoder.h"
#include "SensorDistancia.h"


//Portas só para ilustrar, o planejamento das portas será feito depois
//byte pinosLcd[6] = {1,2,3,4,5,6};
SensorDistancia sensorDireita(2,3);
SensorDistancia sensorEsquerda(5,6);
SensorDistancia sensorFrente(8,9);
//DriverLocomocao motoresLocomocao(1,2,3,4);
//DriverEscovas motoresEscovas(1,2,3,4);
DriverBuzzer buzzer(1);
//DriverLcd lcd(pinosLcd);
//Bateria bateriaSistema(1,2);
int objetosDetectados = 0;
float distanciaMin = 0.0;
int aletaAtual = 0;
int modoOperacao; //Depois será testado com enum


void setup() {
  // put your setup code here, to run once:
  pinMode(13,INPUT_PULLUP);
  
  pinMode(2,INPUT);
  pinMode(3,OUTPUT);

  pinMode(5,INPUT);
  pinMode(6,OUTPUT);

  pinMode(8,INPUT);
  pinMode(9,OUTPUT);  
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(13) == HIGH){
    buzzer.tocarAlarme();
  }else{
    buzzer.pararAlarme();
  }
  
  float distancia1;
  float distancia2;
  float distancia3;
  
  distancia1 = sensorDireita.getDistance();
  Serial.print("Sensor Direita: ");
  Serial.println(distancia1);
  delay(300);

  distancia2 = sensorEsquerda.getDistance();
  Serial.print("Sensor Esquerda: ");
  Serial.println(distancia2);
  delay(300);
  
  distancia3 = sensorFrente.getDistance();
  Serial.print("Sensor Frente: ");
  Serial.println(distancia3);
  delay(300);
  
}

void iniciarPlaca() {
  
}

void modoAleatorio() {
  
}

void modoSeguidor() {
  
}

void modoAlerta( int tipoAlerta) {
  
}
