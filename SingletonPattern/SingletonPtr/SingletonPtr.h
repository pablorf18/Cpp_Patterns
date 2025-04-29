#pragma once

#include <string>
#include <mutex>

class SingletonPtr
{
public:

    static SingletonPtr * getInstance();

    //delete copy and assigment constructors
    SingletonPtr(SingletonPtr & s) = delete;
    SingletonPtr & operator=(const SingletonPtr & s) = delete;

    std::string getMessage();

private:

    SingletonPtr();

    static SingletonPtr * instance_;

    static std::mutex mutex_;
};