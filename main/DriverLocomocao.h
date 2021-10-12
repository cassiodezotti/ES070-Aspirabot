
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
#include <Arduino.h>

class DriverLocomocao {
  private:
    byte pino1;
    byte pino2;
    byte pino3;
    byte pino4;
  public:
    DriverLocomocao(byte pino1, byte pino2, byte pino3, byte pino4);
    /* ***************************************************************** */
    /* Method name:        initDriver                                    */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void initLocomocao();

    /* ***************************************************************** */
    /* Method name:        moverTras                                     */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    boolean moverTras();
    
    /* ***************************************************************** */
    /* Method name:        moverFrente                                   */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    boolean moverFrente();
    
    /* ***************************************************************** */
    /* Method name:        virarDireita                                   */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    boolean virarDireita();
    
    /* ***************************************************************** */
    /* Method name:        virarEsquerda                                 */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    boolean virarEsquerda();
};

#endif
