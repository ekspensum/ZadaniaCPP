#ifndef FISH_H
#define FISH_H
#include "animal.h"


class Fish : public Animal
{
protected:
    int ilepletw;
    bool pecherzplawny;
public:
    Fish();
    Fish(int,bool, QString, double, int, bool);
    void toString();
};

#endif // FISH_H
