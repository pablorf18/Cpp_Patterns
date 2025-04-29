#include "CarFactory.h"
#include <iostream>

#include "ElectricCar.h"
#include "FuelCar.h"

int main()
{
    CarFactory carFactory;

    std::shared_ptr<ICar> electricCar = carFactory.getCar("Electric");
    std::cout << "Starting electric car: " << electricCar->start() << std::endl;

    std::shared_ptr<ICar> fuelCar = carFactory.getCar("Fuel");
    std::cout << "Starting fuel car: " << fuelCar->start() << std::endl;

    std::shared_ptr<ICar> picapiedrasCar = carFactory.getCar("PicapiedrasCar");
    if(picapiedrasCar == nullptr)
    {
        std::cout << "Picapiedras car is not available...yet" << std::endl;
    }

    return 0;
}