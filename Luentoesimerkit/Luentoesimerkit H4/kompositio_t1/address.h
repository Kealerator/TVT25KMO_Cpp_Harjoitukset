#ifndef ADDRESS_H
#define ADDRESS_H

#include <iostream>

using namespace std;

class Address
{
private:
    string street, city, postalCod, postalCode;
public:
    Address();
    string getStreet() const;
    void setStreet(const string &newStreet);
    string getCity() const;
    void setCity(const string &newCity);
    string getPostalCode() const;
    void setPostalCode(const string &newPostalCod);

    ~Address();
};

#endif // ADDRESS_H
