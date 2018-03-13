#ifndef PUNKT3D_H
#define PUNKT3D_H
#include <iostream>
#include <Punkt2D.h>

using namespace std;


class Punkt3D : public Punkt2D
{
    public:
        Punkt3D();
        Punkt3D(int pz, int py);
        virtual ~Punkt3D();
        int getZ();
        void setZ(int pz);

    protected:

    private:
        int z;
};

#endif // PUNKT3D_H
