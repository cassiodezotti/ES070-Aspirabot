
/* ***************************************************************** */
/* File name:        driverLdc.h                                     */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the LCD screen           */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef DRIVERLCD_H
#define DRIVERLCD_H
#include<Arduino.h>
#include <LiquidCrystal.h>

class DriverLcd {

public:
	DriverLcd();

	/* ***************************************************************** */
	/* Method name:        initLcd                                       */
	/* Method description: Initializing LCD screen                       */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initLcd();

	/* ***************************************************************** */
	/* Method name:        escreveModo                                   */
	/* Method description: Write the mode our robot is working           */
	/*Input params: enum                                                 */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void escreveModo(); //enum

	/* ***************************************************************** */
	/* Method name:        escreveBateria                                 */
	/* Method description: Write the current battery level               */
	/*Input params: batterylevel                                         */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void escreveBateria(int batterylevel);

	/* ***************************************************************** */
	/* Method name:        escreveAlerta                                 */
	/* Method description: Write the alert when battery is about to die  */
	/*                     or when stuck on loop                         */
	/*Input params: enum                                                 */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void escreveAlerta(); //enum

};

#endif /* DRIVERLCD_H */
