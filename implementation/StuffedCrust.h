#ifndef STUFFED_CRUST
#define STUFFED_CRUST

#include "PizzaDecorator.h"

class StuffedCrust : PizzaDecorator {
    public:
        StuffedCrust(double price, string name);
        virtual double getPrice();
        virtual string getName();
};

#endif