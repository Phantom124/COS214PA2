#ifndef DISCOUNTSTRATEGY_H
#define DISCOUNTSTRATEGY_H

#include <iostream>

class discountStrategy{
    public:
        virtual double applyDiscount(double totalPrice, int pizzaCount) = 0; 

};

#endif //DISCOUNTSTRATEGY_H