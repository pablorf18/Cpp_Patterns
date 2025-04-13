#pragma once

#include "ISubscriber.h"
#include <iostream>

class Subscriber : public ISubscriber
{
public:

    explicit Subscriber(const std::string & instanceName);
    ~Subscriber();


    void onEvent() override;
    

private:
    std::string instanceName_;

};