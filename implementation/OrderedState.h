#ifndef ORDERED_STATE_H
#define ORDERED_STATE_H

#include "State.h"

class OrderedState : public State {
     void next(Order* order) override;
    void prev(Order* order) override {
        cout << "Created is the initial state.\n";
    }
    void printStatus()  {
        cout << "Order is created, waiting to be prepared.\n";
    }
};

#endif