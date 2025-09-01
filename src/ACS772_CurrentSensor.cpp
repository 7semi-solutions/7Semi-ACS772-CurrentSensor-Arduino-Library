#include "ACS772_CurrentSensor.h"

ACS772_CurrentSensor::ACS772_CurrentSensor(uint8_t analogPin) {
  _analogPin = analogPin;
  _sensitivity = 0.1;   // Default 100 mV/A
  _vRef = 2.5;          // Default midpoint voltage
  _vcc = 5.0;           // Default ADC reference
}

void ACS772_CurrentSensor::begin(float sensitivity, float vRef, float vcc) {
  _sensitivity = sensitivity;
  _vRef = vRef;
  _vcc = vcc;
}

void ACS772_CurrentSensor::setSensitivity(float sensitivity) {
  _sensitivity = sensitivity;
}

void ACS772_CurrentSensor::setVref(float vRef) {
  _vRef = vRef;
}

void ACS772_CurrentSensor::setVcc(float vcc) {
  _vcc = vcc;
}

float ACS772_CurrentSensor::readCurrent() {
  long total = 0;

  for (int i = 0; i < 50; i++) {
    total += analogRead(_analogPin);
    delayMicroseconds(100);
  }

  float averageAdc = total / 50.0;
  float voltage = (averageAdc / 1023.0) * _vcc;   // << use user-defined Vcc
  return (voltage - _vRef) / _sensitivity;
}
