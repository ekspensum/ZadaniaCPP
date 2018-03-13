#include "lzesp.h"

LZesp::LZesp()
{
    this->re=0.0;
    this->im=0.0;
}

LZesp::LZesp(double are, double aim)
{
    re=are;
    im=aim;
}

double LZesp::getRe()
{
    return re;
}
double LZesp::getIm()
{
    return im;
}
QString LZesp::jakoLancuch()
{
//    QString dane = QString("Re %1 + Im %2i").arg(re).arg(im);
    return QString("Re %1 + Im %2i").arg(re).arg(im);
}

void LZesp::pisz()
{
    cout<<jakoLancuch().toStdString()<<endl;
}
LZesp *LZesp::plus(LZesp l)
{
    return new LZesp(re+l.getRe(), im+l.getIm());
}
LZesp *LZesp::minus(LZesp l)
{
    return new LZesp(re-l.getRe(), im-l.getIm());
}
LZesp LZesp::razy(LZesp l)
{
    return LZesp(re*l.getRe() - im*l.getIm(), re*l.getIm() + im*l.getRe());
}
