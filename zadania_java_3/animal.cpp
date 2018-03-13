#include "animal.h"

Animal::Animal()
{

}

Animal::Animal(QString nazwa, double maxpredkosc, int maxwaga)
{
    this->nazwa=nazwa;
    this->maxpredkosc=maxpredkosc;
    this->maxwaga=maxwaga;
}

void Animal::toString()
{
    cout<< QString("Klasa Animal. Nazwa: %1, Max predkosc: %2, Max waga: %3").arg(nazwa).arg(maxpredkosc).arg(maxwaga).toStdString()<<endl;
}
