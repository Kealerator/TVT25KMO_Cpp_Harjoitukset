#include "person.h"

Person::Person(string name) {
    this->name = name;
    objAddress = make_unique<Address>("Uusikatu 4", "90100", "Oulu");
}

void Person::tulostaTiedot()
{
    cout << "Nimi: " << this->name << " Osoite: ";
    this->objAddress->tulostaTiedot();
}

Person::~Person()
{
    cout << "Person olio tuhottu." << endl;
}
