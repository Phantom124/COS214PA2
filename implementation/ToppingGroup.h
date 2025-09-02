#ifndef TOPPING_GROUP_H
#define TOPPING_GROUP_H

#include <vector>
#include "PizzaComponent.h"
#include "Pizza.h"

class ToppingGroup : public PizzaComponent {
    private:
        std::vector<PizzaComponent*> toppings;
        double price;
        string name;
    public:
        ToppingGroup(string name);
        virtual ~ToppingGroup();
        void add(PizzaComponent* component);
        virtual string getName();
        virtual double getPrice();
};

#endif