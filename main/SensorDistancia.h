
/* ***************************************************************** */
/* File name:        sensorDistancia.h                               */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the sensor for distance  */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */

#ifndef SENSORDISTANCIA_H
#define SENSORDISTANCIA_H
#include <Arduino.h>
#include <Ultrasonic.h>



class SensorDistancia {
  private:
    byte pino1;
    byte pino2;
  public:
    SensorDistancia(byte porta1, byte porta2);
    /* ***************************************************************** */
    /* Method name:        initSensor                                    */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void initSensor();    

    
    /* ***************************************************************** */
    /* Method name:        checkDistance                                 */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    boolean checkDistance(float distancia);
    /* ***************************************************************** */
    /* Method name:        getDistance                                 */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    float getDistance();
};

#endif
