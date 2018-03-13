#ifndef PROSTOKAT_H
#define PROSTOKAT_H
#include <iostream>

using namespace std;

class Prostokat
{
    public:
        Prostokat();
        Prostokat(const Prostokat &p);
        virtual ~Prostokat();

        unsigned int GetDl() { return dl; }
        unsigned int GetSzer() { return szer; }
        void SetDl(unsigned int val) { dl = val; }
        void SetSzer(unsigned int val) { szer = val; }
        int pole();
        int obwod(int d, int s);
        double przekatna();

    protected:

    private:
        unsigned int dl, szer;
};

#endif // PROSTOKAT_H
