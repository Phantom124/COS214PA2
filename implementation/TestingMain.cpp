#include "ToppingGroup.h"
#include "Topping.h"
#include "StuffedCrust.h"
#include "PizzaDecorator.h"
#include <iostream>

int main(){

    ToppingGroup* pepperoni = new ToppingGroup("Pepperoni Group");
    Topping* pepperoniTopping = new Topping("Pepperoni", 20);

    pepperoni->add(pepperoniTopping);

    cout << pepperoni->getName() << endl;
    cout << pepperoni->getPrice() << endl;

    ToppingGroup* vegetarian = new ToppingGroup("Vegetarian");
    Topping* mushrooms = new Topping("Mushrooms", 12);
    Topping* greenPeppers = new Topping("Green Peppers", 10);
    Topping* onions = new Topping("Onions", 8);

    cout << vegetarian->getName() << endl;
    cout << vegetarian->getPrice() << endl;

    delete vegetarian;
    delete pepperoni;

    

    return 0;
}