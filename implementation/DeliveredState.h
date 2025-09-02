#ifndef DELIVERED_STATE_H
#define DELIVERED_STATE_H

#include "State.h"

class ReadyState : public State {
    void next(Order* order) override {
        cout << "Order already delivered.\n";
    }
    void prev(Order* order) override ;
    void printStatus() override {
        cout << "Order has been delivered to the customer.\n";
    }
};

#endif