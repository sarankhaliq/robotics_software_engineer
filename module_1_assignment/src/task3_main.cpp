#include "task3.h"

int main() {
  // Creating TemperatureSensor objects with different data types
  TemperatureSensor<double> T1(20);
  TemperatureSensor<string> T2("20");
  TemperatureSensor<char> T3('c');

  // Calibrating, initializing, and reading the first temperature sensor
  T1.caliberateSensor();
  T1.initializeSensor();
  T1.readSensor();

  // Calibrating, initializing, and reading the second temperature sensor
  T2.caliberateSensor();
  T2.initializeSensor();
  T2.readSensor();

  // Calibrating, initializing, and reading the third temperature sensor
  T3.caliberateSensor();
  T3.initializeSensor();
  T3.readSensor();

  // Creating DistanceSensor objects with different data types
  DistanceSensor<double> D1(100);
  DistanceSensor<string> D2("100");
  DistanceSensor<char> D3('c');

  // Calibrating, initializing, and reading the first distance sensor
  D1.caliberateSensor();
  D1.initializeSensor();
  D1.readSensor();

  // Calibrating, initializing, and reading the second distance sensor
  D2.caliberateSensor();
  D2.initializeSensor();
  D2.readSensor();

  // Calibrating, initializing, and reading the third distance sensor
  D3.caliberateSensor();
  D3.initializeSensor();
  D3.readSensor();

  return 0;
}
