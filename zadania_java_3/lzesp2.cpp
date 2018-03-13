#include "lzesp2.h"

LZesp2::LZesp2() : LZesp()
{

}
LZesp2::LZesp2(double are, double aim) : LZesp(are, aim)
{

}
LZesp2::LZesp2(LZesp l) : LZesp(l.getRe(), l.getIm())
{

}
QString LZesp2::jakoLancuch()
{
    if(getRe()==0 && getIm()==0)
        return QString("0");
    else if(getRe()==0)
        return QString("Im %1i").arg(getIm());
    else if(LZesp::getIm()==0)
        return QString("Re %1").arg(getRe());
    else if(getIm()<0 && getRe()!=0)
        return QString("Re %1 - Im %2").arg(getRe()).arg(getIm());
    else if(getIm()<0 && getRe()==0)
        return QString("Im %1i").arg(getIm());
    return QString("Re %1 Im %2i").arg(getRe()).arg(getIm());
}
void LZesp2::pisz()
{
    cout<<jakoLancuch().toStdString()<<endl;
}
