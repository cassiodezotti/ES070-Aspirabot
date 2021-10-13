/* ***************************************************************** */
/* File name:        driverBuzzer.h                                  */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the buzzer               */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef DRIVERBUZZER_H
#define DRIVERBUZZER_H
#include <Arduino.h>

class DriverBuzzer {
private:
	byte pino;
public:
	DriverBuzzer(byte pino);

	/* ***************************************************************** */
	/* Method name:        initBuzzer                                    */
	/* Method description: Initializing the buzzer                       */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void initBuzzer();

	/* ***************************************************************** */
	/* Method name:        tocarAlarme                                   */
	/* Method description: Start playing the buzzer                      */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void tocarAlarme();

	/* ***************************************************************** */
	/* Method name:        pararAlarme                                   */
	/* Method description: Stop playing the buzzer                       */
	/*Input params:                                                      */
	/*Output params:                                                     */
	/* ***************************************************************** */
	void pararAlarme();
};

#endif /* DRIVERBUZZER_H */
