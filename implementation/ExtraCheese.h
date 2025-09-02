#ifndef EXTRA_CHEESE
#define EXTRA_CHEESE

#include "PizzaDecorator.h"
#include <string>

using namespace std;

class ExtraCheese : public PizzaDecorator {
    
    public:
        ExtraCheese(string name);
        virtual double getPrice();
        virtual string getName();
        // ~ExtraCheese();
};

#endif