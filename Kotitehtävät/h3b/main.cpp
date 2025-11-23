#include "animal.h"
#include "dog.h"

#include <iostream>

using namespace std;

int main()
{

    Animal *objAnimal = new Animal();
    Dog *objDog = new Dog();

    objAnimal->callOut();
    objDog->callOut();


    delete objAnimal;
    objAnimal = nullptr;

    delete objDog;
    objDog = nullptr;



    return 0;
}
