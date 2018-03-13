#ifndef USER_H
#define USER_H
#include <iostream>

using namespace std;

class User
{
    public:
        User();
        virtual ~User();
        void setName(string n);
        void setSex(bool s);
        void setAge(int a);
        string getName();
        int getAge();
        bool getSex();

    protected:

    private:
        string name;
        bool sex;
        int age;
};

#endif // USER_H
