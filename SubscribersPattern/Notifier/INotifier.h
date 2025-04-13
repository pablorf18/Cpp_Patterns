#pragma once

#include "ISubscriber.h"
#include <memory>

class INotifier
{
public:
    virtual ~INotifier() {}

    virtual void setSubscriber(std::shared_ptr<ISubscriber> subscriber) = 0;
};