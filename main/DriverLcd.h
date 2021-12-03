
/* ***************************************************************** */
/* File name:        DriverLdc.h                                     */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the LCD screen           */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */

#ifndef DRIVERLCD_H
#define DRIVERLCD_H
#include<Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

class DriverLcd {
  

public:
LiquidCrystal_I2C lcd = LiquidCrystal_I2C(0x27,16,2);
DriverLcd( );
	/* ***************************************************************** */
	/* Method name:        initLcd                                       */
	/* Method description: Initializing the LCD screen and printing      */
  /*                     welcome message                               */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initLcd();

	/* ***************************************************************** */
	/* Method name:        escreveModo                                   */
	/* Method description: Write the mode our robot is working           */
	/*Input params: modoOperacao                                         */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void escreveModo(int modoOperacao); //enum

	/* ***************************************************************** */
	/* Method name:        escreveAlerta                                 */
	/* Method description: Write the alert when battery is about to die  */
	/*                     or when stuck on loop                         */
	/*Input params: enum                                                 */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void escreveAlerta(int tipoAlerta); //enum

};

#endif /* DRIVERLCD_H */
