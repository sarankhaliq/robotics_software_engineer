#ifndef MODULE1TASK3_H
#define MODULE1TASK3_H

#include <iostream>

using namespace std;

// Template class for TemperatureSensor
template <typename T> class TemperatureSensor {
private:
  T temp_reading; // Variable to store temperature reading

public:
  // Constructor to initialize temperature sensor with a reading
  TemperatureSensor(T reading);

  // class method to calibrate the temperature sensor
  void caliberateSensor();

  // class method to initialize the temperature sensor
  void initializeSensor();

  // class method to read the temperature sensor
  void readSensor();
};

// Template class for DistanceSensor
template <typename T> class DistanceSensor {
private:
  T dist_reading; // Variable to store distance reading

public:
  // Constructor to initialize distance sensor with a reading
  DistanceSensor(T reading);

  // class method to calibrate the distance sensor
  void caliberateSensor();

  // class methpd to initialize the distance sensor
  void initializeSensor();

  // class method to read the distance sensor
  void readSensor();
};

#endif // MODULE1TASK3_H