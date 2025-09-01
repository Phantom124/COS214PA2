#ifndef TOPPING_GROUP_CPP
#define TOPPING_GROUP_CPP

#include "ToppingGroup.h"
using namespace std;

void ToppingGroup::add(PizzaComponent *component){
    toppings.push_back(component);
}

ToppingGroup::~ToppingGroup(){
    vector<PizzaComponent*>::iterator it;

    for (it = toppings.begin(); it != toppings.end(); ++it){
        if (*it != nullptr){
            delete *it;
        }
    }
    toppings.clear();
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

double ToppingGroup::getPrice(){
    double total = 0;
    
    vector<PizzaComponent*>::iterator it;

    for (it = toppings.begin(); it != toppings.end(); ++it){
        total += (*it)->getPrice();
    }
    
    return total;
}

#endif