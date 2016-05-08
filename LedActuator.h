/** @file LedActuator.h 
  *  Copyright (c) 2016 Ozbotics 
  *  Distributed under the MIT license (see LICENSE)
  */ 
#ifndef _LED_ACTUATOR_H
  #define _LED_ACTUATOR_H
  
#include <Arduino.h>

#include <DigitalActuator.h>

/**
 * LED Actuator
 *
 * Turn on LED when enabled
 */
class LedActuator : public DigitalActuator {
  public:
  
  /**
    * Constructor
    *
    * @param pin The Digital Output pin
    */  
    LedActuator(byte pin) : DigitalActuator(pin) {}
    
};

#endif //_LED_ACTUATOR_H
