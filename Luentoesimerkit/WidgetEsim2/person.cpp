#include "person.h"

QString Person::getName() const
{
    return name;
}

void Person::setName(const QString &newName)
{
    name = newName;
}

Person::Person() {}
