#ifndef _ACTUATOR_H
  #define _ACTUATOR_H
  
#include <Arduino.h>
#include <Value.h>

class Actuator;

class ValueActuatorEnable : public Value<bool> {
  protected:
    Actuator* _actuator;
    
  public:
    ValueActuatorEnable(Actuator* actuator) : _actuator(actuator), Value<bool>() {}

    virtual void persistValue();
};

class Actuator {
  public:
    //Value<bool> enabled;
    ValueActuatorEnable* enabled;

    Actuator();
    
    ~Actuator()  {
      delete enabled;
    }
    
    virtual void start()=0;
    virtual void stop()=0;
};

#endif //_ACTUATOR_H
