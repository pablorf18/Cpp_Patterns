#include "SingletonPtr.h"
#include <iostream>

SingletonPtr* SingletonPtr::instance_ = nullptr;
std::mutex SingletonPtr::mutex_;

SingletonPtr::SingletonPtr()
{
    std::cout << "SingletonPtr constructor called" << std::endl;
}

SingletonPtr * SingletonPtr::getInstance()
{
    // Use mutex to ensure thread safety
    std::lock_guard<std::mutex> lock(mutex_);

    if(instance_ == nullptr)
    {
        instance_ = new SingletonPtr();
    }
    return instance_;
}

std::string SingletonPtr::getMessage()
{
    return "SingletonPtr is ready";
}