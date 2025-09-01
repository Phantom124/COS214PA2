#include "ToppingGroup.h"
#include "Topping.h"
#include "StuffedCrust.h"
#include "PizzaDecorator.h"
#include <iostream>

int main(){

    ToppingGroup* pepperoni = new ToppingGroup();
    Topping* pepperoniTopping = new Topping("Pepperoni", 20);

    pepperoni->add(pepperoniTopping);

    cout << pepperoni->getName() << endl;

    delete pepperoni;

    return 0;
}