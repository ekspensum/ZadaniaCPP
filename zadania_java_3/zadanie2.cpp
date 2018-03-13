#include "zadanie2.h"

Zadanie2::Zadanie2(double val)
{
    this->val=val;
}

void Zadanie2::wykonaj()
{
    cout<< "log ("<<val<<") = "<<log(val)<<endl;
}
