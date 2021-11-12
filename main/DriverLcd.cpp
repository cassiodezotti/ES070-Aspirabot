//#include "DriverLcd.h"
//#include <Arduino.h>
//#include <Wire.h> 
//#include <LiquidCrystal_I2C.h>
//
//DriverLcd:: DriverLcd() {
//  void initLcd();
//}
//
//
//void DriverLcd:: initLcd(){
//  LiquidCrystal_I2C lcd(0x20,16,2);  // set the LCD address to 0x20 or a 16 chars and 2 line display
//  lcd.init();
//  
//}
//
//void DriverLcd:: escreveModo(int modoOperacao){
//  if(modoOperacao == HIGH){
//        lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
//        lcd.print("Seguidor Parede");       // Print da mensagem
//        delay(100);                    // atraso de 1 segundo
//      } else {
//        lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
//        lcd.print("Aleatório");       // Print da mensagem
//        delay(100);                    // atraso de 1 segundo
//      }
//}
//
//void DriverLcd:: escreveAlerta(){
//  lcd.setCursor(0, 1);            // selecionando coluna 2 e linha 1
//  lcd.print("ALERTA");       // Print da mensagem
//  delay(100);                    // atraso de 1 segundo
//}
//
//void escreveBateria(int batteryLevel){
//    lcd.setCursor(0, 11);
//    lcd.print(batteryLevel);
//    lcd.print("%"); 
//  }
