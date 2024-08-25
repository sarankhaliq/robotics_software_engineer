#include "task1.h"

// Initializing Attributes of HUSKY BOt in constructor
husky_bot::Robot::Robot(string name_r, string speed_r, string weight_r,
                        string size_r, int nsensors_r)
    : name(name_r), speed(speed_r), weight(weight_r), size(size_r),
      num_of_sensors(nsensors_r) {
  cout << "Name of robot: " << name << endl;
  cout << "Speed of robot: " << speed << endl;
  cout << "Weight of robot: " << weight << endl;
  cout << "Size of robot: " << size << endl;
  cout << "Number of sensors: " << num_of_sensors << endl;
}
// Class Method for moving HUSKY Backward
void husky_bot::Robot::moveBackward() {
  cout << name << " is moving Backward" << endl;
}
// Class Method for moving HUSKY forward
void husky_bot::Robot::moveForward() {
  cout << name << " is moving Forward" << endl;
}
// Class Method for stoping HUSKY
void husky_bot::Robot::stop() { cout << name << " is stopped" << endl; }

// Initializing Attributes of Turtlebot in constructor
turtle_bot::Robot::Robot(string name_r, string speed_r, string weight_r,
                         string size_r, int nsensors_r)
    : name(name_r), speed(speed_r), weight(weight_r), size(size_r),
      num_of_sensors(nsensors_r) {
  cout << "Name of robot: " << name << endl;
  cout << "Speed of robot: " << speed << endl;
  cout << "Weight of robot: " << weight << endl;
  cout << "Size of robot: " << size << endl;
  cout << "Number of sensors: " << num_of_sensors << endl;
}
// Class Method for moving turtlebot backward
void turtle_bot::Robot::moveBackward() {
  cout << name << " is moving Backward" << endl;
}
// Class Method for moving turtlebot forward
void turtle_bot::Robot::moveForward() {
  cout << name << " is moving Forward" << endl;
}
// Class Method for stoping turtlebot
void turtle_bot::Robot::stop() { cout << name << " is stopped" << endl; }

// Initializing Attributes of SIMBOT in constructor
sim_bot::Robot::Robot(string name_r, string speed_r, string weight_r,
                      string size_r, int nsensors_r)
    : name(name_r), speed(speed_r), weight(weight_r), size(size_r),
      num_of_sensors(nsensors_r) {
  cout << "Name of robot: " << name << endl;
  cout << "Speed of robot: " << speed << endl;
  cout << "Weight of robot: " << weight << endl;
  cout << "Size of robot: " << size << endl;
  cout << "Number of sensors: " << num_of_sensors << endl;
}
// Class Method for moving SIMBOT backward
void sim_bot::Robot::moveBackward() {
  cout << name << " is moving Backward" << endl;
}
// Class Method for moving SIMBOT forward
void sim_bot::Robot::moveForward() {
  cout << name << " is moving Forward" << endl;
}
// Class Method for stoping SIMBOT
void sim_bot::Robot::stop() { cout << name << " is stopped" << endl; }