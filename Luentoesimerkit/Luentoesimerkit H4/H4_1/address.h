#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

using namespace std;

class Address
{
private:
    string street, city, postalcode;
public:
    Address();
    Address(string street, string postalcode, string city);
    void tulostaTiedot();

    ~Address();
};

#endif // ADDRESS_H
