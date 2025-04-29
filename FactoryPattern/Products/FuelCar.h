#pragma once

#include "ICar.h"

class FuelCar : public ICar
{
public:

    FuelCar();
    ~FuelCar();

    std::string start() const override;
};