#ifndef FIRMA_H
#define FIRMA_H
#include <iostream>
#include "Pracownik.h"

using namespace std;

class Pracownik;

class Firma
{
    public:
        Firma();
        virtual ~Firma();
        Firma(const Firma& other);
        Pracownik pr;
        Pracownik pr1 = Pracownik("Anatol");
        //Pracownik pr2(string i, string n);
        Pracownik pr2 = Pracownik("Romuald", "Gwiazdowski");
        //Pracownik pr3(string i, string n, int w);
        Pracownik pr3 = Pracownik("Stefa", "Mazurska", 37);
        Pracownik* wpr3 = &pr3;
        void wyswietl(Pracownik* pk, string i, string n);

    protected:

    private:

};

#endif // FIRMA_H
