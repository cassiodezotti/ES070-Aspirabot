#include "sensorDistancia.h"
#include "Bateria.h"
#include "DriverBuzzer.h"
#include "DriverEscovas.h"
#include "DriverHG7881.h"
#include "DriverLcd.h"
#include "DriverLocomocao.h"
#include "Encoder.h"

SensorDistancia sensorDireita(2,3);
SensorDistancia sensorEsquerda(5,6);
SensorDistancia sensorFrente(8,9);

DriverLocomocao motoresLocomocao(5, 6, 10, 11);
DriverEscovas motoresEscovas(3, 4, 8, 9);
Encoder encoderRodaDireita(12);
Encoder encoderRodaEsquerda(13);

Bateria bateria(A0);

DriverLcd lcd;

int objetosDetectados = 0;
float distanciaMin = 0.0;
int aletaAtual = 0;
int modoOperacao; //Depois será testado com enum
unsigned long start_time = 0;
unsigned long end_time = 0;
int steps = 0;
float steps_old = 0;
float temp = 0;
float rps = 0;

int incomingByte = 0;
int  input = 0;

void setup() {
  
  Serial.begin(9600);

  pinMode(2,INPUT);
  pinMode(3,OUTPUT);

  pinMode(5,INPUT);
  pinMode(6,OUTPUT);

  pinMode(8,INPUT);
  pinMode(9,OUTPUT);

  pinMode(7,INPUT_PULLUP);
  lcd.initLcd();

}

void loop() {

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
