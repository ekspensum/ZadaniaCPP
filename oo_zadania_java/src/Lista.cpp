#include "Lista.h"

Lista::Lista()
{
    //ctor
    this->pojemnosc;
    this->rozmiar++;
}

Lista::~Lista()
{
    //dtor
}
void Lista::dodajElement(int l)
{
    if(liczby.size()<this->pojemnosc)
        this->liczby.push_back(l);
    else cout<< "Lista jest pelna."<<endl;
}
int Lista::znajdz(int l)
{
    for(size_t i=0; i<this->liczby.size(); i++)
    {
        if(this->liczby[i]==l)
        {
            return i;
            break;
        }
    }
    return -1;

}
void Lista::wyszukaj(int l)
{
    if(znajdz(l)>-1) cout<< "Znaleziono liczbe: "<<liczby[znajdz(l)]<< " o indeksie: "<< znajdz(l)<< " - pierwsze wystapienie."<<endl;
    else cout << "Nie znaloziono szukanej liczby."<<endl;
}
void Lista::usunPierwszy(int l)
{
    int t = znajdz(l);
    if (t>-1)
    {
        this->liczby.erase(liczby.begin()+t);
        cout<< "Usunieto liczbe: "<<l<<" o indeksie: "<<t<<endl;
    }
    else cout<< "Nie znaleziono podanej liczby."<< endl;

}
void Lista::ileElementow()
{
    cout<<"Elementow: "<<this->liczby.size()<<endl;
}
void Lista::pisz()
{
    for(size_t i=0; i<this->liczby.size(); i++)
        cout<<i<< ". "<<this->liczby[i]<<endl;
}
void Lista::usunPowtorzenia()
{

    for(size_t i=0; i<liczby.size(); i++)
    {
        int n=0;
        for(size_t j=0; j<liczby.size(); j++)
        {
            if(this->liczby[i]==this->liczby[j]) n++;
            if(n==2)
            {
                this->liczby.erase(liczby.begin()+i);
                n--;
            }
        }
    }

}
