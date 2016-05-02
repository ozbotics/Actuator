#include "Actuator.h"

Actuator::Actuator()  {
  enabled = new  ValueActuatorEnable(this);
}

void ValueActuatorEnable::persistValue() {
  if (this->getValue()) {
    _actuator->start();
  }
  else {
    _actuator->stop();
  }
}
