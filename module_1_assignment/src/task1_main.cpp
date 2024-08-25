#include "task1.h"

int main() {
  // Creating instance of robot with Husky type with its private properties as
  // argument
  husky_bot::Robot r1("my_bot1", "2m/s", "10kg", "medium", 5);
  r1.moveForward();  // Simulate robot moving forward
  r1.moveBackward(); // Simulate robot moving forward
  r1.stop();         // Simulate robot to Stop

  cout << " " << endl;
  // Creating instance of robot with TURTLEBOT type with its private properties
  // as argument
  turtle_bot::Robot r2("my_bot2", "1m/s", "15kg", "large", 10);
  r2.moveForward();  // Simulate robot moving forward
  r2.moveBackward(); // Simulate robot moving forward
  r2.stop();         // Simulate robot to Stop

  cout << " " << endl;
  // Creating instance of robot with SIMBOT type with its private properties as
  // argument
  sim_bot::Robot r3("my_bot3", "0.2m/s", "400g", "miniature", 5);
  r3.moveForward();  // Simulate robot moving forward
  r3.moveBackward(); // Simulate robot moving forward
  r3.stop();         // Simulate robot to Stop
  return 0;
}