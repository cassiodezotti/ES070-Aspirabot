/* ***************************************************************** */
/* File name:        bateria.h                                       */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the battery              */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef BATERIA_H
#define BATERIA_H
#include <Arduino.h>

class Bateria {
private:
	byte pino;
public:
	Bateria(byte pino);

	/* ***************************************************************** */
	/* Method name:        initLeitorBateria                             */
	/* Method description: Initializing battery sensor                   */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initLeitorBateria();


	/* ***************************************************************** */
	/* Method name:        getNivelBateria                               */
	/* Method description: Get the current battery level                 */
	/*Input params:                                                      */
	/*Output params: battery level(int)                                  */
	/* ***************************************************************** */
	int getNivelBateria();

	/* ***************************************************************** */
	/* Method name:        checkAlertaBateria                            */
	/* Method description: Check battery level alert                     */
	/*Input params:                                                      */
	/*Output params: distance(float)                                     */
	/* ***************************************************************** */
	boolean checkAlertaBateria();
};

#endif /* BATERIA_H */

