#ifndef BULKDISCOUNT_H
#define BULKDISCOUNT_H

#include "DiscountStrategy.h"

class BulkDiscount:public discountStrategy
{
    private:
        /* data */
    public:
        double applyDiscount(double totalPrice, int pizzaCount) override;      
};




#endif //BULKDISCOUNT_H