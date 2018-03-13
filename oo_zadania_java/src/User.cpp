#include "User.h"

User::User()
{
    //ctor
    this->name=name;
    this->sex=sex;
    this->age=age;
}

User::~User()
{
    //dtor
}

void User::setName(string n)
{
    this->name=n;
}
void User::setSex(bool s)
{
    this->sex=s;
}
void User::setAge(int a)
{
    this->age=a;
}
string User::getName()
{
    return this->name;
}
int User::getAge()
{
    return this->age;
}
bool User::getSex()
{
    return this->sex;
}
