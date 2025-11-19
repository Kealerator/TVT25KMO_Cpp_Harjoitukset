#include "address.h"

Address::Address() {}

Address::Address(string street, string postalcode, string city)
{
    this->street = street;
    this->postalcode = postalcode;
    this->city = city;

}

void Address::tulostaTiedot()
{
    cout << this->street << " " << this->postalcode << " " << this->city << endl;
}

Address::~Address()
{
    cout << "Address olio tuhottu." << endl;
}
