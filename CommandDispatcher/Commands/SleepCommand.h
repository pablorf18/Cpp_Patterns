#pragma once

#include "ICommand.h"

class SleepCommand : public ICommand
{
public:

    explicit SleepCommand(const std::string & param) 
        : param_(param) {}
    ~SleepCommand() {}

    std::string getName() const override
    {
        return "SleepCommand";
    }

    std::string getParam() const override
    {
        return param_;
    }

private:
    std::string param_;
};