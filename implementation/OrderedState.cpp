#include "OrderedState.h"
#include "PreparingState.h"

void OrderedState::next(Order* State){
    State->setState(new PreparingState());
    
}