#include "Notifier.h"

Notifier::Notifier()
{
}

Notifier::~Notifier()
{
}

void Notifier::setSubscriber(std::shared_ptr<ISubscriber> subscriber)
{
    subscribers_.push_back(subscriber);
}

void Notifier::notify()
{
    for (const auto& subscriber : subscribers_)
    {
        subscriber->onEvent();
    }
}

void Notifier::doAction()
{
    std::cout << "Notifier is doing an action..." << std::endl;
    
    // Perform some action here
    // After the action is performed, notify all subscribers
    notify();
}