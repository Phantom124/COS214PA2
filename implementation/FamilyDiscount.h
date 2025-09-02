#ifndef FAMILYDISCOUNT_H
#define FAMILYDISCOUNT_H

#include "DiscountStrategy.h"
class FamilyDiscount:public discountStrategy
{
    private:
        /* data */
    public:
    double applyDiscount(double totalPrice, int pizzaCount) override;
};




#endif //FAMILYDISCOUNT_H