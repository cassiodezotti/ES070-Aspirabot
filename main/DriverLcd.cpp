

/* ***************************************************************** */
/* File name:        DriverLcd.cpp                                   */
/* File description: This file contains the functions/methods for    */
/*                   initializing and using the battery              */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */
#include "DriverLcd.h"
#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

/* ***************************************************************** */
/* Method name:        initLcd                                       */
/* Method description: Initializing the LCD screen and printing      */
/*                     welcome message                               */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */



 DriverLcd:: DriverLcd(){
//  void initLcd();
this->lcd = LiquidCrystal_I2C(0x27,16,2);
}

void DriverLcd:: initLcd(){  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);  
  lcd.print("Welcome,"); 
  lcd.setCursor(0,1);    
  lcd.print("We are Aspirabot!"); 
  delay(2000);
  lcd.clear(); 
  lcd.setCursor(0, 0);            
  lcd.print("Modo:");       
  
}

/* ***************************************************************** */
/* Method name:        escreveModo                                   */
/* Method description: Write the mode our robot is working           */
/* Input params: modoOperacao                                        */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverLcd:: escreveModo( int modoOperacao){
  if(modoOperacao == HIGH){
        lcd.setCursor(0, 1);            
        lcd.print("Seguidor Parede");       
        delay(100);                    
      } else {
        lcd.setCursor(0, 1);            
        lcd.print("Aleatorio      ");       
        delay(100);                    
      }
}

/* ***************************************************************** */
/* Method name:        escreveAlerta                                 */
/* Method description: Write the alert when battery is about to die  */
/*                     or when stuck on loop                         */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverLcd:: escreveAlerta(int tipoAlerta){
  lcd.setCursor(0, 1);   
  switch(tipoAlerta){
    case 1:
        lcd.print("  ALERTA LOOP");      
        delay(500);     
        break;
        break;
    case 2:
        lcd.print(" ALERTA BATERIA");      
        delay(500);     
        break;
        break;
    default:
        lcd.print("    ALERTA");      
        delay(500);     
        break;
  }               
}
