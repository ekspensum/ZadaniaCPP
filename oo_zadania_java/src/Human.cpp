#include "Human.h"

Human::Human(int w)
{
    //ctor
    waga=w;
    this->plec=0;
}

Human::~Human()
{
    //dtor
}

int Human::getWaga()
{
    //cout<<waga<<endl;
    return waga;
}

void Human::setWaga(int w)
{
    if(w>50 && w<100) waga=w;
    else cout<<"Przedzial tylko 50-100"<<endl;
}

void Human::getWiek()
{
    cout<<"Wiek wynosi: "<<wiek<<endl;
}
void Human::setWiek()
{
    wiek=35;
}
bool Human::getPlec()
{
    return plec;
}
void Human::setPlec(bool p)
{
    this->plec=p;
}
