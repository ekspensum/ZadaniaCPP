#ifndef MYNUMBER_H
#define MYNUMBER_H
#include <iostream>
#include <math.h>
#include <time.h>
#include <cstdlib>


using namespace std;

class MyNumber
{
    public:
        MyNumber();
        virtual ~MyNumber();
        MyNumber(const MyNumber& other);
        int getN();
        bool isOdd();
        bool isEven();
        double pierwiastek();
        double potega(MyNumber * x);
        int add(MyNumber * x);
        int subtract(MyNumber * x);


    protected:

    private:
        int n;
};

#endif // MYNUMBER_H
