#include "PizzaMenu.h"

void PizzaMenu::notifyObservers(string message){
     for (vector<observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
        cout<<"notifying observer"<<endl;
        (*it)->update(message);
    }
}