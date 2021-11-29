
/* ***************************************************************** */
/* File name:        DriverBuzzer.h                                  */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the buzzer               */
/* Author name:      Andre Won, Cassio Dezzoti, Totmes Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    28nov2021                                       */
/* ***************************************************************** */

#ifndef DRIVERBUZZER_H
#define DRIVERBUZZER_H
#include<Arduino.h>

class DriverBuzzer {
private:
	byte pino;
public:
	DriverBuzzer(byte pino);

	/* ***************************************************************** */
	/* Method name:        initBuzzer                                    */
	/* Method description: Initializing the buzzer                       */
	/*Input params: n/a                                                  */
	/*Output params: n/a                                                 */
	/* ***************************************************************** */
	void initBuzzer();

	/* ***************************************************************** */
	/* Method name:        tocarAlarme                                   */
	/* Method description: Start playing the buzzer                      */
	/*Input params: n/a                                                  */
	/*Output params: n/a                                                 */
	/* ***************************************************************** */
	void tocarAlarme();

	/* ***************************************************************** */
	/* Method name:        pararAlarme                                   */
	/* Method description: Stop playing the buzzer                       */
	/*Input params: n/a                                                  */
	/*Output params: n/a                                                 */
	/* ***************************************************************** */
	void pararAlarme();
};

#endif /* DRIVERBUZZER_H */
