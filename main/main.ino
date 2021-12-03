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
#define motorDireitaA1 8
#define motorDireitaA2 9
//Para os motores de escova GND esquerda 1; GND direita 2
#define escovaEsquerdaB1 4
#define escovaEsquerdaB2 5
#define escovaDireitaA1 6
#define escovaDireitaA2 7
#define encoderDireita 12
#define encoderEsquerda 13
#define buzzerPin 3
#define bateriaPin 2

#define chaveDeModo 2
#define aspirador 1

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



int objetosDetectados = 0;
float distanciaMin = 0.0;
int alertaAtual = 0;
int modoOperacao = 0; 
unsigned long start_time = 0;
unsigned long end_time = 0;
int steps = 0;
float steps_old = 0;
float temp = 0;
float rps = 0;
float distanciaE;
float distanciaD;
int paredeSeguida = -1;
float distanciaF;
int incomingByte = 0;
int  input = 0;

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
  
//  pinMode(7,INPUT_PULLUP);

  // put your setup code here, to run once:
  

}

void loop() {

  

  //precisa verificar bateria

  modoOperacao = digitalRead(chaveDeModo);

  switch(modoOperacao){
    case 0:
    
      modoAleatorio();
      break;
    case 1:
      modoSeguidor();
//modoAleatorio();
      break;
    default:
      break;

//      Serial.println("voltou");
  }
 

//   if (alertaAtual == 1) {
//     lcd.escreveAlerta();
//     }
//   else{
////     modoOperacao = 1;
//     Serial.println(modoOperacao);
      // put your main code here, to run repeatedly:
//     }

// motoresLocomocao.moverFrente();
// delay(4000);
// motoresLocomocao.parar();
// delay(500);
// motoresLocomocao.virarDireita();
// delay(1000);
// motoresLocomocao.parar();
// delay(500);
// motoresLocomocao.moverFrente();
// delay(4000);
// motoresLocomocao.parar();
// delay(500);
// motoresLocomocao.virarEsquerda();
// delay(1000);
// motoresLocomocao.parar();
// delay(500);
// motoresLocomocao.moverFrente();
// delay(5000);
// motoresLocomocao.parar();
// delay(1000);
//
//   if (Serial.available() > 0) {
//      // read the incoming byte:
//      incomingByte = Serial.read();
//      input = incomingByte - 48; //convert ASCII code of numbers to 1,2,3
//  
//      switch (input) {
//        case 1:         // if input=1 ....... motors turn forward
//          motoresLocomocao.moverFrente();
//          digitalWrite(A0,LOW);
//          Serial.println("forward");
//          break;
//        case 2:         // if input=2 ....... motors turn backward
//          motoresLocomocao.moverTras();
//          digitalWrite(A0,HIGH);
//          Serial.println("backward");
//          break;
//        case 3:         // if input=1 ....... motors turn stop
//          motoresLocomocao.parar();
//          Serial.println("stop");
//          break;
//         case 4:         // if input=1 ....... motors turn stop
//          motoresEscovas.ligaMotores();
//          Serial.println("on brush");
//          break;
//         case 5:         // if input=1 ....... motors turn stop
//          motoresEscovas.desligaMotores();
//          Serial.println("off brush");
//          break;
//      }
//  
//      delay(200);
//      input = 0;
//  }


  //start_time=millis();
  // end_time=start_time+1000;
  //while(millis()<end_time)
  // {
  //if(encoderRodaDireita.getVelocity())
  //   {
  //    steps=steps+1;
  //while(1encoderRodaDireita.getVelocity());
  //   }
  ////   Serial.println(steps);
  // }
  //    temp=steps-steps_old;
  //    steps_old=steps;
  //    rps=(temp/20);
  //    Serial.println(rps);
  //

//  if (encoderRodaEsquerda.isMoving()) {
//    Serial.print("Andou");
//  }
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
//   lcdScreen.initLcd();
  
  Serial.println("15");
}

  void modoAlerta( int tipoAlerta) {
    Serial.println("Alerta");
//  lcdScreen.escreveAlerta(tipoAlerta);
}   

