#ifndef CUSTOMER_H
#define CUSTOMER_H 

#include "observer.h"
class Customer:public observer
{
    public:
        void update(string message);

};

#endif //CUSTOMER_H 