#include "goldfish.h"

GoldFish::GoldFish()
{

}

GoldFish::GoldFish(QString imie, int ilepletw, bool pecherzplawny, QString nazwa, double maxpredkosc, int maxwaga, bool drapieznik)
{
    this->nazwa=nazwa;
    this->maxpredkosc=maxpredkosc;
    this->maxwaga=maxwaga;
    this->drapieznik=drapieznik;
    this->ilepletw=ilepletw;
    this->pecherzplawny=pecherzplawny;
    this->imie=imie;
}

void GoldFish::toString()
{
    cout<< QString("Klasa GoldFish. Nazwa: %1, Max predkosc: %2, Max waga: %3, Drapieznik: %4, Ile pletw: %5, Pecherz plawny: %6, Imie: %7").arg(nazwa).arg(maxpredkosc).arg(maxwaga).arg(drapieznik).arg(ilepletw).arg(pecherzplawny).arg(imie).toStdString()<<endl;
}
