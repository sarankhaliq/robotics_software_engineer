#include "task3.h"

int main(){
    TemperatureSensor<double> T1(20);
    TemperatureSensor<string> T2("20");
    TemperatureSensor<char> T3('c');
   
    T1.caliberateSensor();
    T1.initializeSensor();
    T1.readSensor();

    T2.caliberateSensor();
    T2.initializeSensor();
    T2.readSensor();

    T3.caliberateSensor();
    T3.initializeSensor();
    T3.readSensor();

    DistanceSensor<double> D1(100);
    DistanceSensor<string> D2("100");
    DistanceSensor<char> D3('c');
   
    D1.caliberateSensor();
    D1.initializeSensor();
    D1.readSensor();

    D2.caliberateSensor();
    D2.initializeSensor();
    D2.readSensor();

    D3.caliberateSensor();
    D3.initializeSensor();
    D3.readSensor();


    return 0;
}