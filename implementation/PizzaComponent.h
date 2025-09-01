#ifndef PIZZA_COMPONENT
#define PIZZA_COMPONENT

#include "Pizza.h"

class PizzaComponent : public Pizza {
    public:
        virtual string getName() = 0;
        virtual double getPrice() = 0;
};

#endif