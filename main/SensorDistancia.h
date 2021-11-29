
/* ***************************************************************** */
/* File name:        sensorDistancia.h                               */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the sensor for distance  */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */

#ifndef SENSORDISTANCIA_H
#define SENSORDISTANCIA_H
#include<Arduino.h>

class SensorDistancia {
private:
	byte pino1;
	byte pino2;
public:
	SensorDistancia(byte pino1, byte pino2);

	/* ***************************************************************** */
	/* Method name:        initSensor                                    */
	/* Method description: Initializing sensor                           */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initSensor();


	/* ***************************************************************** */
	/* Method name:        checkDistance                                 */
	/* Method description: Compare the distance to the sensor with the   */
	/*                     value from input                              */
	/*Input params: var3                                                 */
	/*Output params: true or false                                       */
	/* ***************************************************************** */
	boolean checkDistance(float distancia);

	/* ***************************************************************** */
	/* Method name:        getDistance                                   */
	/* Method description: Get distance to the sensor                    */
	/*Input params:                                                      */
	/*Output params: distance(float)                                     */
	/* ***************************************************************** */
	float getDistance();
};

#endif /* SENSORDISTANCIA_H */
