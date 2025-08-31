#ifndef CUSTOMER_H
#define CUSTOMER_H 

#include "observer.h"
#include "PizzaMenu.h"
class Customer:public observer
{
    public:
        Customer();
        void update(string message);
    private:
        PizzaMenu* subject;
        observer* observerState; 
};

#endif //CUSTOMER_H 