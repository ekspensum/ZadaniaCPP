#include "mammal.h"

Mammal::Mammal()
{

}

Mammal::Mammal(int ilenog, bool kopytne, QString nazwa, double maxpredkosc, int maxwaga, bool drapieznik)
{
    this->nazwa=nazwa;
    this->maxpredkosc=maxpredkosc;
    this->maxwaga=maxwaga;
    this->drapieznik=drapieznik;
    this->ilenog=ilenog;
    this->kopytne=kopytne;
}

void Mammal::toString()
{
    cout<< QString("Klasa Mammal. Nazwa: %1, Max predkosc: %2, Max waga: %3, Max nog: %4").arg(nazwa).arg(maxpredkosc).arg(maxwaga).arg(ilenog).toStdString()<<endl;
}
