#ifndef PIZZA_H
#define PIZZA_H

#include <string>

using namespace std;

class Pizza {
    public:
        virtual double getPrice() = 0;
        virtual string getName() = 0;
        void printPizza();
    protected:
        double price;
        string name;
};

#endif