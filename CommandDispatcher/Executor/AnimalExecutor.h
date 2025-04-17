#pragma once

#include "IExecutor.h"
#include <vector>

class AnimalExecutor : public IExecutor
{
public:
    AnimalExecutor();
    ~AnimalExecutor();

    // Check if the command is supported by this executor
    bool isSupported(std::shared_ptr<ICommand> command) override;

    // Execute the command and return the result
    int execute(std::shared_ptr<ICommand> command) override;

private:

    std::vector<std::string> supportedCommands_ {
        "ThinkCommand",
        "SleepCommand"
    };
};
