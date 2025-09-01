#ifndef TOPPING
#define TOPPING

#include "PizzaComponent.h"

class Topping : public PizzaComponent {
    public:
        virtual string getName();
        virtual double getPrice();
};

#endif