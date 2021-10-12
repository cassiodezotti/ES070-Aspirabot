/* ***************************************************************** */
/* File name:        driverHG7881.h                                  */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the driver               */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */



// Pensando melhor acho que não existe a necessidade dessa classe, era somente um init 

#ifndef DRIVERHG7881_H
#define DRIVERHG7881_H
#include <Arduino.h>

class DriverHG7881 {
  private:
    byte pino;
  public:
    DriverHG7881(byte pino);
    /* ***************************************************************** */
    /* Method name:        initDriver                                    */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
//    void initDriver(int var1, int var2, int, var3, int var4);
};

#endif
