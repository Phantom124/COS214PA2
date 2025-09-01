#ifndef MENUS_H
#define MENUS_H

#include <vector>
#include "observer.h"
#include "Pizza.h"
#include <iostream>
using namespace std;
class Menus
{
    private:
        vector<observer*>observers;
        vector<Pizza*> pizzas;
    
    public:
        Menus(/* args */);
        ~Menus();
        void addObserver(observer* observer);
        void addPizza(Pizza* pizza);
        void removeObserver(observer* observer);
        void removePizza(Pizza* pizza);
        virtual void notifyObservers(string message)=0;
};



#endif //MENUS_H 