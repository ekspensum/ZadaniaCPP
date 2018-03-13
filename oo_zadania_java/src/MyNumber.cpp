#include "MyNumber.h"

MyNumber::MyNumber()
{
    //ctor
    //srand(time(NULL));
    this->n = -10 + rand()%20+1;
}

MyNumber::~MyNumber()
{
    //dtor
}

MyNumber::MyNumber(const MyNumber& other)
{
    //copy ctor
}
int MyNumber::getN()
{
    return this->n;
}
bool MyNumber::isOdd()
{
    if (this->n%2!=0) return 1;
    else return 0;
}
bool MyNumber::isEven()
{
    if (this->n%2==0) return 1;
    else return 0;
}
double MyNumber::pierwiastek()
{
    return sqrt(this->n);
}
double MyNumber::potega(MyNumber *x)
{
    return pow(this->n, x->getN());
}
int MyNumber::add(MyNumber* x)
{
    return this->n+x->getN();
}
int MyNumber::subtract(MyNumber* x)
{
    return this->n - x->getN();
}
