#ifndef LZESP_H
#define LZESP_H
#include <iostream>
#include <QString>

using namespace std;

class LZesp
{
double re;
double im;

public:
    LZesp();
    LZesp(double are, double aim);
    double getRe();
    double getIm();
    QString jakoLancuch();
    void pisz();
    LZesp *plus(LZesp l);
    LZesp *minus(LZesp l);
    LZesp razy(LZesp l);

};

#endif // LZESP_H
