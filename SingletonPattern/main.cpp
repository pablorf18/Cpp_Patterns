#include "Singleton.h"
#include "SingletonPtr.h"

#include <iostream>

int main()
{
    Singleton & singleton1 = Singleton::getInstance();
    std::cout << "singleton1: " << singleton1.getMessage() << std::endl;
    
    Singleton & singleton2 = Singleton::getInstance();
    std::cout << "singleton2: " << singleton2.getMessage() << std::endl;

    SingletonPtr * singletonPtr1 = SingletonPtr::getInstance();
    std::cout << "singletonPtr1: " << singletonPtr1->getMessage() << std::endl;

    SingletonPtr * singletonPtr2 = SingletonPtr::getInstance();
    std::cout << "singletonPtr2: " << singletonPtr2->getMessage() << std::endl;

    return 0;
}