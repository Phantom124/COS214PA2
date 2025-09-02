#include "ToppingGroup.h"
#include "BasePizza.h"
#include "BasePizza.cpp"
#include "Topping.h"
#include "StuffedCrust.h"
#include "ExtraCheese.h"
#include "PizzaDecorator.h"

#include "Pizza.h"
#include "Pizza.cpp"

#include "observer.h"
#include "Customer.h"
#include "Menus.h"
#include "PizzaMenu.h"
#include <iostream>


int main(){

    // PizzaComponent* pepperoni = new ToppingGroup("Pepperoni Group");
    // Topping* pepperoniTopping = new Topping("Pepperoni", 20);

    // pepperoni->add(pepperoniTopping);

    // cout << pepperoni->getName() << endl;
    // cout << pepperoni->getPrice() << endl;

    // ToppingGroup* vegetarian = new ToppingGroup("Vegetarian");
    // Topping* mushrooms = new Topping("Mushrooms", 12);
    // Topping* greenPeppers = new Topping("Green Peppers", 10);
    // Topping* onions = new Topping("Onions", 8);
    // vegetarian->add(mushrooms);
    // vegetarian->add(greenPeppers);
    // vegetarian->add(onions);

    // cout << vegetarian->getName() << endl;
    // cout << vegetarian->getPrice() << endl;


    // // vegetarian->printPizza();

    // BasePizza* pepperoniPizza = new BasePizza(pepperoni);
    // delete pepperoniPizza;


    // delete vegetarian;
    // delete mushrooms;
    // delete onions;
    // delete greenPeppers;
    // delete pepperoni;

    observer* customer = new Customer("just arrived");
    Menus* Pizza = new PizzaMenu()  ;
    Pizza->addObserver(customer);
    Pizza->notifyObservers("hi we are changing the menu take a look for yourself !!");
    Pizza->removeObserver(customer);

    delete Pizza;
    delete customer;



    return 0;
}