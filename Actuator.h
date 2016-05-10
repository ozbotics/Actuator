/** @file Actuator.h 
  *  Copyright (c) 2016 Ozbotics 
  *  Distributed under the MIT license (see LICENSE)
  */ 
#ifndef _ACTUATOR_H
  #define _ACTUATOR_H
  
#include <Arduino.h>
#include <Value.h>

class Actuator;

/**
 *  Value interface to Actuator class. 
 *  Provides method to start|stop Actuator by calling setValue(true|false)
 */
class ValueActuatorEnable : public Value<bool> {
  protected:
    Actuator* _actuator; /**< protected variable _actuator  The Actuator */ 
    
  public:
  
  /**
    * Constructor
    * @param actuator The Actuator
    */
    ValueActuatorEnable(Actuator* actuator) : _actuator(actuator), Value<bool>() {}

   /**
    * persist the current value to the actual actuator
    * @todo - maybe simply changing the value should 'persist' to the actuator
    */  
    virtual void persistValue();
};

/**
 * The Base class of all Actuators. 
 * 
 * Actuators can be started and stopped
 */
class Actuator {
  public:
    ValueActuatorEnable* enabled; /**< public variable enabled Value interface */ 

   /**
    *  Constructor
    */
    Actuator();
    
   /**
    *  Destructor
    */
    ~Actuator()  {
      delete enabled;
    }
    
   /**
    * start the actuator
    */  
    virtual void start()=0;
    
   /**
    * stop the actuator
    */ 
    virtual void stop()=0;
};

#endif //_ACTUATOR_H
