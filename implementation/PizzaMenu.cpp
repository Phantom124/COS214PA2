#include "PizzaMenu.h"

void PizzaMenu::notifyObserver(string message){
     for (vector<observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
        (*it)->update(message);
    }
}