
#include "base_class.h"
#include "payload_data.h"

using namespace std; 

int main(){

    baseClass obj(); 
    payloadData obj2(1,1,10,"sensor_payload");  
    obj2.setMessageID(1);
    obj2.setSenderID(2);
    obj2.setReceiverID(3);
    obj2.send(); 
    // obj2.recieve("1110Camera_Payload"); 
    // obj2.recieve("110010101111"); 
    obj2.recieve("1110sensor_payload"); 

    cout<<endl; 
    cout<<"......Payload information........................."<<endl; 
    cout<<"LIGHT::"<<obj2.getLight()<<endl; 
    cout<<"CAMERA::"<<obj2.getCamera()<<endl;
    cout<<"ACTION::"<<unsigned(obj2.getAction())<<endl;
    cout<<"PAYLOAD_NAME::"<<obj2.getName()<<endl;
    cout<<endl; 
    cout<<"........Commnunication Protocol...................."<<endl; 
    cout<<"MESSAGE ID::"<<obj2.getMessageID()<<endl; 
    cout<<"SENDER ID::"<<unsigned(obj2.getSenderID())<<endl; 
    cout<<"RECEIVER ID::"<<unsigned(obj2.getReceiverID())<<endl; 
    cout<<"PAYLOAD LENGTH::"<<obj2.getPayloadLength()<<endl;
    cout<<"PAYLOAD::"<<obj2.getPayload()<<endl;

    return 0; 
}