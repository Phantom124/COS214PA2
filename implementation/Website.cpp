#include "Website.h"

Website::Website(string url):observer(){
    this->url = url ;
}
void Website::update(string message){
    this->url = message;
}