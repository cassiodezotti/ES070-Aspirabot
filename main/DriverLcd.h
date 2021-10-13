
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
#include <Arduino.h>
#include <LiquidCrystal.h>

class DriverLcd {
  private:
    byte pinos[9];
  public:
    DriverLcd(byte pinos[6]);
    /* ***************************************************************** */
    /* Method name:        initLcd                                       */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void initLcd();
    
    /* ***************************************************************** */
    /* Method name:        escreveModo                                   */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void escreveModo();// vamos testar enum depois 
    
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
    void escreveAlerta();// vamos testar enum depois 
    
    /* ***************************************************************** */
    /* Method name:        escreve                                       */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void escreve(String var3);
};

#endif
