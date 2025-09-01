#ifndef BASE_PIZZA 
#define BASE_PIZZA

#include "Pizza.h"

class BasePizza : public Pizza {
    private:
        Pizza* Pizza;
    public:
        virtual double getPrice() = 0;
        virtual string getName() = 0;
};

#endif