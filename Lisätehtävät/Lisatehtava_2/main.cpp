#include "car.h"

#include <memory>
#include <iostream>

using namespace std;

int main()
{
    cout << "Hello World, let's create some cars!" << endl;
    cout << endl;

    //Dynamic object
    Car *objCar1 = new Car("Audi", "A4", 2013);
    objCar1->display();

    // Smart Pointer
    unique_ptr<Car> objCar2 = make_unique<Car>("Volvo", "V70", 1992);
    objCar2->display();


    Car objCar3("Volkswagen", "A1", 1800);

    // No need to destroy the smart pointer!

    // Destroy the dynamic object
    delete objCar1;
    objCar1 = nullptr;

    return 0;
}
