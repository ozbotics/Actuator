#include "DigitalActuator.h"

void DigitalActuator::start() {
  _setEnabled(true);
}

void DigitalActuator::stop() {
  _setEnabled(false);
}
