#ifndef TOPPING
#define TOPPING

#include "PizzaComponent.h"

class Topping : public PizzaComponent {
    public:
        Topping(string name, double price);
        virtual string getName();
        virtual double getPrice();
        virtual ~Topping() = default;
        void add(PizzaComponent* component){};
};

#endif