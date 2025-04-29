#pragma once

#include "ICar.h"
#include <memory>
#include <map>

class CarFactory
{
public:

    CarFactory();
    ~CarFactory();

    std::shared_ptr<ICar> getCar(const std::string & carType);

private:

    std::map<std::string, std::shared_ptr<ICar>> availableCars_;
};