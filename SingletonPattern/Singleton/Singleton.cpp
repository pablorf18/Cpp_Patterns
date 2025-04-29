#include "Singleton.h"
#include <iostream>

Singleton::Singleton()
{
    std::cout << "Singleton constructor called" << std::endl;
}

Singleton & Singleton::getInstance()
{
    static Singleton instance;
    return instance;
}

std::string Singleton::getMessage()
{
    return "Singleton is ready";
}