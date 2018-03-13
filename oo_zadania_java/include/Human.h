#ifndef HUMAN_H
#define HUMAN_H
#include <iostream>

using namespace std;

class Human
{
    public:
        Human(int w);
        virtual ~Human();
        int getWaga();
        void setWaga(int w);
        void getWiek();
        void setWiek();
        bool getPlec();
        void setPlec(bool p);

    protected:

    private:
        int wiek, waga, wzrost;
        bool plec;
        string imie;
};

#endif // HUMAN_H
