#include "base_class.h"
#include <sstream>

using namespace std;

baseClass::baseClass(){cout<<"base class"<<endl;}

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

std::string baseClass::send(){return "";}

void baseClass::recieve(std::string  data){}