#ifndef TOPPING_GROUP_CPP
#define TOPPING_GROUP_CPP

#include "ToppingGroup.h"

void ToppingGroup::add(PizzaComponent *component){
    toppings.push_back(component);
}

#endif