#include "CarFactory.h"

#include <iostream>

//include products
#include "ElectricCar.h"
#include "FuelCar.h"

CarFactory::CarFactory()
{
    availableCars_ = {
        { "Electric", std::make_shared<ElectricCar>() },
        { "Fuel", std::make_shared<FuelCar>() }
    };
}

CarFactory::~CarFactory()
{
}

std::shared_ptr<ICar> CarFactory::getCar(const std::string & carType)
{
    std::shared_ptr<ICar> car;
    if(availableCars_.find(carType) == availableCars_.end())
    {
        std::cout << "The requested car " << carType << " is not available" << std::endl;
    }
    else
    {
        car = availableCars_.at(carType);
    }

    return car;
}