#ifndef LZESP2_H
#define LZESP2_H
#include "lzesp.h"
#include <iostream>
#include <QString>

using namespace std;

class LZesp2 : public LZesp
{
public:
    LZesp2();
    LZesp2(double are, double aim);
    LZesp2(LZesp l);
    QString jakoLancuch();
    void pisz();
};

#endif // LZESP2_H
