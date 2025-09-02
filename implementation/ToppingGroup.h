#ifndef TOPPING_GROUP_H
#define TOPPING_GROUP_H

#include <vector>
#include "PizzaComponent.h"

class ToppingGroup : Pizza {
    private:
        std::vector<Pizza*> toppings;
    public:
        ToppingGroup(string name);
        ~ToppingGroup();
        void add(Pizza* component);
        virtual string getName();
        virtual double getPrice();
};

#endif