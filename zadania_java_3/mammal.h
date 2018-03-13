#ifndef MAMMAL_H
#define MAMMAL_H
#include "animal.h"


class Mammal : public Animal
{
protected:
    int ilenog;
    bool kopytne;
public:
    Mammal();
    Mammal(int, bool, QString, double, int, bool);
    void toString();
};

#endif // MAMMAL_H
