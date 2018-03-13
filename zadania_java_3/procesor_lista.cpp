#include "procesor_lista.h"

Procesor_lista::Procesor_lista(int ilezadan)
{
    this->ilezadan=ilezadan;
}

void Procesor_lista::dodajZadanie(Zadanie *z)
{
    if(ilemam>=ilezadan)
        cout<< "Za duzo zadan - mam juz: "<<ilemam<<endl;
    else {
        zadania.append(z);
        ilemam++;
    }
}

void Procesor_lista::wykonajZadanie()
{
    for(int i=0; i<ilemam;i++)
        zadania.at(i)->wykonaj();
}

void Procesor_lista::usunZadania()
{
    zadania.clear();
    ilemam=0;
    cout<< "Usunieto zadania.\nZadan do wykonania: "<<ilemam<<endl;
}
