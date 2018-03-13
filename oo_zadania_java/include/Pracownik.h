#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include <iostream>
#include <time.h>
#include <cstdlib>


using namespace std;


class Pracownik
{
    public:
        Pracownik();
        Pracownik(string i);
        Pracownik(string i, string n);
        Pracownik(string i, string n, int w);
        virtual ~Pracownik();
        Pracownik(const Pracownik& other);
        void setImie(string i);
        void setNazwisko(string i);
        void setWiek(int w);
        string getImie();
        void wypisz();

    protected:

    private:
        string imie, nazwisko;
        int wiek;
        bool plec;
};

#endif // PRACOWNIK_H
