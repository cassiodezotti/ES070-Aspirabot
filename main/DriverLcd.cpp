#include "DriverLcd.h"
#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

void DriverLcd:: initLcd(){  
  this->init();
  this->setCursor(0, 0);            // selecionando coluna 2 e linha 1
  this->print("Modo:");       // Print da mensagem
  
}

void DriverLcd:: escreveModo(int modoOperacao){
  if(modoOperacao == HIGH){
        this->setCursor(0, 1);            // selecionando coluna 2 e linha 1
        this->print("Seguidor Parede");       // Print da mensagem
        delay(100);                    // atraso de 1 segundo
      } else {
        this->setCursor(0, 1);            // selecionando coluna 2 e linha 1
        this->print("Aleatório");       // Print da mensagem
        delay(100);                    // atraso de 1 segundo
      }
}

void DriverLcd:: escreveAlerta(){
  this->setCursor(0, 1);            // selecionando coluna 2 e linha 1
  this->print("ALERTA");       // Print da mensagem
  delay(100);                    // atraso de 1 segundo
}

void escreveBateria(int batteryLevel){
    this->setCursor(0, 11);
    this->print(batteryLevel);
    this->print("%"); 
  }
