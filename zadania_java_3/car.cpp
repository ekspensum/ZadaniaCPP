#include "car.h"

Car::Car(QString engine) : Vehicle(engine, NUMBER_OF_WHEELS)
{

}

void Car::startEngine()
{
    Vehicle::startEngine();
    cout<< "Force driver to fasten seat belts\n";
}

void Car::refuel(double nr_liters)
{
    cout<<QString("Refueled %1 units of fuel").arg(nr_liters).toStdString()<<endl;
}
