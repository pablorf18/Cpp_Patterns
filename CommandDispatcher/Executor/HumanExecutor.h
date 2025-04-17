#pragma once

#include "IExecutor.h"
#include <vector>

class HumanExecutor : public IExecutor
{
public:
    HumanExecutor();
    ~HumanExecutor();

    // Check if the command is supported by this executor
    bool isSupported(std::shared_ptr<ICommand> command) override;

    // Execute the command and return the result
    int execute(std::shared_ptr<ICommand> command) override;

private:

    std::vector<std::string> supportedCommands_ {
        "PayTaxCommand",
        "SleepCommand"
    };
};
