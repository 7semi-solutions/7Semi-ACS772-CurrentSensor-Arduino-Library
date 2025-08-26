#include "ACS772_CurrentSensor.h"

ACS772_CurrentSensor::ACS772_CurrentSensor(uint8_t analogPin, float vcc, float zeroCurrentVoltage, float sensitivity) {
    _analogPin = analogPin;
    _vcc = vcc;
    _zeroCurrentVoltage = zeroCurrentVoltage;
    _sensitivity = sensitivity;
}

float ACS772_CurrentSensor::readCurrent(uint8_t samples) {
    long total = 0;
    for (uint8_t i = 0; i < samples; i++) {
        total += analogRead(_analogPin);
        delay(5);
    }

    float avgADC = total / (float)samples;
    float voltage = (avgADC / 1023.0) * _vcc;
    float current = (voltage - _zeroCurrentVoltage) / _sensitivity;
    return current;
}
