/** @file BuzzerActuator.h 
  *  Copyright (c) 2016 Ozbotics 
  *  Distributed under the MIT license (see LICENSE)
  */ 
#ifndef _BUZZER_ACTUATOR_H
  #define _BUZZER_ACTUATOR_H
  
#include <Arduino.h>

#include <DigitalActuator.h>

/**
 * Buzzer Actuator
 *
 * Sounds buzzer when enabled
 */
class BuzzerActuator : public DigitalActuator {
  public:
  
  /**
    * Constructor
    *
    * @param pin The Digital Output pin
    */
    BuzzerActuator(byte pin) : DigitalActuator(pin) {}

};

#endif //_BUZZER_ACTUATOR_H
