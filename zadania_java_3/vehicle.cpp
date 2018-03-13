#include "vehicle.h"

Vehicle::Vehicle(QString engine, int numberOfWheels)
{
    this->engine=engine;
    this->numberOfWheels=numberOfWheels;
}
void Vehicle::startEngine()
{
    cout<< "Engine starts. Brum brum brum"<<endl;
}
