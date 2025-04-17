#include <iostream>

#include "Dispatcher/CommandDispatcher.h"
#include "Executor/HumanExecutor.h"
#include "Executor/AnimalExecutor.h"
#include "Commands/PayTaxCommand.h"
#include "Commands/ThinkCommand.h"
#include "Commands/SleepCommand.h"

int main()
{
    std::cout << "Starting dispatcher pattern example" << std::endl;

    // Create the dispatcher
    CommandDispatcher dispatcher;

    std::shared_ptr<IExecutor> humanExecutor = std::make_shared<HumanExecutor>();
    std::shared_ptr<IExecutor> animalExecutor = std::make_shared<AnimalExecutor>();

    // Set the executors for the dispatcher
    dispatcher.setExecutor(humanExecutor);
    dispatcher.setExecutor(animalExecutor);

    // Create commands
    std::shared_ptr<ICommand> payTaxCommand = std::make_shared<PayTaxCommand>("Pay tax", 100);
    std::shared_ptr<ICommand> thinkCommand = std::make_shared<ThinkCommand>("Think about life");
    std::shared_ptr<ICommand> sleepCommand = std::make_shared<SleepCommand>("Sleep for 8 hours");

    // Run commands
    dispatcher.runCommand(payTaxCommand);
    dispatcher.runCommand(thinkCommand);
    dispatcher.runCommand(sleepCommand);

    return 0;
}