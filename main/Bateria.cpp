#include "Bateria.h"

Bateria:: Bateria(byte pino) {
	this->pino = pino;

	void initLeitorBateria();
}

int Bateria:: getNivelBateria() {
	return 0;
}

boolean Bateria:: checkAlertaBateria() {
	return false;
}
