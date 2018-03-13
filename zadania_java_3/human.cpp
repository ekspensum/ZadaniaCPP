#include "human.h"

Human::Human()
{

}

Human::Human(QString imie, int ilenog, bool kopytne, QString nazwa, double maxpredkosc, int maxwaga, bool drapieznik)
{
    this->nazwa=nazwa;
    this->maxpredkosc=maxpredkosc;
    this->maxwaga=maxwaga;
    this->drapieznik=drapieznik;
    this->ilenog=ilenog;
    this->kopytne=kopytne;
    this->imie=imie;
}

void Human::toString()
{
    cout<< QString("Klasa Human. Nazwa: %1, Max predkosc: %2km/h, tj. %3MPH, Max waga: %4, Drapieznik: %5, Ile nog: %6, Kopytne: %7, Imie: %8").arg(nazwa).arg(maxpredkosc).arg(przelicz*maxpredkosc).arg(maxwaga).arg(drapieznik).arg(ilenog).arg(kopytne).arg(imie).toStdString()<<endl;
}
