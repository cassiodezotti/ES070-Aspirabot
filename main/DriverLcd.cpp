#include "DriverLcd.h"
#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>


void DriverLcd:: initLcd(){  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Welcome,");
  lcd.setCursor(0,1);
  lcd.print("We are Aspirabot!");
  delay(2000);
  lcd.clear(); 
  lcd.setCursor(0, 0);            // selecionando coluna 2 e linha 1
  lcd.print("Modo:");       // Print da mensagem
  
}

void DriverLcd:: escreveModo(int modoOperacao){
  if(modoOperacao == HIGH){
        lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
        lcd.print("Seguidor Parede");       // Print da mensagem
        delay(100);                    // atraso de 1 segundo
      } else {
        lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
        lcd.print("Aleatorio      ");       // Print da mensagem
        delay(100);                    // atraso de 1 segundo
      }
}

void DriverLcd:: escreveAlerta(){
  
  lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
  lcd.print("    ALERTA");       // Print da mensagem
  delay(500);                    // atraso de 1 segundo
}

//void escreveBateria(int batteryLevel){
//    lcd.setCursor(0, 11);
//    lcd.print(batteryLevel);
//    lcd.print("%"); 
//  }
