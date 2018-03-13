#include "Firma.h"

Firma::Firma()
{
    //ctor
    //wyswietl();
}

Firma::~Firma()
{
    //dtor
}

Firma::Firma(const Firma& other)
{
    //copy ctor
}

void Firma::wyswietl(Pracownik* pk, string i, string n)
{
    pk->setImie(i);
    pk->setNazwisko(n);
    pk->wypisz();
}
