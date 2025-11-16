#include "car.h"

Car::Car(string brand, string model, int yearModel)
{
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData()
{
    cout << yearModel << " ";
    cout << brand << " ";
    cout << model << endl;
}
