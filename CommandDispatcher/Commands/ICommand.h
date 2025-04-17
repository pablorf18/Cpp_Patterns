#pragma once

#include <string>

class ICommand
{
public:
    virtual ~ICommand() {}

    virtual std::string getName() const = 0;
    virtual std::string getParam() const = 0;
};