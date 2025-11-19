#ifndef PERSON_H
#define PERSON_H

#include "address.h"



class Person
{
private:
    string name;
    Address objAddress;
public:
    Person(string name);
    void tulostaTiedot();

    ~Person();
};

#endif // PERSON_H
