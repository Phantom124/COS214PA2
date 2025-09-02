#ifndef TOPPING_CPP
#define TOPPING_CPP

#include "Topping.h"

Topping::Topping(string name, double price) {
    this->name = name;
    this->price = price;
}

string Topping::getName(){
    return this->name;
}

double Topping::getPrice(){
    return this->price;
}

#endif