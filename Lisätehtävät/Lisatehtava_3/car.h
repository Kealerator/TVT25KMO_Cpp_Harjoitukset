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
    Car(string make, string model);
    Car();
    ~Car();
    void display();
    string getMake() const;
    void setMake(const string &newMake);
    string getModel() const;
    void setModel(const string &newModel);
    int getYear() const;
    void setYear(int newYear);
};

#endif // CAR_H
