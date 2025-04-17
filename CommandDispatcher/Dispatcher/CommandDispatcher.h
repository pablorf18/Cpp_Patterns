#pragma once

#include "IDispatcher.h"
#include <vector>
#include <iostream>

class CommandDispatcher : public IDispatcher
{
public:
    CommandDispatcher();
    ~CommandDispatcher();

    // Set the executor for the dispatcher
    void setExecutor(std::shared_ptr<IExecutor> executor) override;

    // Run the command using the executor
    void runCommand(std::shared_ptr<ICommand> command) override;

private:

    // List of supported commands
    std::vector<std::shared_ptr<IExecutor>> executors_;
};