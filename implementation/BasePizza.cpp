#ifndef BASE_PIZZA_CPP
#define BASE_PIZZA_CPP

#include "BasePizza.h"

void BasePizza::addExtra(Pizza *decorator){
    extra->addExtra(decorator);
    this->price += decorator->getPrice();
}

BasePizza::BasePizza(PizzaComponent *toppings){
    this->price = 0;
    this->toppings = toppings;
    this->extra = nullptr;
}

double BasePizza::getPrice(){
    return (this->toppings->getPrice() + this->price);
}

string BasePizza::getName(){
    return this->toppings->getName();
}

BasePizza::~BasePizza(){
    delete toppings;
    toppings = nullptr;
}

#endif