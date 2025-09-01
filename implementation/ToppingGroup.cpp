#ifndef TOPPING_GROUP_CPP
#define TOPPING_GROUP_CPP

#include "ToppingGroup.h"
using namespace std;

void ToppingGroup::add(PizzaComponent *component){
    toppings.push_back(component);
}

string ToppingGroup::getName(){
    vector<PizzaComponent*>::iterator it;

    string output = this->name + " (";

    for (it = toppings.begin(); it != toppings.end(); ++it){
        output += (*it)->getName() + ", ";
    }

    output += ")";
    return output;
}

#endif