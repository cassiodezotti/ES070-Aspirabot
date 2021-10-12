
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

/* ***************************************************************** */
/* Method name:        initLcd                                       */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
void initLcd(int var1[11]);

/* ***************************************************************** */
/* Method name:        escreveModo                                   */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
void escreveModo(enum);

/* ***************************************************************** */
/* Method name:        escrevBateria                                 */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
void escreveBateria(int var2);

/* ***************************************************************** */
/* Method name:        escreveAlerta                                 */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
void escreveAlerta(enum);

/* ***************************************************************** */
/* Method name:        escreve                                       */
/* Method description: Header file containing the functions/methods f*/
/*                   initializing and using the ultrassound sensor   */
/*Input params:                                                      */
/*Output params:                                                     */
/* ***************************************************************** */
void escreve(string var3);

#endif /* DRIVERDISTANCIA_H */
