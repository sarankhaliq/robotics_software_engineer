#include <iostream>

using namespace std;
// Creating Namespace for temperature sensor
namespace Robot::TemperatureSensor {
void caliberateSensor() {
  cout << "Temperature sensor is caliberated" << endl;
} // dedicated functions for Temperature sensors
void initializeSensor() { cout << "Temperature Sensor is initialized" << endl; }
void readSensor() {
  cout << "Reading Temperature: " << 20 << " deg Celcius" << endl;
}
} // namespace Robot::TemperatureSensor
// Creating namespace for distance sensor
namespace Robot::DistanceSensor {
void caliberateSensor() {
  cout << "Distance sensor is caliberated" << endl;
} // dedicated functions for Temperature sensors
void initializeSensor() { cout << "Distance Sensor is initialized" << endl; }
void readSensor() { cout << "Reading Distance: " << 100 << "cm" << endl; }
} // namespace Robot::DistanceSensor

int main() {
  Robot::DistanceSensor::caliberateSensor(); // Using Specific  Temperature
                                             // sensor and caliberate function
  Robot::DistanceSensor::initializeSensor(); // Using Specific  Temperature
                                             // sensor and insitialize  function
  Robot::DistanceSensor::readSensor(); // Using Specific  Temperature sensor and
                                       // get reading function

  cout << endl;
  Robot::TemperatureSensor::caliberateSensor(); // Using Specific  Temperature
                                                // sensor and caliberate
                                                // function
  Robot::TemperatureSensor::initializeSensor(); // Using Specific  Temperature
                                                // sensor and initializes
                                                // function
  Robot::TemperatureSensor::readSensor(); // Using Specific  Temperature sensor
                                          // and get reading function
  return 0;
}