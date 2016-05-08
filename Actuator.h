/** @file Timer.h 
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
    Actuator* _actuator;
    
  public:
    ValueActuatorEnable(Actuator* actuator) : _actuator(actuator), Value<bool>() {}

    virtual void persistValue();
};

/**
 *  The Base class of all Actuators. 
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
     * @return nothing
     */  
    virtual void start()=0;
    
    /**
     * start the actuator
     * @return nothing
     */ 
    virtual void stop()=0;
};

#endif //_ACTUATOR_H
