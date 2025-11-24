#include "animal.h"

string Animal::getColor() const
{
    return color;
}

void Animal::setColor(const string &newColor)
{
    color = newColor;
}

Animal::~Animal()
{
    cout << "Animal olio tuhottu." << endl;
}

void Animal::sound()
{
    cout << "Eläin ääntää." << endl;
}

Animal::Animal() {}
