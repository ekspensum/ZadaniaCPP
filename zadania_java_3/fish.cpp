#include "fish.h"

Fish::Fish()
{

}

Fish::Fish(int ilepletw, bool pecherzplawny, QString nazwa, double maxpredkosc, int maxwaga, bool drapieznik)
{
    this->nazwa=nazwa;
    this->maxpredkosc=maxpredkosc;
    this->maxwaga=maxwaga;
    this->drapieznik=drapieznik;
    this->ilepletw=ilepletw;
    this->pecherzplawny=pecherzplawny;
}

void Fish::toString()
{
    cout<< QString("Klasa Fish. Nazwa: %1, Max predkosc: %2, Max waga: %3, Max pletw: %4").arg(nazwa).arg(maxpredkosc).arg(maxwaga).arg(ilepletw).toStdString()<<endl;
}
