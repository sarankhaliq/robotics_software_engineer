#include<iostream>

using namespace std;

namespace Robot::TemperatureSensor{
    void caliberateSensor(){cout<<"Temperature sensor is caliberated"<<endl;}
    void initializeSensor(){cout<<"Temperature Sensor is initialized"<<endl;}
    void readSensor(){cout<<"Reading Temperature: "<<20<<" deg Celcius"<<endl;}
}
namespace Robot::DistanceSensor{
    void caliberateSensor(){cout<<"Distance sensor is caliberated"<<endl;}
    void initializeSensor(){cout<<"Distance Sensor is initialized"<<endl;}
    void readSensor(){cout<<"Reading Distance: "<<100<<"cm"<<endl;}
}

int main(){
    Robot::DistanceSensor::caliberateSensor();
    Robot::DistanceSensor::initializeSensor();
    Robot::DistanceSensor::readSensor();

    cout<<endl;
    Robot::TemperatureSensor::caliberateSensor();
    Robot::TemperatureSensor::initializeSensor();
    Robot::TemperatureSensor::readSensor();
    return 0;
}