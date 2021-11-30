

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
  void initLcd();
}

void DriverLcd:: initLcd(){  
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0,0);  /* set cursor at top left */
  lcd.print("Welcome,"); /* Print message */
  lcd.setCursor(0,1);    /* set cursor at bottom left */
  lcd.print("We are Aspirabot!"); /* Print message */
  delay(2000);
  lcd.clear(); 
  lcd.setCursor(0, 0);            /* set cursor at column 2 e line 1 */
  lcd.print("Modo:");       /* Print message */
  
}

/* ***************************************************************** */
/* Method name:        escreveModo                                   */
/* Method description: Write the mode our robot is working           */
/* Input params: modoOperacao                                        */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverLcd:: escreveModo( int modoOperacao){
  if(modoOperacao == HIGH){
        lcd.setCursor(0, 1);            /* set cursor at bottom left */
        lcd.print("Seguidor Parede");       /* Print message */
        delay(100);                    /* delay of 100 miliseconds */
      } else {
        lcd.setCursor(0, 1);            /* set cursor at bottom left */
        lcd.print("Aleatorio      ");       /* Print message */
        delay(100);                    /* delay de 100 miliseconds */
      }
}

/* ***************************************************************** */
/* Method name:        escreveAlerta                                 */
/* Method description: Write the alert when battery is about to die  */
/*                     or when stuck on loop                         */
/* Input params: n/a                                                 */
/* Output params: n/a                                                */
/* ***************************************************************** */
void DriverLcd:: escreveAlerta( ){
  lcd.setCursor(0, 1);            /* set cursor at bottom left */
  lcd.print("    ALERTA");       /* Print message */
  delay(500);                    /* delay of 500 miliseconds */
}
