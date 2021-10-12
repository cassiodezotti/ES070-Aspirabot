
/* ***************************************************************** */
/* File name:        driverLocomocao.h                               */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the encoder              */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef DRIVERLOCOMOCAO_H
#define DRIVERLOCOMOCAO_H

/* ***************************************************************** */
/* Method name:        initEncoder                                   */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
void initEncoder(int var1, int var2);

/* ***************************************************************** */
/* Method name:        initDriver                                    */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
void initDriver(int var1, int var2, int, var3, int var4);

/* ***************************************************************** */
/* Method name:        moverTras                                     */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
boolean moverTras(void);

/* ***************************************************************** */
/* Method name:        moverFrente                                   */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
boolean moverFrente(void);

/* ***************************************************************** */
/* Method name:        virarDireita                                   */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
boolean virarDireita(void);

/* ***************************************************************** */
/* Method name:        virarEsquerda                                 */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
boolean virarEsquerda(void);

#endif /* ENCODER_H */
