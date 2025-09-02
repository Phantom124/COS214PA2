#ifndef TOPPING_GROUP_CPP
#define TOPPING_GROUP_CPP

#include "ToppingGroup.h"
#include <iostream>
using namespace std;

void ToppingGroup::add(PizzaComponent *component){
    toppings.push_back(component);
}

ToppingGroup::ToppingGroup(string name){
    this->name = name;
    this->price = 0;
}

ToppingGroup::~ToppingGroup()
{
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
        if (toppings.size() <= 2 || it == toppings.end() - 1) {
            output += (*it)->getName();
        } else {
            output += (*it)->getName() + ", ";    
        }
    }

    output += ")";
    return output;
}

double ToppingGroup::getPrice(){
    double total = 0;
    
    // cout << this->name << "\t";
    // cout << this->toppings.size() << endl;

    vector<PizzaComponent*>::iterator it;

    for (it = toppings.begin(); it != toppings.end(); ++it){
        total += (*it)->getPrice();
    }
    
    return total;
}

#endif