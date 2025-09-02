#ifndef ORDER_STATE_H
#define ORDER_STATE_H

#include "Order.h"
class State {
    public:
        virtual void next(Order* State) = 0;
        virtual void prev(Order* State )=0 ;
        virtual void printStatus()=0;
    protected:
        Order* order;
        
};

#endif