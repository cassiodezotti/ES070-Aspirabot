
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
DriverLocomocao motoresLocomocao(5, 6, 10, 11);
DriverEscovas motoresEscovas(3, 4, 8, 9);
Encoder encoderRodaDireita(12);
Encoder encoderRodaEsquerda(13);
//DriverBuzzer buzzer(1);
//DriverLcd lcd(pinosLcd);
//Bateria bateriaSistema(1,2);
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
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.println("Selecione o teste");
  Serial.println("1. Locomoçao frente");
  Serial.println("2. Locomoçao trás");
  Serial.println("3. Locomoçao parar");
  Serial.println("4. Escovas ligar");
  Serial.println("5. Escovas desligar");

}

void loop() {

   if (Serial.available() > 0) {
      // read the incoming byte:
      incomingByte = Serial.read();
      input = incomingByte - 48; //convert ASCII code of numbers to 1,2,3
  
      switch (input) {
        case 1:         // if input=1 ....... motors turn forward
          motoresLocomocao.moverFrente();
          Serial.println("forward");
          break;
        case 2:         // if input=2 ....... motors turn backward
          motoresLocomocao.moverTras();
          Serial.println("backward");
          break;
        case 3:         // if input=1 ....... motors turn stop
          motoresLocomocao.parar();
          Serial.println("stop");
          break;
         case 4:         // if input=1 ....... motors turn stop
          motoresEscovas.ligaMotores();
          Serial.println("on brush");
          break;
         case 5:         // if input=1 ....... motors turn stop
          motoresEscovas.desligaMotores();
          Serial.println("off brush");
          break;
      }
  
      delay(200);
      input = 0;
  }


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

  if (encoderRodaEsquerda.isMoving()) {
    Serial.print("Andou");
  }
}


void iniciarPlaca() {

}

void modoAleatorio() {

}

void modoSeguidor() {

}

void modoAlerta( int tipoAlerta) {

}
