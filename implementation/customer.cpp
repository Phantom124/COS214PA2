#include "Customer.h";

Customer::Customer(string state):observer(){
    this->state = state;
}
void Customer::update(string message){
    // this->observerState.setState( message);
    state = message;

}