/** @file DigitalActuator.h 
  *  Copyright (c) 2016 Ozbotics 
  *  Distributed under the MIT license (see LICENSE)
  */ 
#ifndef _DIGITAL_ACTUATOR_H
  #define _DIGITAL_ACTUATOR_H
  
#include <Arduino.h>

#include <Actuator.h>

/**
 * The base class of all Digital Actuators
 *
 * Sounds buzzer when enabled
 */
class DigitalActuator : public Actuator {
  protected:
    byte _pin;  /**< protected variable _pin The digital output pin that the actuator is connected to */ 
    
   /**
    * update the value and start the actuator
    *
    * @param _enabled start/stop the actuator
   */ 
    inline void _setEnabled(bool _enabled) {
      enabled->setValue(_enabled);
      digitalWrite(_pin, _enabled);
    }
    
  public:
   /**
    * Constructor
    *
    * @param pin The Output pin
    */
    DigitalActuator(byte pin) : _pin(pin), Actuator() {
      pinMode(_pin, OUTPUT); 
      _setEnabled(0);
    }
    
   /**
    * start the actuator
    */  
    virtual void start();
    
   /**
    * stop the actuator
    */ 
    virtual void stop();

};


#endif //_DIGITAL_ACTUATOR_H
