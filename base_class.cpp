#include "base_class.h"


baseClass::baseClass(){
    cout<<"base class"<<endl;
}

void baseClass::setMessageID(uint16_t message_id) {message_id = message_id;}
void baseClass::setSenderID(uint16_t sender_id) {sender_id = sender_id;}
void baseClass::setReceiverID(uint16_t reciever_id) {reciever_id = reciever_id;}
void baseClass::setPayloadLength(uint16_t payload_length) {payload_length = payload_length;}
void baseClass::setPayload(string payload) {payload = payload;}

uint16_t baseClass::getMessageID() {return message_id;}
uint8_t baseClass::getSenderID() {return sender_id;}
uint8_t baseClass::getReceiverID() {return reciever_id;}
uint32_t baseClass::getPayloadLength() {return payload_length;}
string baseClass::setPayload(string payload) {payload = payload;}

virtual string baseClass::send(payload_1,payload_2,payload_3,payload_4){
    uint16_t message_id = getMessageID();
    uint8_t sender_id = getSenderID();
    uint8_t reciever_id = getReceiverID();

    payload = (std::to_string(payload_1) + std::to_string(payload_2) + std::to_string(payload_3) + payload_4);
    payload_length = length(payload_1+payload_2+payload_3+payload_4);

    setPayloadLength(payload_length); 
    setPayload(payload); 

    string result = (message_id+sender_id+reciever_id+payload_length+payload);
    return result;
    // data = [message_id+sender_id+reciever_id+payload_length+payload]    
    // payload = light+ camera + action +name; 
    // payload_length = length(payload); 
    // string data = “ffbb660100000002”; 

}

// virtual void baseClass::recieve(string data){
//     data = [msg_id+sender_id+reciever_id+payload_length+payload]  
    
// }