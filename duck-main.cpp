/*
 *
 * duck-main.cpp
 *
*/

#include <iostream>
#include <memory>

#include <Duck.h>
#include <Mallard.h>
#include <Squeak.h>

int main (int argc, char* argv[]) {

  //Duck myDuck; - a Duck is an abstract concept!
  Mallard myMallard;

  //myDuck.doSomething();
  myMallard.doSomething();

  myMallard.performQuack();
    
  // QuackBehaviour *qb = new Squeak();
  std::unique_ptr<QuackBehaviour> qb = std::make_unique<Squeak>();

  myMallard.setQuackBehaviour(std::move(qb));

  myMallard.performQuack();

  return 0;
}

