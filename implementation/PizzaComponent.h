#ifndef PIZZA_COMPONENT
#define PIZZA_COMPONENT

#include "Pizza.h"

class PizzaComponent {
    public:
        virtual string getName() = 0;
        virtual double getPrice() = 0;
        virtual void add(PizzaComponent* component) = 0;
        virtual ~PizzaComponent() = default;
    protected:
        double price;
        string name;
};

#endif