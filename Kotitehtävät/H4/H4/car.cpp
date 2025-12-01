#include "car.h"
#include <vector>

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &newModel)
{
    model = newModel;
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &newBrand)
{
    brand = newBrand;
}


Car::Car() {
}

Car::Car(string model, string brand)
{
    this->model = model;
    this->brand = brand;

}

void Car::setEngine()
{
    objEngine->setHorsepower(150);
    objEngine->setDisplacement(2.0);
}

void Car::setWheels()
{
    objWheel1->setSize(17);
    objWheel1->setType("kesarengas");

    objWheel2->setSize(17);
    objWheel2->setType("kesarengas");

    objWheel3->setSize(17);
    objWheel3->setType("kesarengas");

    objWheel4->setSize(17);
    objWheel4->setType("kesarengas");

}

void Car::printDetails()
{
    cout << "Auto : " << this->getModel() << " " << this->getBrand() << endl;
    cout << "Engine: " << objEngine->getHorsepower() << "hp, ";
    cout << objEngine->getDisplacement() << " L " << endl;

    cout << "Rengas 1:" << objWheel1->getSize() << " tuumaa, ";
    cout << objWheel1->getType() << endl;

    cout << "Rengas 2:" << objWheel2->getSize() << " tuumaa, ";
    cout << objWheel2->getType() << endl;

    cout << "Rengas 3:" << objWheel3->getSize() << " tuumaa, ";
    cout << objWheel3->getType() << endl;

    cout << "Rengas 4:" << objWheel4->getSize() << " tuumaa, ";
    cout << objWheel4->getType() << endl;

}
