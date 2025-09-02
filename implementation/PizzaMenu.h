#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include"Menus.h"
#include "Pizza.h"
#include "observer.h"
class PizzaMenu:public Menus
{
    public:
        void  notifyObservers(string message) ;
};




#endif //PIZZAMENU_H