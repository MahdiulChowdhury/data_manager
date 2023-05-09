#include <iostream> 
#include "base_class.h"

using namesapce std; 

int main(){

    baseClass *obj = new dataProcessing(1,2,10,"sensor_payload"); 
    obj->setMessageID(1); 
    obj->setSenderID(2); 
    obj->setSenderID(3); 
    return 0; 
}