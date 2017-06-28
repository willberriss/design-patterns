/*
 *
 * Mallard.cpp
 *
*/

#include <iostream>
#include <memory>

#include <Mallard.h>
#include <Quack.h>

Mallard::Mallard() {
    std::cout << "Mallard::Mallard() constructor" << "\n";
    //QuackBehaviour *qb = new Quack();
    //QuackBehaviour *qb = new Quack;
    //std::unique_ptr<QuackBehaviour> qb(new Quack);
    std::unique_ptr<QuackBehaviour> qb = std::make_unique<Quack>();
    
    this->setQuackBehaviour(std::move(qb));    
}

void Mallard::doSomething() {
    std::cout << "Mallard::doSomething()" << myProtectedInteger << "\n";
}

