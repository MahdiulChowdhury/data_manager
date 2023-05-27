/*
    author: Mahdiul Chowdhury

*/

#include "base_class.h"
#include "payload_data.h"

using namespace std; 

int main(){

    std::string message ="";
    payloadData obj2(1,1,10,"sensor_payload");  //initialize dervied class
    obj2.setMessageID(1);
    obj2.setSenderID(2);
    obj2.setReceiverID(3);

    baseClass *ptr; 
    ptr = &obj2;
    /*
        This block of code test recieve function 
    */
    ptr->recieve("0001020200000008010108AB");
    cout<<endl;
    cout<<"......Testing Recieve Function...................."<<endl;  
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
    /*
        This block of code test send function 
    */
    message = ptr->send(); 
    cout<<endl; 
    cout<<"......Testing Send Function........................"<<endl; 
    cout<<endl; 
    cout<<"......Payload information.........................."<<endl; 
    cout<<"LIGHT::"<<obj2.getLight()<<endl; 
    cout<<"CAMERA::"<<obj2.getCamera()<<endl;
    cout<<"ACTION::"<<unsigned(obj2.getAction())<<endl;
    cout<<"PAYLOAD_NAME::"<<obj2.getName()<<endl;
    cout<<"........Commnunication Protocol...................."<<endl; 
    cout<<"MESSAGE ID::"<<obj2.getMessageID()<<endl; 
    cout<<"SENDER ID::"<<unsigned(obj2.getSenderID())<<endl; 
    cout<<"RECEIVER ID::"<<unsigned(obj2.getReceiverID())<<endl; 
    cout<<"PAYLOAD LENGTH::"<<obj2.getPayloadLength()<<endl;
    cout<<"PAYLOAD::"<<obj2.getPayload()<<endl;
    cout<<"MESSAGE::"<<message<<endl; 

    return 0; 
}
