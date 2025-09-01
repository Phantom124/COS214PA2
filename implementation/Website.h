#ifndef WEBSITE_H 
#define WEBSITE_H 

#include "observer.h"
class Website:public observer
{
    private:
        string  url ;
    public:
        Website(string url);
        // ~Website();
        void update(string message);
};





#endif //WEBSITE_H