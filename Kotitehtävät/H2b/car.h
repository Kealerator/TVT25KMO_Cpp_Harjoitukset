#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
private:
    string brand, model;
    int yearModel;
public:
    Car(string brand, string model, int yearModel);
    void printData();
};

#endif // CAR_H
