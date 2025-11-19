#include "italianchef.h"


ItalianChef::ItalianChef(string name): Chef(name)
{
    this->name = name;
    cout << "ItalianChef " << this->name << " konstruktori" << endl;
}

string ItalianChef::getName()
{
    return this->name;
}

void ItalianChef::makePasta()
{
    cout << "Italian Chef " << this->name << " makes pasta" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << "ItalianChef " << this->name << " destruktori" << endl;
}
