#include "FuelCar.h"
#include <iostream>

FuelCar::FuelCar()
{
    std::cout << "Building a fuel car" << std::endl;
}

FuelCar::~FuelCar()
{
}

std::string FuelCar::start() const
{
    return "ChikiiIiIiIn... bruuuuum, bruuuuum";
}