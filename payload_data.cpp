#include "payload_data.h"
#include <iostream> 
#include <vector> 
#include <boost/lexical_cast.hpp>

using namespace std;

payloadData::payloadData(bool light,bool camera,uint8_t action,string name){
    cout<<"derived class implementation"<<endl; 
    setLight(light);
    setCamera(camera);
    setAction(action);
    setName(name);
}

void payloadData::setLight(bool light){light_= light;}
void payloadData::setCamera(bool camera){camera_=camera;}
void payloadData::setAction(uint8_t action){action_= action;}
void payloadData::setName(string name){name_=name;}

bool payloadData::getLight(){return light_;}
bool payloadData::getCamera(){return camera_;}
uint8_t payloadData::getAction(){return action_;}
std::string payloadData::getName(){return name_;}

std::string payloadData::send() {
    std::string payload = (std::to_string(light_) + std::to_string(camera_) + std::to_string(action_) + name_);
    baseClass::setPayload(payload);
    uint16_t message_id = baseClass::getMessageID();
    uint8_t sender_id = baseClass::getSenderID();
    uint8_t reciever_id = baseClass::getReceiverID();
   
    uint32_t payload_length = payload.length();
    baseClass::setPayloadLength(payload_length);
    uint8_t message_id_hex_format = static_cast<uint8_t>(sender_id & 0xFF);

    cout<<"test"<< unsigned (message_id_hex_format)<<endl; 

    string result = std::to_string(message_id)+std::to_string(sender_id)+std::to_string(reciever_id)+std::to_string(payload_length)+payload;
    return result;
}

void payloadData::recieve(std::string data) {
    bool light;
    bool camera;
    string payload_data = data.substr(16,data.length()); 
    string payload_byte_1 = payload_data.substr(0,2);
    string payload_byte_2 = payload_data.substr(2,2);
    string payload_byte_3 = payload_data.substr(4,2);
    string payload_byte_4 = payload_data.substr(6, payload_data.length()); 
    action_ = (uint8_t) strtol(payload_byte_3.c_str(), nullptr, 16);
    try {
        light_ = boost::lexical_cast<bool>(payload_byte_1);
        camera_ = boost::lexical_cast<bool>(payload_byte_2);
    }
    catch (boost::bad_lexical_cast const &e){
        cout << "[INFO:- expected 1 bit..0/1]" << endl;
    }
    name_ = payload_byte_4; 

    string common_fields = data.substr(0,16);
    string common_byte_1 = common_fields.substr(0,4);
    string common_byte_2 = common_fields.substr(4,2);
    string common_byte_3 = common_fields.substr(6,2);
    string common_byte_4 = common_fields.substr(8,14);
    
    uint16_t message_id = (uint8_t) strtol(common_byte_1.c_str(), nullptr, 16);
    uint8_t sender_id = (uint8_t) strtol(common_byte_2.c_str(), nullptr, 16);
    uint8_t reciever_id = (uint8_t) strtol(common_byte_3.c_str(), nullptr, 16);
    uint16_t payload_length = (uint8_t) strtol(common_byte_4.c_str(), nullptr, 16);

    baseClass::setMessageID(message_id);
    baseClass::setSenderID(sender_id);
    baseClass::setReceiverID(reciever_id);
    baseClass::setPayloadLength(payload_length);
    baseClass::setPayload(payload_data);
    
}