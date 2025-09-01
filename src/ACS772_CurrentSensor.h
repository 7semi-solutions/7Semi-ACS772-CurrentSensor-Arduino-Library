#ifndef ACS772_CurrentSensor_h
#define ACS772_CurrentSensor_h

#include "Arduino.h"

class ACS772_CurrentSensor {
  public:
    ACS772_CurrentSensor(uint8_t analogPin);
    void begin(float sensitivity, float vRef, float vcc);
    void setSensitivity(float sensitivity);
    void setVref(float vRef);
    void setVcc(float vcc);
    float readCurrent();

  private:
    uint8_t _analogPin;
    float _sensitivity;
    float _vRef;
    float _vcc;
};

#endif
