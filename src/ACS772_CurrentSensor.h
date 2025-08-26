#ifndef ACS772_CurrentSensor_H
#define ACS772_CurrentSensor_H

#include "Arduino.h"

class ACS772_CurrentSensor {
public:
    ACS772_CurrentSensor(uint8_t analogPin, float vcc = 5.0, float zeroCurrentVoltage = 2.5, float sensitivity = 0.04);
    float readCurrent(uint8_t samples = 10);

private:
    uint8_t _analogPin;
    float _vcc;
    float _zeroCurrentVoltage;
    float _sensitivity;
};

#endif
