#ifndef HUMAN_H
#define HUMAN_H
#include "mammal.h"


class Human : public Mammal
{
    QString imie;
    const double przelicz=0.62;
public:
    Human();
    Human(QString imie, int ilenog, bool kopytne, QString nazwa, double maxpredkosc, int maxwaga, bool drapieznik);
    void toString();
};

#endif // HUMAN_H
