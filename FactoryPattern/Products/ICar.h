#pragma once

#include <string>

class ICar
{
public:

    virtual ~ICar() {}

    virtual std::string start() const = 0;
};