#include "car.h"

string Car::getMake() const
{
    return make;
}

void Car::setMake(const string &newMake)
{
    make = newMake;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

int Car::getYear() const
{
    return year;
}

void Car::setYear(int newYear)
{
    if(newYear > 1885){
        year = newYear;
    }else {
        cout << "Vuosimallin tulee olla suurempi kuin 1885!" << endl;
    }
}

Car::Car(string make, string model, int year)
{
    this->make=make;
    this->model=model;
    this->setYear(year);

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

Car::Car(string make, string model)
{
    this->make=make;
    this->model=model;
    this->setYear(2020);
}
