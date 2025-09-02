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

void TestingCompositeAndDecoratorDesignPattern() {

    std::cout << "Composite and Observer Pattern" << std::endl;
    std::cout << "=============================" << std::endl;

    PizzaComponent* veggie = new ToppingGroup("Veggie");
    PizzaComponent* veggie2 = new ToppingGroup("Veggie2");

    // PizzaComponent* feta = new Topping("Feta", 50);
    // Build composite structure
    veggie->add(new Topping("Feta", 50));
    veggie->add(new Topping("Mushroom", 65));
    veggie->add(new Topping("Onion", 40));

    veggie2->add(veggie); // veggie is now owned by veggie2
    veggie2->add(new Topping("Green Pepper", 50));
    veggie2->add(new Topping("Olives", 35));

    std::cout << "Veggie1" <<std::endl;
    std::cout << veggie->getName() << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "Veggie2 extension" <<std::endl;
    std::cout << veggie2->getName() << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "price of veggie1 is: "<< std::endl;
    std::cout << veggie->getPrice() << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "price of veggie2 is: "<< std::endl;
    std::cout << veggie2->getPrice() << std::endl;

    // std::cout << "Decorator Time" << std::endl;
    // std::cout << "============================" << std::endl;
    // Pizza* myPizza  = new BasePizza(veggie2); // myPizza owns veggie2 (and veggie)
    // std::cout << myPizza->getName() << " is " << myPizza->getPrice() << std::endl;

    // Pizza* extra = new ExtraCheese();
    // extra->add(new StuffedCrust());
    // extra->add(new ExtraCheese());

    // std::cout << "Testing extra" << std::endl;
    // std::cout << "==========="<< std::endl;
    // std::cout << extra->getName() << " is " << extra->getPrice() << std::endl;

    // std::cout << "Adding the pizza " << std::endl;
    // std::cout << "==========" << std::endl;
    // extra->add(new BasePizza(new Topping("Mozzarella", 30)));
    // extra->printPizza();

    // // Only delete top-level objects
    // delete myPizza;
    // delete extra;
    // std::cout << "===== STRATEGY DESIGN PATTERN =====\n";
    // Order* order = new Order();

    // // add pizzas
    // order->addPizza(new BasePizza(new Topping("Cheese", 15.0)));
    // order->addPizza(new BasePizza(new Topping("Pepperoni", 20.0)));

    // //RegularPrice
    // order->chooseDiscountStrategy();
    // std::cout << "Regular price: " << order->getFinalPrice() << std::endl;

    // //FamilyDiscount
    // order->setFamily(true);
    // order->chooseDiscountStrategy();
    // std::cout << "Family discount price: " << order->getFinalPrice() << std::endl;

    // //BulkDiscount (add more pizzas)
    // order->setFamily(false);
    // for (int i = 0; i < 4; ++i)
    //     order->addPizza(new BasePizza(new Topping("Veg", 10.0)));
    // order->chooseDiscountStrategy();
    // std::cout << "Bulk discount price: " << order->getFinalPrice() << std::endl;

    // delete order;
}

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

    TestingCompositeAndDecoratorDesignPattern();

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