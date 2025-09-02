#ifndef PIZZA_CPP
#define PIZZA_CPP

#include "Pizza.h"
#include <iostream>

void Pizza::printPizza(){

    cout << "Name: " << this->getName() << "\nPrice: " << this->getPrice() << endl;
    
}
void Pizza::setStrategy(discountStrategy* strategy){
    this->strategy = strategy;
}

#endif