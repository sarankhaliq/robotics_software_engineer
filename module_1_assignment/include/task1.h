#ifndef MODULE1TASK1_H
#define MODULE1TASK1_H

#include <iostream>

using namespace std;
// Namespace for Husky RObot
namespace husky_bot {

// Defining Class of RObot
class Robot {

  // Defining Class Atrributes
private:
  string name;
  string speed;
  string weight;
  string size;
  int num_of_sensors;

  // Defining Class Methods and Constructor to initialize attributes
public:
  Robot(string name_r, string speed_r, string weight_r, string size_r,
        int nsensors_r);
  void moveBackward();
  void moveForward();
  void stop();
};

} // namespace husky_bot

// Namespace for Turtlebot RObot
namespace turtle_bot {
// Defining Class of RObot
class Robot {

  // Defining Class Atrributes
private:
  string name;
  string speed;
  string weight;
  string size;
  int num_of_sensors;

  // Defining Class Methods and Constructor to initialize attributes
public:
  Robot(string name_r, string speed_r, string weight_r, string size_r,
        int nsensors_r);
  void moveBackward();
  void moveForward();
  void stop();
};

} // namespace turtle_bot

// Namespace for Husky RObot
namespace sim_bot {

// Defining Class of RObot
class Robot {

  // Defining Class Atrributes
private:
  string name;
  string speed;
  string weight;
  string size;
  int num_of_sensors;

  // Defining Class Methods and Constructor to initialize attributes
public:
  Robot(string name_r, string speed_r, string weight_r, string size_r,
        int nsensors_r);
  void moveBackward();
  void moveForward();
  void stop();
};

} // namespace sim_bot

#endif // MODULE1TASK1_H