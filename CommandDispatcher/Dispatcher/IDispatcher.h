#pragma once

#include "ICommand.h"
#include "IExecutor.h"
#include <memory>

class IDispatcher
{
public:
    virtual ~IDispatcher() {}

    virtual void setExecutor(std::shared_ptr<IExecutor> executor) = 0;
    virtual void runCommand(std::shared_ptr<ICommand> command) = 0;
};