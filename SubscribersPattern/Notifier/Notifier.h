#pragma once

#include "INotifier.h"
#include <vector>
#include <iostream>

class Notifier : public INotifier
{
public:
    Notifier();
    ~Notifier();

    void setSubscriber(std::shared_ptr<ISubscriber> subscriber) override;

    //public method to do an action (it could be inheritated from another class)
    void doAction();

private:

    // Notify all subscribers about the event
    void notify();

    std::vector<std::shared_ptr<ISubscriber>> subscribers_;
};