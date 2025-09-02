#ifndef PREPARING_STATE_H
#define PREPARING_STATE_H

#include "State.h"

class PreparingState : public State {
    void next(Order* order) override;
    void prev(Order* order) override ;
    void printStatus() override {
        cout << "Order is being prepared.\n";
    }
};

#endif