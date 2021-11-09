#include "Bateria.h"

Bateria:: Bateria(byte pino) {
	this->pino = pino;

	void initLeitorBateria();
}

void Bateria:: initLeitorBateria(){
	pinMode(pino, INPUT);	
}

int Bateria:: getNivelBateria() {
	int sensorBateria = analogRead(pino);
	float fnivelBateria = (sensorBateria/1023.0);
	int inivelBateria = (int) fnivelBateria;
	
	return inivelBateria;
}

boolean Bateria:: checkAlertaBateria() {
	if (getNivelBateria() <= 20){
	return true;
	}else{
	return false;
	}
}
