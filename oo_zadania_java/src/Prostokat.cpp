#include "Prostokat.h"
#include <math.h>

Prostokat::Prostokat()
{
    //ctor
    this->dl=7;
    this->szer=5;
    //dl=7;
    //szer=5;
}
Prostokat::Prostokat(const Prostokat &p)
{
    this->dl = p.dl;
    this->szer = p.szer;
    cout<<p.dl<<endl;
    cout<<p.szer<<endl;
}

Prostokat::~Prostokat()
{
    //dtor
}
int Prostokat::pole()
{
    return this->dl*this->szer;
}
int Prostokat::obwod(int d, int s)
{
    this->dl=d;
    this->szer=s;
    return (dl+szer)*2;
}
double Prostokat::przekatna()
{
    cout<< "Dlugosc: "<<dl<<endl;
    cout<< "Szerokosc: "<<szer<<endl;
    cout<<"Przekatna wynosi: "<<sqrt(dl*dl+szer*szer)<<endl;
}
