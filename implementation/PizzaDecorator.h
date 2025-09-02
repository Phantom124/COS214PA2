#ifndef PIZZA_DECORATOR
#define PIZZA_DECORATOR

#include "Pizza.h"

class PizzaDecorator : public Pizza {
    public:
        void addExtra(Pizza* extra){
            if (extra == nullptr) {return;}
            if (this->pizza == nullptr) {
                this->pizza = extra;
            }

            else {
                this->pizza->addExtra(extra);
            }
        };
        virtual double getPrice() = 0;
        virtual string getName() = 0;
        virtual ~PizzaDecorator(){
            delete pizza; this->pizza = nullptr;
        };
    protected:
        Pizza* pizza; 
};

#endif