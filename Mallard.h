/*
 *
 * Mallard.h
 *
*/

#ifndef MALLARD_H
#define MALLARD_H

#include <Duck.h>

class Mallard : public Duck {

    public:
        Mallard();
        void doSomething() override;
};

#endif

