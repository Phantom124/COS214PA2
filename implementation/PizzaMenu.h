#ifndef PIZZAMENU_H
#define PIZZAMENU_H

#include"Menus.h"
class PizzaMenu:public Menus
{
    private:
        /* data */
    public:
        void notifyObserver(string message);
};




#endif //PIZZAMENU_H