#ifndef PERSON_H
#define PERSON_H

#include "address.h"


class Person
{
private:
    Address objAddress;
    string name;
public:
    Person(string name, string street, string postalCode, string city);
    void printData();

    ~Person();
};

#endif // PERSON_H
