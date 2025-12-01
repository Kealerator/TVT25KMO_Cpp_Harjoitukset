#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include <memory>

using namep


class Car
{
private:
    unique_ptr<Engine> objEngine;
public:
    Car();
};

#endif // CAR_H
