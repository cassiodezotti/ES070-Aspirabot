/* ***************************************************************** */
/* File name:        driverEscovas.h                                 */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the driver for brushes   */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef DRIVERESCOVAS_H
#define DRIVERESCOVAS_H
#include <Arduino.h>


class DriverEscovas {
  private:
    byte porta;
  public:
    DriverEscovas(byte porta);
    /* ***************************************************************** */
    /* Method name:        initDriver                                    */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void initEscovas(int var1, int var2, int var3, int var4);
    
    /* ***************************************************************** */
    /* Method name:        ligaMotores                                   */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void ligaMotores(int var1[2]);
    
    /* ***************************************************************** */
    /* Method name:        desligaMotores                                */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void desligaMotores(int var1[2]);

};

#endif
