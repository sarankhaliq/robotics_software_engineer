#include "task1.h"

int main() {
  husky_bot::Robot r1("my_bot1", "2m/s", "10kg", "medium");
  r1.moveForward();
  r1.moveBackward();
  r1.stop();

  cout<<" "<<endl;
  turtle_bot::Robot r2("my_bot2", "1m/s", "15kg", "large");
  r2.moveForward();
  r2.moveBackward();
  r2.stop();

  cout<<" "<<endl;
  sim_bot::Robot r3("my_bot3", "0.2m/s", "400g", "miniature");
  r3.moveForward();
  r3.moveBackward();
  r3.stop();

  return 0;
}