#ifndef PUNKT2D_H
#define PUNKT2D_H
#include <iostream>

using namespace std;

class Punkt2D
{
    public:
        Punkt2D();
        Punkt2D(int px, int py);
        virtual ~Punkt2D();
        int getX();
        int getY();
        void setX(int px);
        void setY(int py);

    protected:

    private:
        int x, y;
};

#endif // PUNKT2D_H
