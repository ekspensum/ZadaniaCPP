#include "Punkt3D.h"

Punkt3D::Punkt3D()
{
    //ctor
    this->z=0;
    this->setX(999);
}
Punkt3D::Punkt3D(int pz, int py)
{
    this->z=pz;
    this->setY(py);
}

Punkt3D::~Punkt3D()
{
    //dtor
}

int Punkt3D::getZ()
{
    return this->z;
}
void Punkt3D::setZ(int pz)
{
    this->z=pz;
}
