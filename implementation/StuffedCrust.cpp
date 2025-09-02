#ifndef STUFFED_CRUST_CPP
#define STUFFED_CRUST_CPP

#include "StuffedCrust.h"

StuffedCrust::StuffedCrust(string name){
    this->price = 20;
    this->name = name;
    this->pizza = nullptr;
}

double StuffedCrust::getPrice(){
    return this->price;
}

string StuffedCrust::getName(){
    return this->name;
}

#endif