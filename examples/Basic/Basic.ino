#include <ACS772_CurrentSensor.h>

// Sensor on A0
ACS772_CurrentSensor sensor(A0);

// Configurable values
float sensitivity = 0.04; // 40mV/A
float vRef = 2.5;         // Reference voltage (depends on supply and calibration)
float vcc = 5.0;          // ADC reference voltage (use 3.3 for ESP32, STM32, etc.)

void setup() {
  Serial.begin(9600);
  sensor.begin(sensitivity, vRef, vcc);
}

void loop() {
  float current = sensor.readCurrent();
  Serial.print("Current: ");
  Serial.print(current, 2);
  Serial.println(" A");
  delay(500);
}
