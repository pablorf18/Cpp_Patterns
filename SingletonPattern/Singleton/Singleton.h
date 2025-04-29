#pragma once

#include <string>

class Singleton
{
public:

    static Singleton & getInstance();

    //delete copy and assigment constructors
    Singleton(Singleton & s) = delete;
    Singleton & operator=(const Singleton & s) = delete;

    std::string getMessage();

private:

    Singleton();
};