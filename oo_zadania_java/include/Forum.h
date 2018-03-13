#ifndef FORUM_H
#define FORUM_H
#include <iostream>
#include "User.h"
//#include <list>
//#include <iterator>
//#include <algorithm>
#include <vector>

using namespace std;

class Forum
{
    public:
        Forum();
        virtual ~Forum();
        User u1;
        vector<User> lu;
        void loguj();
        void wypisz();
        void ilu_zalog();

    protected:

    private:
        string tN;
        bool tS;
        int tW;

};

#endif // FORUM_H
