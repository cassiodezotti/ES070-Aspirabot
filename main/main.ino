#include <LiquidCrystal_I2C.h>



#include "DriverBuzzer.h"
#include "DriverEscovas.h"
#include "DriverHG7881.h"
#include "DriverLcd.h"
#include "DriverLocomocao.h"
#include "Encoder.h"
#include "SensorDistancia.h"
#include "Bateria.h"
#define echoDireita A0
#define trigDireita A1
#define echoEsquerda A2
#define trigEsquerda A3
#define echoFrente A4
#define trigFrente A5
//Para os motores de locomoção GND 1
#define motorEsquerdaB1 8
#define motorEsquerdaB2 9
#define motorDireitaA1 10
#define motorDireitaA2 11
//Para os motores de escova GND esquerda 1; GND direita 2
#define escovaEsquerdaB1 4
#define escovaEsquerdaB2 5
#define escovaDireitaA1 6
#define escovaDireitaA2 7
#define encoderDireita 12
#define encoderEsquerda 13

#define buzzerPin 2
#define bateriaPin 0

#define chaveDeModo 1
#define aspirador 3

SensorDistancia sensorDireita(echoDireita,trigDireita);
SensorDistancia sensorEsquerda(echoEsquerda,trigEsquerda);
SensorDistancia sensorFrente(echoFrente,trigFrente);

DriverLocomocao motoresLocomocao(motorEsquerdaB1, motorEsquerdaB2, motorDireitaA1, motorDireitaA2);//cinza e verde nos menores 

DriverEscovas motoresEscovas(escovaEsquerdaB1, escovaEsquerdaB2, escovaDireitaA1, escovaDireitaA2);

Encoder encoderRodaDireita(encoderDireita);
Encoder encoderRodaEsquerda(encoderEsquerda);

DriverBuzzer buzzer(buzzerPin);

Bateria bateriaSistema(bateriaPin);

DriverLcd lcdScreen;



int modoOperacao = 0;
float distanciaE;
float distanciaD;
int paredeSeguida = -1;
float distanciaF;

float minDistFrente = 5;
float maxDistFrente = 15;
float minDistLados = 5;
float maxDistLados = 10;
int decisaoVirar = 0;
int loopCounter = 0;

void setup() {
  Serial.begin(9600);
  Serial.println("comecou");
  
  iniciarPlaca();

}

void loop() {

//acionar escovas nunto com aspirador

  if(loopCounter > 5){
      motoresLocomocao.parar();
      digitalWrite(aspirador,LOW);
      modoAlerta(1);
      buzzer.tocarAlarme();
      return;
    }else{
      digitalWrite(aspirador,HIGH);
      buzzer.pararAlarme();
    }
  //precisa verificar bateria

  modoOperacao = digitalRead(chaveDeModo);

  switch(modoOperacao){
    case 0:
    
      modoAleatorio();
      break;
    case 1:
      modoSeguidor();
      break;
    default:
      break;

  }
 
}


void iniciarPlaca() {
Serial.println("4");
 sensorDireita.initSensor();
 Serial.println("5");
 sensorEsquerda.initSensor();
 Serial.println("6");
 sensorFrente.initSensor();
Serial.println("7");
 motoresLocomocao.initLocomocao();//cinza e verde nos menores 
Serial.println("8");
 motoresEscovas.initEscovas();
Serial.println("9");
 encoderRodaDireita.initEncoder();
 Serial.println("10");
 encoderRodaEsquerda.initEncoder();
 Serial.println("11");

 buzzer.initBuzzer();
 Serial.println("12");

 bateriaSistema.initLeitorBateria();
Serial.println("13");
pinMode(chaveDeModo,INPUT_PULLUP);

  Serial.println("14");
  pinMode(aspirador, OUTPUT);
   digitalWrite(aspirador,LOW);

   //Não conseguimos utilizar o Lcd em conjunto com outros equipamentos
//   lcdScreen.initLcd();
  
  Serial.println("15");
}

  void modoAlerta( int tipoAlerta) {
    Serial.println("Alerta");
//  lcdScreen.escreveAlerta(tipoAlerta);
}   

