#include <Bateria.h>

Bateria: : Bateria(byte pino) {
	this->pino = pino;

	void initLeitorBateria();
}

int getNivelBateria : : getNivelBateria() {
	return 0;
}

boolean checkAlertaBateria : : chechAlertaBateria() {
	return false;
}