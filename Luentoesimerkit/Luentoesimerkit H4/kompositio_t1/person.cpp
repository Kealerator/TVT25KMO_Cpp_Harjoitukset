#include "person.h"

Person::Person(string name, string street, string postalCode, string city)
{
    this->name = name;
    this->objAddress.setStreet(street);
    this->objAddress.setPostalCode(postalCode);
    this->objAddress.setCity(city);
}

void Person::printData()
{
    cout << "Nimi: " << name << endl;
    cout << "Katuosoite: " << this->objAddress.getStreet() << endl;
    cout << "Postinro: " << this->objAddress.getPostalCode()<< endl;
    cout << "Kaupunki: " << this->objAddress.getCity() << endl;

}

Person::~Person()
{
}
