#ifndef TOPPING
#define TOPPING

#include "PizzaComponent.h"

class Topping : public Pizza {
    public:
        Topping(string name, double price);
        virtual string getName();
        virtual double getPrice();
};

#endif