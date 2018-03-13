#include "Pracownik.h"

Pracownik::Pracownik()
{
    this->imie="Adam";
    this->nazwisko="Kowalski";
    this->wiek=25;
}
Pracownik::Pracownik(string i)
{
    this->imie=i;
    this->nazwisko="Nowak";
    //srand(time(NULL));
    this->wiek=rand()%47+18;

}
Pracownik::Pracownik(string i, string n)
{
    this->imie=i;
    this->nazwisko=n;
    //srand(time(NULL));
    this->wiek = rand()%47 +18;
}
Pracownik::Pracownik(string i, string n, int w)
{
    this->imie=i;
    this->nazwisko=n;
    this->wiek=w;
}

Pracownik::~Pracownik()
{
    //dtor
}

Pracownik::Pracownik(const Pracownik& other)
{
    //copy ctor
}

void Pracownik::setImie(string i)
{
    this->imie=i;
}
void Pracownik::setNazwisko(string n)
{
    this->nazwisko=n;
}
void Pracownik::setWiek(int w)
{
    this->wiek=w;
}

string Pracownik::getImie()
{
    return imie;
}

void Pracownik::wypisz()
{
    cout<< "Imie: "<<imie<< " Nazwisko: "<<nazwisko<< " Wiek: "<<wiek<<endl;
}
