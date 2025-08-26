#ifndef MENUS_H
#define MENUS_H

#include "vector"
#include "observer.h"
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
        void notifyObservers(string message);
};



#endif//MENUS_H 