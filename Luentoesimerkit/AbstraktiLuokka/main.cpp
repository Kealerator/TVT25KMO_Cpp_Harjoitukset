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

    Dog objDog;


    return 0;
}
