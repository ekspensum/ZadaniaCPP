#ifndef GOLDFISH_H
#define GOLDFISH_H
#include "fish.h"


class GoldFish : public Fish
{
    QString imie;
public:
    GoldFish();
    GoldFish(QString imie, int ilepletw, bool pecherzplawny, QString nazwa, double maxpredkosc, int maxwaga, bool drapieznik);
    void toString();
};

#endif // GOLDFISH_H
