
#include "base_class.h"
#include "payload_data.h"

using namespace std; 

int main(){
    // baseClass *obj = new dataProcessing(1,2,10,"sensor_payload"); 
    payloadData obj2(1,1,10,"sensor_payload"); 
    // obj->setMessageID(1); 
    // obj->setSenderID(2); 
    // obj->setSenderID(3); 
    obj2.setMessageID(2);
    cout<<"LIGHT::"<<obj2.getLight()<<endl; 
    cout<<"CAMERA::"<<obj2.getCamera()<<endl;
    cout<<"ACTION::"<<unsigned(obj2.getAction())<<endl;
    cout<<"PAYLOAD::"<<obj2.getName()<<endl;
    // cout<<"MESSAGE ID::" << unsigned(obj.getMessageID())<<endl; 
    // obj2->send(); 
    return 0; 
}