void modoAleatorio() {
 
//  lcdScreen.escreveModo(0);
  distanciaF = sensorFrente.getDistance();
  Serial.print("Sensor Frente: ");
  Serial.println(distanciaF);
  delay(300);

  
  //iniciou com objeto na frente
  if(distanciaF < minDistFrente){
    motoresLocomocao.moverTras();
    while(distanciaF < maxDistFrente){
      if(!encoderRodaDireita.isMoving() && !encoderRodaEsquerda.isMoving()){
        motoresLocomocao.parar();
        delay(10);
        motoresLocomocao.moverTras();
      }
      distanciaF = sensorFrente.getDistance();
      delay(300);

    }

    //precisa verificar bateria e loop para entrar no estado de alerta

    //Decisao para virar
    decisaoVirar = random(1,3);
    Serial.println(decisaoVirar);
    switch(decisaoVirar){
      case 1:
          motoresLocomocao.virarDireita();
          delay(500);
          break;
      case 2:
          motoresLocomocao.virarEsquerda();
          delay(500);
          break;
      default:
          break;
    }
    motoresLocomocao.parar();
  }else {
    motoresLocomocao.moverFrente();
  }
  
}





void modoSeguidor() {
  
  //  lcdScreen.escreveModo(1);
  
  distanciaD = sensorDireita.getDistance();
  delay(300);
  distanciaF = sensorFrente.getDistance();
  delay(300);

  distanciaE = sensorEsquerda.getDistance();

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
    
    modoAlerta(1);
    return;
  }
  switch (paredeSeguida){
    case 1:
          if(distanciaD < maxDistLados && distanciaD > minDistLados && distanciaF > minDistFrente){
   
            motoresLocomocao.moverFrente();
//            while(!encoderRodaEsquerda.isMoving() && !encoderRodaDireita.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(30);
            loopCounter = 0;
          }else if (distanciaD > maxDistLados  && distanciaF > maxDistFrente){
            
            motoresLocomocao.parar();
            delay(30);
            motoresLocomocao.virarDireita();
//            while(!encoderRodaEsquerda.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(500);
            loopCounter += 1;
          }else if (distanciaD > maxDistLados  && distanciaF < minDistFrente){
   
            motoresLocomocao.parar();
            delay(30);
            motoresLocomocao.virarDireita();
//            while(!encoderRodaEsquerda.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(500);
            loopCounter += 1;
          }else if (distanciaD < maxDistLados && distanciaD > minDistLados  && distanciaF < minDistFrente){

            motoresLocomocao.parar();
            delay(30);
            motoresLocomocao.virarEsquerda();
//            while(!encoderRodaDireita.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(500);
            loopCounter += 1;
          }
          break;
    case 2:
          if(distanciaE < maxDistLados && distanciaE > minDistLados && distanciaF > minDistFrente){

            motoresLocomocao.moverFrente();
//            while(!encoderRodaEsquerda.isMoving() && !encoderRodaDireita.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(30);
            loopCounter = 0;
          }else if (distanciaE > maxDistLados  && distanciaF > maxDistFrente){

            motoresLocomocao.parar();
            delay(30);
            motoresLocomocao.virarEsquerda();
//            while(!encoderRodaDireita.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(500);
            loopCounter += 1;
          }else if (distanciaE > maxDistLados  && distanciaF < minDistFrente){

            motoresLocomocao.parar();
            delay(30);
            motoresLocomocao.virarEsquerda();
//            while(!encoderRodaDireita.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(500);
            loopCounter += 1;
            
          }else if (distanciaE < maxDistLados && distanciaE > minDistLados  && distanciaF < minDistFrente){
  
            motoresLocomocao.parar();
            delay(30);
            loopCounter += 1;
            motoresLocomocao.virarDireita();
//            while(!encoderRodaEsquerda.isMoving()){
//              Serial.println("Esperando encoder");
//            }
            delay(500);
            loopCounter += 1;
          }
          break;
    default:
          break;

  }
  }

  
