#ifndef EXTRA_CHEESE_CPP
#define EXTRA_CHEESE_CPP

#include "ExtraCheese.h"

ExtraCheese::ExtraCheese(string name){
    this->price = 12;
    this->name = name;
}

double ExtraCheese::getPrice(){
    return this->price;
}

string ExtraCheese::getName(){
    return this->name;
}

#endif