#include "Forum.h"

Forum::Forum()
{
    //ctor
}

Forum::~Forum()
{
    //dtor
}

void Forum::loguj()
{
    cout<< "Podaj login: \n";
    //cin>>
    this->tN="Ana";
    this->u1.setName(tN);
    cout<< "Podaj plec: \n";
    //cin>>
    this->tS=0;
    this->u1.setSex(tS);
    cout<< "Podaj wiek: \n";
    //cin>>
    this->tW=33;
    this->u1.setAge(tW);
    this->lu.push_back(u1);
}
void Forum::wypisz()
{
    cout<<"Lista zalogowanych: "<<endl;
    for(size_t i=0; i<lu.size(); i++)
    {
        cout<<i<<" "<< lu[i].getName()<<" "<<lu[i].getAge()<<" "<<lu[i].getSex()<<endl;
    }
}
void Forum::ilu_zalog()
{
    cout<< "Liczba zalogowanych userow: "<<lu.size()<<endl;
}
