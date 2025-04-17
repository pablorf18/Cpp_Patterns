#pragma once

#include "ICommand.h"

class ThinkCommand : public ICommand
{
public:

    explicit ThinkCommand(const std::string & param) 
        : param_(param) {}
    ~ThinkCommand() {}

    std::string getName() const override
    {
        return "ThinkCommand";
    }

    std::string getParam() const override
    {
        return param_;
    }
    

private:
    std::string param_;
};