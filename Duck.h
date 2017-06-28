/*
 *
 * duck.h
 * This is an abstract base class
 *
*/

#ifndef DUCK_H
#define DUCK_H

#include <memory>
#include <QuackBehaviour.h>

class Duck {

    public:

        // 
        // This is a virtual function so a derived class will have a vtable
        // linker checks for this, e.g.: 
        // undefined reference to `vtable for Mallard'
        //
        virtual void doSomething(); 
        
        virtual void performQuack() final {
            m_QuackBehaviour->quack();
        }

        virtual void setQuackBehaviour(std::unique_ptr<QuackBehaviour> qb) final {
            m_QuackBehaviour = std::move(qb);
        }
        

    protected:
        int myProtectedInteger=16;

    private:
        int myPrivateInteger=0;
        
        //QuackBehaviour *m_QuackBehaviour = nullptr;
        std::unique_ptr<QuackBehaviour> m_QuackBehaviour;

};

#endif
