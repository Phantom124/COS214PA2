#include "ToppingGroup.h"
#include "Topping.h"
#include "StuffedCrust.h"
#include "PizzaDecorator.h"
#include "Pizza.h"
#include "Pizza.cpp"
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
    vegetarian->add(mushrooms);
    vegetarian->add(greenPeppers);
    vegetarian->add(onions);

    cout << vegetarian->getName() << endl;
    cout << vegetarian->getPrice() << endl;

    vegetarian->printPizza();

    delete vegetarian;
    delete pepperoni;



    return 0;
}