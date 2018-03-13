#ifndef PROCESOR_H
#define PROCESOR_H
#include <iostream>
#include <QString>
#include <zadanie.h>

using namespace std;

class Procesor
{
    Zadanie **zadania;
    int ilemam=0;
    int ilezadan;
public:
    Procesor(int ilezadan);
    void dodajZadanie(Zadanie *z);
    void wykonajZadanie();


};

#endif // PROCESOR_H
