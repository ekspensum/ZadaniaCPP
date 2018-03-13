#include "procesor.h"

Procesor::Procesor(int ilezadan)
{
    this->ilezadan=ilezadan;
    zadania = new Zadanie * [ilezadan];
}

void Procesor::dodajZadanie(Zadanie *z)
{
    if(ilemam>=ilezadan)
        cout<< "Za duzo zadan - mam juz: "<<ilemam<<endl;
    else {
        zadania[ilemam]=z;
        ilemam++;
    }
}

void Procesor::wykonajZadanie()
{
    for(int i=0; i<ilemam;i++)
        zadania[i]->wykonaj();

    //przy dynamicznej tablicy wskaznikow trzeba kasowac tablice w petli
    for(int i=0; i<ilemam;i++)
        delete [] zadania[i];
}

