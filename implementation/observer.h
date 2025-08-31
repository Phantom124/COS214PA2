#ifndef OBSERVER_H
#define OBSERVER_H

#include "string"
using namespace std;
class observer{
    public:
    virtual void update(string update)=0;
    observer();//for the operation() in the uml ?
    // void setState(string state);
    private:
        // string state;

};

#endif //OBSERVER_H