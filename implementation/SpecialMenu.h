#ifndef SPECIALMENU_H
#define SPECIALMENU_H

#include "Menus.h"
class SpecialMenu:public Menus
{
    public:
    SpecialMenu();
    void notifyObservers(string message);
    private:

}


#endif //SPECIALMENU_H 