#include<iostream>

using namespace std;
class Robot{
    public:
     
    int num_sensors;
    void move(){cout<<"Robot is Moving"<<endl;}

};






int main(){
    Robot robot;
    robot.move();
    return 0;
}