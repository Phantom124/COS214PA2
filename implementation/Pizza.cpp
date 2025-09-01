#ifndef PIZZA_CPP
#define PIZZA_CPP

#include "Pizza.h"
#include <iostream>

void Pizza::printPizza(){

    cout << "Name: " << this->getName() << "\tPrice: " << this->getPrice() << endl;
    
}

#endif