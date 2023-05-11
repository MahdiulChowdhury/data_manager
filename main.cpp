
#include "base_class.h"
#include "payload_data.h"

using namespace std; 

int main(){
    payloadData obj2(1,1,10,"sensor_payload");  
    obj2.setMessageID(1);
    obj2.setSenderID(2);
    obj2.setReceiverID(3);
    cout<<"LIGHT::"<<obj2.getLight()<<endl; 
    cout<<"CAMERA::"<<obj2.getCamera()<<endl;
    cout<<"ACTION::"<<unsigned(obj2.getAction())<<endl;
    cout<<"PAYLOAD::"<<obj2.getName()<<endl;

    return 0; 
}