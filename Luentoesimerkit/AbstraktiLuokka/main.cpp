#include "animal.h"
#include "cat.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{
    // Ei voida luoda Animal oliota koska
    // Animal luokassa on puhdas virtuaalifunktio
    //eli Animal olio on abstrakti

    // Animal objAnimal;

    Cat objCat;

    objCat.setName("Miuku");
    objCat.sound();
    objCat.sayName();

    Animal *objCat2 = new Cat();

    objCat2->sound();
    delete objCat2;
    objCat2 = nullptr;




    return 0;
}
