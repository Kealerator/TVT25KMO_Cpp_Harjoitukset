#ifndef PERSON_H
#define PERSON_H

#include "address.h"
#include <memory>



class Person
{
private:
    string name;
    unique_ptr<Address> objAddress;
public:
    Person(string name);
    void tulostaTiedot();

    ~Person();
};

#endif // PERSON_H
