#pragma once

#include "ICar.h"

class ElectricCar : public ICar
{
public:

    ElectricCar();
    ~ElectricCar();

    std::string start() const override;
};