#include "SpecialMenu.h"

void SpecialMenu::notifyObservers(string message){

    for (vector<observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
        (*it)->update(message);
       
    }
  
}