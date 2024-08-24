#include "task3.h"

    template <typename T>
    TemperatureSensor<T>::TemperatureSensor(T reading): temp_reading(reading){cout<<endl;}
    
    template <typename T>    
    void TemperatureSensor<T>::caliberateSensor(){cout<<"Temperature sensor is caliberated"<<endl;}

    template <typename T>   
    void TemperatureSensor<T>::initializeSensor(){cout<<"Temperature Sensor is initialized"<<endl;}

    template <typename T>
    void TemperatureSensor<T>::readSensor(){cout<<"Temperature: "<< temp_reading<<"deg celcius"<<endl;}



    template <typename T>
    DistanceSensor<T>::DistanceSensor(T reading): dist_reading(reading){cout<<endl;}

    template <typename T>
    void DistanceSensor<T>::caliberateSensor(){cout<<"Distance sensor is caliberated"<<endl;}

    template <typename T>
    void DistanceSensor<T>::initializeSensor(){cout<<"Distance Sensor is initialized"<<endl;}

    template <typename T>
    void DistanceSensor<T>::readSensor(){cout<<"Sensor Value: "<< dist_reading<<"cm"<<endl;}


template class TemperatureSensor<double>;
template class TemperatureSensor<string>;
template class TemperatureSensor<char>;

template class DistanceSensor<double>;
template class DistanceSensor<string>;
template class DistanceSensor<char>;