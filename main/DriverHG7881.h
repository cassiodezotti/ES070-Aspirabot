
/* ***************************************************************** */
/* File name:        driverHG7881.h                                  */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the driverHG7881         */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef DRIVERHG7881_H
#define DRIVERHG7881_H
#include<Arduino.h>

class DriverHG7881 {
private:
	byte pino;
public:
	DriverHG7881(byte pino);

	/* ***************************************************************** */
	/* Method name:        initDriver                                    */
	/* Method description: Initiliazing driver                           */
	/*Input params: var1, var2, var3, var4                               */
	/*Output params:                                                     */
	/* ***************************************************************** */
//  void initDriver(int var1, int var2, int, var3, int var4);
};

#endif /* DRIVERHG7881_H */
