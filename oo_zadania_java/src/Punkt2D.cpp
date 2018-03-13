#include "Punkt2D.h"

Punkt2D::Punkt2D()
{
    //ctor
    this->x=0;
    this->y=0;
}
Punkt2D::Punkt2D(int px, int py)
{
    this->x=px;
    this->y=py;
}

Punkt2D::~Punkt2D()
{
    //dtor
}
int Punkt2D::getX()
{
    return this->x;
}
int Punkt2D::getY()
{
    return this->y;
}
void Punkt2D::setX(int px)
{
    this->x=px;
}
void Punkt2D::setY(int py)
{
    this->y=py;
}
