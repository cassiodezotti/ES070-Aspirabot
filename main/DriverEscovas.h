
/* ***************************************************************** */
/* File name:        DriverEscovas.h                                 */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the driver for brushes   */
/* Author name:      Andre Won, Cassio Dezzoti, Totms Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */

#ifndef DRIVERESCOVAS_H
#define DRIVERESCOVAS_H
#include<Arduino.h>

class DriverEscovas {
private:
	byte pino1;
	byte pino2;
	byte pino3;
	byte pino4;
public:
	DriverEscovas(byte pino1, byte pino2, byte pino3, byte pino4);

	/* ***************************************************************** */
	/* Method name:        initEscovas                                   */
	/* Method description: initiliazing brushes                          */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initEscovas();

	/* ***************************************************************** */
	/* Method name:        ligaMotores                                   */
	/* Method description: Turn on motors                                */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void ligaMotores();

	/* ***************************************************************** */
	/* Method name:        desligaMotores                                */
	/* Method description: Turn off motors                               */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void desligaMotores();
};

#endif /* DRIVERESCOVAS_H */
