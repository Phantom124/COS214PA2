#ifndef READY_STATE_H
#define READY_STATE_H

#include "State.h"

class ReadyState : public State {
     void next(Order* order) override;
    void prev(Order* order) override;
    void printStatus() override {
        cout << "Order is baked and ready for delivery.\n";
    }
};

#endif