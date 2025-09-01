#ifndef SPECIALMENU_H
#define SPECIALMENU_H

#include "Menus.h"
class SpecialMenu:public Menus
{
    public:
    void notifyObservers(string message);

};


#endif //SPECIALMENU_H 