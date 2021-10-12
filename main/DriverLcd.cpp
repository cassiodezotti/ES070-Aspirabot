#include "DriverLcd.h"

DriverLcd:: DriverLcd(byte pinos[6]) {
  for (int i = 0; i < 6; i = i + 1){
     this->pinos[i] = pinos[i];
  }

  void initLcd();
}


void DriverLcd:: initLcd(){
  LiquidCrystal lcd(pinos[0], pinos[1], pinos[2], pinos[3], pinos[4], pinos[5]);
  lcd.begin(16,2);
  
}

void DriverLcd:: escreveModo(){
  
}

void DriverLcd:: escreveAlerta(){
  
}

void DriverLcd:: escreve(String var3) {
  
}
