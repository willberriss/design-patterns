/*
 *
 * Duck.cpp
 * This is an abstract base class
 *
*/

#include <iostream>
#include <Duck.h>

void Duck::doSomething() {
    std::cout << "Duck::doSomething()" << "\n";
}

void swim() {
    std::cout << "All ducks float" << "\n";
}

