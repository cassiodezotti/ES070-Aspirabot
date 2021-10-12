
/* ***************************************************************** */
/* File name:        encoder.h                                       */
/* File description: Header file containing the functions/methods for*/
/*                   initializing and using the encoder              */
/* Author name:      André Won, Cassio Dezzoti, Totmés Scheffer,     */
/*                   Guilherme Abreu                                 */
/* Creation date:    11out2021                                       */
/* Revision date:    11out2021                                       */
/* ***************************************************************** */
#ifndef ENCODER_H
#define ENCODER_H
#include <Arduino.h>

class Encoder {
  private:
    byte pino1;
    byte pino2;
  public:
    Encoder(byte pino1, byte pino2);
    /* ***************************************************************** */
    /* Method name:        initEncoder                                   */
    /* Method description: Header file containing the functions/methods f*/
    /*                   initializing and using the ultrassound sensor   */
    /*Input params:                                                      */
    /*Output params:                                                     */
    /* ***************************************************************** */
    void initEncoder();

    
      /* ***************************************************************** */
      /* Method name:        getVelocity                                   */
      /* Method description: Header file containing the functions/methods f*/
      /*                   initializing and using the ultrassound sensor   */
      /*Input params:                                                      */
      /*Output params:                                                     */
      /* ***************************************************************** */
      float getVelocity();
};

#endif
