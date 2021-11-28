
/* ***************************************************************** */
/* File name:        driverLocomocao.h                               */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the locomotion           */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef DRIVERLOCOMOCAO_H
#define DRIVERLOCOMOCAO_H
#include<Arduino.h>

class DriverLocomocao {
private:
	byte pino1;
	byte pino2;
	byte pino3;
	byte pino4;
public:
	DriverLocomocao(byte pino1, byte pino2, byte pino3, byte pino4);

	/* ***************************************************************** */
	/* Method name:        initLocomocao                                 */
	/* Method description: Initializing Locomotion                       */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initLocomocao();

	/* ***************************************************************** */
	/* Method name:        moverTras                                     */
	/* Method description: Move robot backwards                          */
	/*Input params:                                                      */
	/*Output params: true or false                                       */
	/* ***************************************************************** */
	boolean moverTras();

	/* ***************************************************************** */
	/* Method name:        moverFrente                                   */
	/* Method description: Moving robot forward                          */
	/*Input params:                                                      */
	/*Output params: true or false                                       */
	/* ***************************************************************** */
	boolean moverFrente();

  /* ***************************************************************** */
  /* Method name:        parar                                         */
  /* Method description: stop robot from moving                        */
  /*Input params:                                                      */
  /*Output params:                                                     */
  /* ***************************************************************** */
  void parar();

	/* ***************************************************************** */
	/* Method name:        virarDireita                                  */
	/* Method description: Turn robot to the right                       */
	/*Input params:                                                      */
	/*Output params: true or false                                       */
	/* ***************************************************************** */
	boolean virarDireita();

	/* ***************************************************************** */
	/* Method name:        virarEsquerda                                 */
	/* Method description: Turn robot to the left                        */
	/*Input params:                                                      */
	/*Output params: true or falze                                       */
	/* ***************************************************************** */
	boolean virarEsquerda();
};

#endif /* DRIVERLOCOMOCAO_H */
