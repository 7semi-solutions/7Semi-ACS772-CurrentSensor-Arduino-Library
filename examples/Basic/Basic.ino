#include <ACS772_CurrentSensor.h>
 
ACS772_CurrentSensor sensor(A0); // Default 40mV/A sensitivity, 2.5V Vref
 
void setup() {
  Serial.begin(115200);
}
 
void loop() {
  float current = sensor.readCurrent();
  Serial.print("Current: ");
  Serial.print(current, 3);
  Serial.println(" A");
  delay(500);
}
