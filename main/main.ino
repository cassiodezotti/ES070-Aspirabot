
//#include "DriverBuzzer.h"
//#include "DriverEscovas.h"
//#include "DriverHG7881.h"
#include "DriverLcd.h"
//#include "DriverLocomocao.h"
//#include "Encoder.h"
//#include "SensorDistancia.h"


//Portas só para ilustrar, o planejamento das portas será feito depois
//SensorDistancia sensorEsquerda(1,1);
//SensorDistancia sensorFrontal(1,1);
//SensorDistancia sensorDireito(1,1);
//DriverLocomocao motoresLocomocao(1,2,3,4);
//DriverEscovas motoresEscovas(1,2,3,4);
//DriverBuzzer buzzer(1);
DriverLcd lcd;
//Bateria bateriaSistema(1,2);
int objetosDetectados = 0;
float distanciaMin = 0.0;
int alertaAtual = 0;
int modoOperacao = 0; //Lado marcado com ferro de solda é 0


void setup() {
  Serial.begin(9600);
 pinMode(7,INPUT_PULLUP);
 lcd.initLcd(); // put your setup code here, to run once:
 

}

void loop() {
  if (alertaAtual == 1) {
    lcd.escreveAlerta();
    }
  else{
    modoOperacao = digitalRead(7);
    Serial.println(modoOperacao);
    lcd.escreveModo(modoOperacao); // put your main code here, to run repeatedly:
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
