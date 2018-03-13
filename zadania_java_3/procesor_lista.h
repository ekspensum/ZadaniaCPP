#ifndef PROCESOR_LISTA_H
#define PROCESOR_LISTA_H
#include <iostream>
#include <QString>
#include <zadanie.h>
#include <QList>

using namespace std;

class Procesor_lista
{
    QList<Zadanie *> zadania;
    int ilemam=0;
    int ilezadan;
public:
    Procesor_lista(int);
    void dodajZadanie(Zadanie *z);
    void wykonajZadanie();
    void usunZadania();
};

#endif // PROCESOR_LISTA_H
