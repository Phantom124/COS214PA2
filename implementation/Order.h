#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "State.h"
#include "Pizza.h"

class Order {
    private:
        State* state;
        vector<Pizza*> pizzas;
    public:
        void setState(State state);
        void next() { state->next(this); }
        void prev() { state->prev(this); }
        virtual void printStatus() { state->printStatus(); }
};

#endif