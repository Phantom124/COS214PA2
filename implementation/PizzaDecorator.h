#ifndef PIZZA_DECORATOR
#define PIZZA_DECORATOR

#include "Pizza.h"

class PizzaDecorator : public Pizza {
    public:
        virtual double getPrice() = 0;
        virtual string getName() = 0;
};

#endif