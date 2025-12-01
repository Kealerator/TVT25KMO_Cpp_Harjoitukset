#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"
#include <memory>

using namespace std;


class Car
{
private:
    unique_ptr<Engine> objEngine = make_unique<Engine>();
    unique_ptr<Wheel> objWheel1 = make_unique<Wheel>();
    unique_ptr<Wheel> objWheel2 = make_unique<Wheel>();
    unique_ptr<Wheel> objWheel3 = make_unique<Wheel>();
    unique_ptr<Wheel> objWheel4 = make_unique<Wheel>();

    string model, brand;
public:
    Car();
    Car(string model, string brand);
    void setEngine();
    void setWheels();
    void printDetails();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
};

#endif // CAR_H
