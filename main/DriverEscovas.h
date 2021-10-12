
/* ***************************************************************** */
/* File name:        driverEscovas.h                                 */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the driver for brushes   */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
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
	/* Method name:        initDriver                                    */
	/* Method description: initiliazing drivers                          */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initEscovas();

	/* ***************************************************************** */
	/* Method name:        ligaMotores                                   */
	/* Method description: Turn on motors                                */
	/*Input params: var1[2]                                              */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void ligaMotores(int motores[2]);

	/* ***************************************************************** */
	/* Method name:        desligaMotores                                */
	/* Method description: Turn off motors                               */
	/*Input params: var1[2]                                              */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void desligaMotores(int motores[2]);
};

#endif /* DRIVERESCOVAS_H */
