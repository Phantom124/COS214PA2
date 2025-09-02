#ifndef STUFFED_CRUST
#define STUFFED_CRUST

#include "PizzaDecorator.h"

class StuffedCrust : public PizzaDecorator {
    public:
        StuffedCrust(string name);
        virtual double getPrice();
        virtual string getName();
};

#endif