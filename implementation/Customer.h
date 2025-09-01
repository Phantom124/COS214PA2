#ifndef CUSTOMER_H
#define CUSTOMER_H 

#include "observer.h"
#include "PizzaMenu.h"
#include "SpecialMenu.h"
class Customer:public observer
{
    public:
        Customer(string state);
        void update(string message) override;
    private:
        string state;
     
};

#endif //CUSTOMER_H 