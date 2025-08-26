#include "ACS772_CurrentSensor.h"

ACS772_CurrentSensor::ACS772_CurrentSensor(uint8_t analogPin, float sensitivity, float vRef) {
  _analogPin = analogPin;
  _sensitivity = sensitivity;
  _vRef = vRef;
}

float ACS772_CurrentSensor::readCurrent() {
  long total = 0;

  for (int i = 0; i < 50; i++) {
    total += analogRead(_analogPin);
    delayMicroseconds(100); // Optional: Small delay for ADC stability
  }

  float averageAdc = total / 50.0;
  float voltage = (averageAdc / 1023.0) * 5.0;
  return (voltage - _vRef) / _sensitivity;
}
