#include "car.h"

Car::Car(string make, string model, int year)
{
    this->make=make;
    this->model=model;
    this->year = year;

}

Car::Car() {}

Car::~Car()
{
    cout << "Olio tuhottiin." << endl;
}

void Car::display()
{
    cout << this->year << " " << this->make << " " << this->model << endl;
}
