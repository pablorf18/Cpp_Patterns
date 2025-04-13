#include "Subscriber.h"

Subscriber::Subscriber(const std::string & instanceName) : instanceName_(instanceName)
{
}

Subscriber::~Subscriber()
{
}

void Subscriber::onEvent()
{
    std::cout << instanceName_ << " received an event!" << std::endl;
}