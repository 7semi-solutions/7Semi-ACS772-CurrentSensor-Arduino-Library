#ifndef ACS772_CURRENTSENSOR_H
#define ACS772_CURRENTSENSOR_H

#include <Arduino.h>

class ACS772_CurrentSensor {
  public:
    ACS772_CurrentSensor(uint8_t analogPin, float sensitivity = 0.04, float vRef = 2.5);
    float readCurrent(); // Returns current in Amperes
  private:
    uint8_t _analogPin;
    float _sensitivity;
    float _vRef;
};

#endif
