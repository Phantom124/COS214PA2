#ifndef BASE_PIZZA 
#define BASE_PIZZA

#include "Pizza.h"
#include "PizzaComponent.h"

class BasePizza : public Pizza {
    private:
        PizzaComponent* toppings;
        Pizza* extra;
    public:
        void addExtra(Pizza* decorator);
        BasePizza(PizzaComponent* toppings);
        virtual double getPrice();
        virtual string getName();
        ~BasePizza();
        // virtual void printPizza();
};

#endif