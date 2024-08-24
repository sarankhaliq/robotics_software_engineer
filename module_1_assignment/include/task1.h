#ifndef MODULE1TASK1_H
#define MODULE1TASK1_H

#include <iostream>

using namespace std;

namespace husky_bot {

class Robot {

private:
  string name;
  string speed;
  string weight;
  string size;

public:
  Robot(string name_r, string speed_r, string weight_r, string size_r);
  void moveBackward();
  void moveForward();
  void stop();
};

} // namespace husky_bot

namespace turtle_bot {

class Robot {

private:
  string name;
  string speed;
  string weight;
  string size;

public:
  Robot(string name_r, string speed_r, string weight_r, string size_r);
  void moveBackward();
  void moveForward();
  void stop();
};

} // namespace turtle_bot

namespace sim_bot {

class Robot {

private:
  string name;
  string speed;
  string weight;
  string size;

public:
  Robot(string name_r, string speed_r, string weight_r, string size_r);
  void moveBackward();
  void moveForward();
  void stop();
};

} // namespace sim_bot

#endif // MODULE1TASK1_H