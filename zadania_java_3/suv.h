#ifndef SUV_H
#define SUV_H
#include "car.h"

//using namespace std;

class SUV : public Car
{
public:
    SUV(QString engine);
    void wlacz4x4();
};

#endif // SUV_H
