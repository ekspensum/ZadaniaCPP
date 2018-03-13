#ifndef LISTA_H
#define LISTA_H
#include <iostream>
#include <vector>

using namespace std;

class Lista
{
    public:
        Lista();
        virtual ~Lista();
        void dodajElement(int l);
        int znajdz(int l);
        void wyszukaj(int l);
        void pisz();
        void usunPierwszy(int l);
        void usunPowtorzenia();
        void ileElementow();

    protected:

    private:
        const int pojemnosc=10;
        vector<int> liczby;// {vector<int>(pojemnosc)};
        int rozmiar;
};

#endif // LISTA_H
