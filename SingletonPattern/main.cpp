#include "Singleton.h"

#include <iostream>

int main()
{
    Singleton & singleton1 = Singleton::getInstance();
    std::cout << "singleton1: " << singleton1.getMessage() << std::endl;
    
    Singleton & singleton2 = Singleton::getInstance();
    std::cout << "singleton2: " << singleton2.getMessage() << std::endl;

    return 0;
}