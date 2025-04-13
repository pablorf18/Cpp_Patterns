#include <iostream>

#include "Notifier/Notifier.h"
#include "Subscriber/Subscriber.h"

int main()
{
    std::cout << "Starting subscribers pattern example" << std::endl;

    // Create a notifier instance
    Notifier notifier;

    // Create a subscriber instance
    auto subscriber1 = std::make_shared<Subscriber>("Subscriber 1");
    auto subscriber2 = std::make_shared<Subscriber>("Subscriber 2");

    // Set the subscribers to the notifier
    notifier.setSubscriber(subscriber1);
    notifier.setSubscriber(subscriber2);

    // Perform an action with the notifier, which will notify all subscribers
    notifier.doAction();

    return 0;
}