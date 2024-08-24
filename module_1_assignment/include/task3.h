#ifndef MODULE1TASK3_H
#define MODULE1TASK3_H

#include <iostream>

using namespace std;

template <typename T>

class TemperatureSensor{
    private:
    T temp_reading;

    public:
    TemperatureSensor(T reading);
    void caliberateSensor();
    void initializeSensor();
    void readSensor();
};

template <typename T>
class DistanceSensor{
    private:
    T dist_reading;

    public:
    DistanceSensor(T reading);
    void caliberateSensor();
    void initializeSensor();
    void readSensor();
};




#endif // MODULE1TASK3_H