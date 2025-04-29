#include "ElectricCar.h"
#include <iostream>

ElectricCar::ElectricCar()
{
    std::cout << "Building an electric car" << std::endl;
}

ElectricCar::~ElectricCar()
{
}

std::string ElectricCar::start() const
{
    return "bzzzz";
}