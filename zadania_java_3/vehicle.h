#ifndef VEHICLE_H
#define VEHICLE_H
#include <iostream>
#include <QString>

using namespace std;

class Vehicle
{
    int numberOfWheels;
    QString engine;

public:
    Vehicle(QString engine, int numberOfWheels);
    virtual void startEngine();
};

#endif // VEHICLE_H
