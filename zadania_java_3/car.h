#ifndef CAR_H
#define CAR_H
#include "vehicle.h"
//#include <iostream>
//#include <QString>

using namespace std;

class Car : public Vehicle
{
    const static int NUMBER_OF_WHEELS=4;

public:
    Car(QString engine);
    void startEngine();
    virtual void refuel(double nr_liters);
};

#endif // CAR_H
