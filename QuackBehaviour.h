/*
 *
 * QuackBehaviour.h
 * This is the equivalent of a Java interface class
 * It is an abstract class with only pure virtual member functions
 *
*/

#ifndef QUACK_BEHAVIOUR_H
#define QUACK_BEHAVIOUR_H

class QuackBehaviour {

    public:

        // 
        // This is a virtual function so a derived class will have a vtable
        // linker checks for this, e.g.: 
        // undefined reference to `vtable for Mallard'
        //
        virtual void quack() = 0; 
        
        // 
        // Ensure when we delete a derived object via base class pointer
        // that the derived objects destructor gets called (and called first)
        //
        virtual ~QuackBehaviour() { };
    
};

#endif
