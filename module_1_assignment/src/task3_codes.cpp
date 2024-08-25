#include "task3.h"

// Constructor for TemperatureSensor template class
template <typename T>
TemperatureSensor<T>::TemperatureSensor(T reading) : temp_reading(reading) {
  cout << endl;
}

// Method to calibrate the temperature sensor
template <typename T> void TemperatureSensor<T>::caliberateSensor() {
  cout << "Temperature sensor is calibrated" << endl;
}

// Method to initialize the temperature sensor
template <typename T> void TemperatureSensor<T>::initializeSensor() {
  cout << "Temperature Sensor is initialized" << endl;
}

// Method to read the temperature sensor
template <typename T> void TemperatureSensor<T>::readSensor() {
  cout << "Temperature: " << temp_reading << " deg Celsius" << endl;
}

// Constructor for DistanceSensor template class
template <typename T>
DistanceSensor<T>::DistanceSensor(T reading) : dist_reading(reading) {
  cout << endl;
}

// Method to calibrate the distance sensor
template <typename T> void DistanceSensor<T>::caliberateSensor() {
  cout << "Distance sensor is calibrated" << endl;
}

// Method to initialize the distance sensor
template <typename T> void DistanceSensor<T>::initializeSensor() {
  cout << "Distance Sensor is initialized" << endl;
}

// Method to read the distance sensor
template <typename T> void DistanceSensor<T>::readSensor() {
  cout << "Sensor Value: " << dist_reading << " cm" << endl;
}

// Explicit template instantiation for TemperatureSensor with different types
template class TemperatureSensor<double>;
template class TemperatureSensor<string>;
template class TemperatureSensor<char>;

// Explicit template instantiation for DistanceSensor with different types
template class DistanceSensor<double>;
template class DistanceSensor<string>;
template class DistanceSensor<char>;
