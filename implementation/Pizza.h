#ifndef PIZZA_H
#define PIZZA_H

#include <string>
#include "DiscountStrategy.h"
using namespace std;

class Pizza {
    public:
        virtual void addExtra(Pizza* decorator) = 0;
        virtual double getPrice() = 0;
        virtual string getName() = 0;
        void printPizza();
    //       Order(DiscountStrategy* strategy);
    void setStrategy(discountStrategy* newStrategy);
    protected:
        double price;
        string name;
    private:
        discountStrategy* strategy;
        
};

#endif