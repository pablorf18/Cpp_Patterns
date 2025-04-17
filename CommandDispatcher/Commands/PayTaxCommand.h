#pragma once

#include "ICommand.h"

class PayTaxCommand : public ICommand
{
public:

    PayTaxCommand(const std::string & param, int taxAmount) 
        : param_(param), taxAmount_(taxAmount) {}
    ~PayTaxCommand() {}

    std::string getName() const override
    {
        return "PayTaxCommand";
    }

    std::string getParam() const override
    {
        return param_;
    }

    int getTaxAmount() const
    {
        return taxAmount_;
    }
    

private:
    std::string param_;
    int taxAmount_;
};