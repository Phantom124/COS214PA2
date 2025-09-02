#ifndef REGULARPRICE_H
#define REGULARPRICE_H

#include "DiscountStrategy.h"
class RegularPrice:public discountStrategy
{
    public:
        double applyDiscount(double totalPrice, int pizzaCount) override{
            return totalPrice;
        }
    
};




#endif //REGULARPRICE_H