#include <iostream> 
#include "base_class.h"

using namesapce std; 

int main(){

    baseClass *obj = new dataProcessing(); 
    obj->senderID(1); 
    obj->receiverID(1); 
    return 0; 
}