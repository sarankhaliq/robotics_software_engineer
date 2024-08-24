#include "task1.h"

// Husky Bots
husky_bot::Robot::Robot(string name_r, string speed_r, string weight_r,
                        string size_r)
    : name(name_r), speed(speed_r), weight(weight_r), size(size_r) {
  cout << "Name of robot: " << name << endl;
  cout << "Speed of robot: " << speed << endl;
  cout << "Weight of robot: " << weight << endl;
  cout << "Size of robot: " << size << endl;
}

void husky_bot::Robot::moveBackward() {
  cout << name << " is moving Backward" << endl;
}
void husky_bot::Robot::moveForward() {
  cout << name << " is moving Forward" << endl;
}
void husky_bot::Robot::stop() { cout << name << " is stopped" << endl; }

// Turtle_bot
turtle_bot::Robot::Robot(string name_r, string speed_r, string weight_r,
                        string size_r)
    : name(name_r), speed(speed_r), weight(weight_r), size(size_r) {
  cout << "Name of robot: " << name << endl;
  cout << "Speed of robot: " << speed << endl;
  cout << "Weight of robot: " << weight << endl;
  cout << "Size of robot: " << size << endl;
}

void turtle_bot::Robot::moveBackward() {
  cout << name << " is moving Backward" << endl;
}
void turtle_bot::Robot::moveForward() {
  cout << name << " is moving Forward" << endl;
}
void turtle_bot::Robot::stop() { cout << name << " is stopped" << endl; }

//sim_bot
// Turtle_bot
sim_bot::Robot::Robot(string name_r, string speed_r, string weight_r,
                        string size_r)
    : name(name_r), speed(speed_r), weight(weight_r), size(size_r) {
  cout << "Name of robot: " << name << endl;
  cout << "Speed of robot: " << speed << endl;
  cout << "Weight of robot: " << weight << endl;
  cout << "Size of robot: " << size << endl;
}

void sim_bot::Robot::moveBackward() {
  cout << name << " is moving Backward" << endl;
}
void sim_bot::Robot::moveForward() {
  cout << name << " is moving Forward" << endl;
}
void sim_bot::Robot::stop() { cout << name << " is stopped" << endl; }