#include "HumanExecutor.h"
#include "PayTaxCommand.h"
#include "SleepCommand.h"
#include <iostream>

HumanExecutor::HumanExecutor()
{
}

HumanExecutor::~HumanExecutor()
{
}

bool HumanExecutor::isSupported(std::shared_ptr<ICommand> command)
{
    for (const auto& supportedCommand : supportedCommands_)
    {
        if (command->getName() == supportedCommand)
        {
            return true;
        }
    }
    return false;
}

int HumanExecutor::execute(std::shared_ptr<ICommand> command)
{
    int result = -1;
    if(command->getName() == "SleepCommand")
    {
        std::cout << "Human is sleeping: " << command->getParam() << std::endl;
        result = 0; // Success
    }
    else if(command->getName() == "PayTaxCommand")
    {
        auto payTaxCommand = std::dynamic_pointer_cast<PayTaxCommand>(command);
        if (payTaxCommand)
        {
            std::cout << "Human is paying tax: " << payTaxCommand->getParam() << " totalAmount=" 
                << payTaxCommand->getTaxAmount() << std::endl;
            result = 0;
        }
    }
    else
    {
        std::cerr << "HumanExecutor cannot execute command: " << command->getName() << std::endl;
    }
    
    return result; // Failure
}