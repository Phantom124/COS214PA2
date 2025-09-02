#ifndef BASE_PIZZA_CPP
#define BASE_PIZZA_CPP

#include "BasePizza.h"
#include "PizzaDecorator.h"

void BasePizza::addExtra(Pizza *decorator){

    // PizzaDecorator* dec = dynamic_cast<PizzaDecorator*>(decorator);
    if (extra == nullptr){
        extra = decorator;
    } else {
        extra->addExtra(decorator);
    }
    this->price += decorator->getPrice();

    cout << "Adding extra: " + decorator->getName() << endl;

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