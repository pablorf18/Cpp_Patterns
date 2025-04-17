#include "AnimalExecutor.h"
#include "ThinkCommand.h"
#include "SleepCommand.h"
#include <iostream>

AnimalExecutor::AnimalExecutor()
{
}

AnimalExecutor::~AnimalExecutor()
{
}

bool AnimalExecutor::isSupported(std::shared_ptr<ICommand> command)
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

int AnimalExecutor::execute(std::shared_ptr<ICommand> command)
{
    int result = -1;
    if(command->getName() == "SleepCommand")
    {
        std::cout << "Animal is sleeping: " << command->getParam() << std::endl;
        result = 0; // Success
    }
    else if(command->getName() == "ThinkCommand")
    {
        auto thinkCommand = std::dynamic_pointer_cast<ThinkCommand>(command);
        if (thinkCommand)
        {
            std::cout << "Animal is thinking: " << thinkCommand->getParam() << std::endl;
            result = 0; // Success
        }
            
    }
    else
    {
        std::cerr << "AnimalExecutor cannot execute command: " << command->getName() << std::endl;
    }
    
    return result; // Failure
}