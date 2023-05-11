
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
    cout<<"PAYLOAD_NAME::"<<obj2.getName()<<endl;

    cout<<"MESSAGE ID::"<<obj2.getMessageID()<<endl; 
    cout<<"RECEIVER ID::"<<obj2.getReceiverID()<<endl; 
    cout<<"SENDER ID::"<<obj2.getSenderID()<<endl; 
    cout<<"PAYLOAD LENGTH::"<<obj2.getPayloadLength()<<endl;
    cout<<"PAYLOAD::"<<obj2.getPayload()<<endl;
    return 0; 
}