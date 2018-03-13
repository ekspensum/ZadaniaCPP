#ifndef ANIMAL_H
#define ANIMAL_H
#include <iostream>
#include <QString>

using namespace std;

class Animal
{
protected:
    QString nazwa;
    double maxpredkosc;
    int maxwaga;
    bool drapieznik;

public:
    Animal();
    Animal(QString,double,int);
    virtual void toString();
};

#endif // ANIMAL_H
