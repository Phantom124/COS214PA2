#include "StuffedCrust.h"

StuffedCrust::StuffedCrust(double price, string name){
    this->price = price;
    this->name = name;
}

double StuffedCrust::getPrice(){
    return this->price;
}

string StuffedCrust::getName(){
    return this->name;
}