#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car
{
private:
    string make;
    string model;
    int year;
public:
    Car(string make, string model, int year);
    Car();
    ~Car();
    void display();
};

#endif // CAR_H