void modoAleatorio() {
 Serial.print("Aleatorio");
//  lcdScreen.escreveModo(0);
  distanciaF = sensorFrente.getDistance();
  Serial.print("Sensor Frente: ");
  Serial.println(distanciaF);
  delay(300);

  if(loopCounter > 5){
    motoresLocomocao.parar();
    digitalWrite(aspirador,LOW);
    buzzer.tocarAlarme();
    modoAlerta(1);
    return;
  }
  //iniciou com objeto na frente
  if(distanciaF < minDistFrente){
    motoresLocomocao.moverTras();
    while(distanciaF < maxDistFrente){
      if(!encoderRodaDireita.isMoving() && !encoderRodaEsquerda.isMoving()){
        motoresLocomocao.parar();
        delay(50);
        motoresLocomocao.moverTras();
        delay(1000);
        loopCounter += 1;
        if(loopCounter > 5){
        motoresLocomocao.parar();
        digitalWrite(aspirador,LOW);
        buzzer.tocarAlarme();
        modoAlerta(1);
        return;
      }
      }
      distanciaF = sensorFrente.getDistance();
      delay(300);
    if(loopCounter > 5){
      motoresLocomocao.parar();
      digitalWrite(aspirador,LOW);
      modoAlerta(1);
      buzzer.tocarAlarme();
      return;
    }
    }

    //precisa verificar bateria e loop para entrar no estado de alerta

    //Decisao para virar
    decisaoVirar = random(1,3);
    Serial.println(decisaoVirar);
    switch(decisaoVirar){
      case 1:
          motoresLocomocao.parar();
          delay(100);
          motoresLocomocao.virarDireita();
          delay(1000);
          loopCounter += 1;
          break;
      case 2:
          motoresLocomocao.parar();
          delay(100);
          motoresLocomocao.virarEsquerda();
          delay(1000);
          loopCounter += 1;
          break;
      default:
          break;
    }
    motoresLocomocao.parar();
  }else {
    motoresLocomocao.moverFrente();
    loopCounter = 0;
  }
  
}





void modoSeguidor() {
  
  //  lcdScreen.escreveModo(1);
  Serial.print("Seguidor");
  distanciaD = sensorDireita.getDistance();
  delay(300);
   Serial.println(distanciaD);
  distanciaF = sensorFrente.getDistance();
  delay(300);
  Serial.println(distanciaF);
  distanciaE = sensorEsquerda.getDistance();
  delay(300);
   Serial.println(distanciaE);

  if(paredeSeguida < 0) {
    if (distanciaD < maxDistLados && distanciaD > minDistLados){
      Serial.println("Seguir parede direita");
      paredeSeguida = 1;
    }else if (distanciaE < maxDistLados && distanciaE > minDistLados) {
        Serial.println("Seguir parede esquerda");
        paredeSeguida = 2;
        //verifica bateria
  }
  }
  if(loopCounter > 5){
    motoresLocomocao.parar();
    digitalWrite(aspirador,LOW);
    modoAlerta(1);
    buzzer.tocarAlarme();
    return;
  }
  switch (paredeSeguida){
    case 1:
          if(distanciaD < maxDistLados && distanciaD > minDistLados && distanciaF > minDistFrente){
   
            motoresLocomocao.moverFrente();
            while(!encoderRodaEsquerda.isMoving() && !encoderRodaDireita.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(30);
            loopCounter = 0;
          }else if (distanciaD > maxDistLados  && distanciaF > maxDistFrente){
            
            motoresLocomocao.parar();
            delay(100);
            motoresLocomocao.virarDireita();
            while(!encoderRodaEsquerda.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(500);
            loopCounter += 1;
          }else if (distanciaD > maxDistLados  && distanciaF < minDistFrente){
   
            motoresLocomocao.parar();
            delay(100);
            motoresLocomocao.virarDireita();
            while(!encoderRodaEsquerda.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(500);
            loopCounter += 1;
          }else if (distanciaD < maxDistLados && distanciaD > minDistLados  && distanciaF < minDistFrente){

            motoresLocomocao.parar();
            delay(100);
            motoresLocomocao.virarEsquerda();
            while(!encoderRodaDireita.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(500);
            loopCounter += 1;
          }
          break;
    case 2:
          if(distanciaE < maxDistLados && distanciaE > minDistLados && distanciaF > minDistFrente){

            motoresLocomocao.moverFrente();
            while(!encoderRodaEsquerda.isMoving() && !encoderRodaDireita.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(100);
            loopCounter = 0;
          }else if (distanciaE > maxDistLados  && distanciaF > maxDistFrente){

            motoresLocomocao.parar();
            delay(100);
            motoresLocomocao.virarEsquerda();
            while(!encoderRodaDireita.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(500);
            loopCounter += 1;
          }else if (distanciaE > maxDistLados  && distanciaF < minDistFrente){

            motoresLocomocao.parar();
            delay(100);
            motoresLocomocao.virarEsquerda();
            while(!encoderRodaDireita.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(500);
            loopCounter += 1;
            
          }else if (distanciaE < maxDistLados && distanciaE > minDistLados  && distanciaF < minDistFrente){
  
            motoresLocomocao.parar();
            delay(100);
            loopCounter += 1;
            motoresLocomocao.virarDireita();
            while(!encoderRodaEsquerda.isMoving()){
              Serial.println("Esperando encoder");
            }
            delay(500);
            loopCounter += 1;
          }
          break;
    default:
          break;

  }
  }

  
