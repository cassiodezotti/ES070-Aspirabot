#include "DriverLcd.h"
#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


//LiquidCrystal_I2C lcd(0x20,16,2);

DriverLcd:: DriverLcd(byte pino1, byte pino2) {
  this->pino1 = pino1;
  this->pino2 = pino2;
//  this->lcd = LiquidCrystal_I2C lcd(0x20,16,2);
  void initLcd();
}


void DriverLcd:: initLcd(){
    // set the LCD address to 0x20 or a 16 chars and 2 line display
//  lcd.init();
//  lcd.backlight();

  
}

void DriverLcd:: escreveModo(int modoOperacao){
//  if(modoOperacao == HIGH){
//        lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
//        lcd.print("Seguidor Parede");       // Print da mensagem
//        delay(100);                    // atraso de 1 segundo
//      } else {
//        lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
//        lcd.print("Aleatório");       // Print da mensagem
//        delay(100);                    // atraso de 1 segundo
//      }
}

void DriverLcd:: escreveAlerta(){
//  lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
//  lcd.print("ALERTA");       // Print da mensagem
//  delay(100);                    // atraso de 1 segundo
}

void DriverLcd:: escreveBateria(int batteryLevel){
//    lcd.setCursor(0, 11);
//    lcd.print(batteryLevel);
//    lcd.print("%"); 
  }
