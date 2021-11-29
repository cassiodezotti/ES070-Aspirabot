
/* ***************************************************************** */
/* File name:        Encoder.h                                       */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the encoder              */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */

#ifndef ENCODER_H
#define ENCODER_H
#include<Arduino.h>

class Encoder {
private:
	byte pino1;
public:
	Encoder(byte pino1);

	/* ***************************************************************** */
	/* Method name:        initEncoder                                   */
	/* Method description: Initializing encoder                          */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initEncoder();

	/* ***************************************************************** */
	/* Method name:        getVelocity                                   */
	/* Method description: Get current robot velocity                    */
	/*Input params:                                                      */
	/*Output params: velocity(float)                                     */
	/* ***************************************************************** */
	float getVelocity();

  /* ***************************************************************** */
  /* Method name:        isMoving                                      */
  /* Method description: return true if motor is moving                */
  /*Input params:                                                      */
  /*Output params: Boolean(float)                                      */
  /* ***************************************************************** */
  boolean isMoving();
};

#endif /* ENCODER_H */
