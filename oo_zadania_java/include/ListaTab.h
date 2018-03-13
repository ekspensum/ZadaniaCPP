#ifndef LISTATAB_H
#define LISTATAB_H
#include <iostream>

using namespace std;

class ListaTab
{
    public:
        ListaTab();
        virtual ~ListaTab();
        void dodajElement(int a);
        int znajdz(int a);
        void pisz();
        void usunPierwszy(int a);
        void usunPowtorzenia();
        void wyszukaj(int a);

    protected:

    private:
        int pojemnosc=10;
        int rozmiar=0;
        int * liczby = new int [pojemnosc];
};

#endif // LISTATAB_H
