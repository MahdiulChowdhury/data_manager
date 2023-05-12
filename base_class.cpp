#include "base_class.h"
#include <sstream>

using namespace std;

baseClass::baseClass(){
    cout<<"base class"<<endl;
}

void baseClass::setMessageID(uint16_t message_id) {message_id_ = message_id;}
void baseClass::setSenderID(uint8_t sender_id) {sender_id_ = sender_id;}
void baseClass::setReceiverID(uint8_t reciever_id) {reciever_id_ = reciever_id;}
void baseClass::setPayloadLength(uint32_t payload_length) {payload_length_ = payload_length;}
void baseClass::setPayload(std::string payload) {payload_ = payload;}

uint16_t baseClass::getMessageID() {return message_id_;}
uint8_t baseClass::getSenderID() {return sender_id_;}
uint8_t baseClass::getReceiverID() {return reciever_id_;}
uint32_t baseClass::getPayloadLength() {return payload_length_;}

std::string baseClass::getPayload() {return payload_;}

std::string baseClass::send(){
    uint16_t message_id = getMessageID();
    uint8_t sender_id = getSenderID();
    uint8_t reciever_id = getReceiverID();
    std::string payload = getPayload(); 
    payload_length_ = payload.length();

    uint8_t message_id_hex_format = static_cast<uint8_t>(sender_id_ & 0xFF);

    string result = std::to_string(message_id)+std::to_string(sender_id)+std::to_string(reciever_id)+std::to_string(payload_length_)+payload;
    
    // // payload = (std::to_string(payload_1) + std::to_string(payload_2) + std::to_string(payload_3) + payload_4);
    // payload_length = length(payload);

    // setPayloadLength(payload_length); 
   
    // //  setPayload(payload); 
    // string result = (message_id+sender_id+reciever_id+payload_length+payload);
    // = x(message_id)
    // return result;
    // // data = [message_id+sender_id+reciever_id+payload_length+payload]    
    // // payload = light+ camera + action +name; 
    // // payload_length = length(payload); 
    // //string data = “ffbb660100000002”; 
    // string result = 0x0001 02 03 00000008 00
    // return string; 

    
    // cout << (data >> 4) << endl; 
    cout<<result<<endl; 
    return result;

}

void baseClass::recieve(std::string  data){}