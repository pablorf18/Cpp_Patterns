#pragma once

#include "ICommand.h"
#include <memory>

class IExecutor
{
public:
    virtual ~IExecutor() {}

    // Check if the command is supported by this executor
    virtual bool isSupported(std::shared_ptr<ICommand> command) = 0;

    // Execute the command and return the result
    virtual int execute(std::shared_ptr<ICommand> command) = 0;
};