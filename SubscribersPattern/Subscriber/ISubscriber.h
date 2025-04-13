#pragma once

class ISubscriber
{
public:
    virtual ~ISubscriber() {}

    virtual void onEvent() = 0;
};