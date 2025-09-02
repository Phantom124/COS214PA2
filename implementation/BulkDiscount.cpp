#include "BulkDiscount.h"

double BulkDiscount::applyDiscount(double totalPrice, int pizzaCount){
    double calc = 0.0;
    if(pizzaCount >= 5 ){
        calc = totalPrice*0.10;
    }
    return calc;
}