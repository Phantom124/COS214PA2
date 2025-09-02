#include "Menus.h"
#include <vector>
using namespace std;


void Menus::addObserver(observer* observer){
    observers.push_back(observer);
}
void Menus::addPizza(Pizza* pizza){
    pizzas.push_back(pizza);
}

void Menus::removeObserver(observer* obs) {
    for (vector<observer*>::iterator it = observers.begin(); it != observers.end(); ++it) {
        if (*it == obs) {
            cout<<"Observer :"<<obs <<" is getting detached"<<endl;
            observers.erase(it);
            break;
        }
    }
}

void Menus::removePizza(Pizza* pizza){
    for(vector<Pizza*>::iterator it = pizzas.begin();it != pizzas.end();++it){
        if(*it==pizza){
            cout<<"Observer :"<<pizza <<" is getting detached"<<endl;
            pizzas.erase(it);
            break;

        }
    }
}