#ifndef EXTRA_CHEESE_CPP
#define EXTRA_CHEESE_CPP

#include "ExtraCheese.h"

ExtraCheese::ExtraCheese(double price, string name){
    this->price = price;
    this->name = name;
}

double ExtraCheese::getPrice(){
    return this->price;
}

string ExtraCheese::getName(){
    return this->name;
}

#endif