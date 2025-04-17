#include "CommandDispatcher.h"

CommandDispatcher::CommandDispatcher()
{
}

CommandDispatcher::~CommandDispatcher()
{
}

void CommandDispatcher::setExecutor(std::shared_ptr<IExecutor> executor)
{
    executors_.push_back(executor);
}

void CommandDispatcher::runCommand(std::shared_ptr<ICommand> command)
{
    for (const auto& executor : executors_)
    {
        if (executor->isSupported(command))
        {
            int result = executor->execute(command);
            std::cout << "Command executed with result: " << result << std::endl;
        }
    }
}