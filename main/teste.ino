#include "Ultrasonic.h"

Ultrasonic sensorDireita(12,13);

void setup() {
  
  Serial.begin(9600);

}

void loop() {

  float distancia;

  distancia = sensorDireita.read(CM);
  Serial.println(distancia);
  delay(1000);
  
}
