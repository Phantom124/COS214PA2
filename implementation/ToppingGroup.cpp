#ifndef TOPPING_GROUP_CPP
#define TOPPING_GROUP_CPP

#include "ToppingGroup.h"
#include <iostream>
using namespace std;

void ToppingGroup::add(Pizza *component){
    toppings.push_back(component);
}

ToppingGroup::ToppingGroup(string name){
    this->name = name;
}

ToppingGroup::~ToppingGroup()
{
    vector<Pizza*>::iterator it;

    for (it = toppings.begin(); it != toppings.end(); ++it){
        if (*it != nullptr){
            delete *it;
        }
    }
    toppings.clear();
}

string ToppingGroup::getName(){
    vector<Pizza*>::iterator it;

    string output = this->name + " (";

    for (it = toppings.begin(); it != toppings.end(); ++it){
        if (toppings.size() <= 2 || it == toppings.end() - 2) {
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
    
    cout << this->name << "\t";
    cout << this->toppings.size() << endl;

    vector<Pizza*>::iterator it;

    for (it = toppings.begin(); it != toppings.end(); ++it){
        total += (*it)->getPrice();
    }
    
    return total;
}

#endif