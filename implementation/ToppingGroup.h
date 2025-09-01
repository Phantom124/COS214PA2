#ifndef TOPPING_GROUP_H
#define TOPPING_GROUP_H

#include <vector>
#include "PizzaComponent.h"

class ToppingGroup : PizzaComponent {
    private:
        std::vector<PizzaComponent*> toppings;
    public:
        ~ToppingGroup();
        void add(PizzaComponent* component);
        virtual string getName();
        virtual double getPrice();
};

#endif