#ifndef BASE_CLASS_H
#define BASE_CLASS_H

#include <stdint.h>
#include <string>
#include <sstream>
#include <iostream> 
#include <cmath>
class baseClass{
    private: 
        uint16_t message_id_; 
        uint8_t sender_id_; 
        uint8_t reciever_id_; 
        uint32_t payload_length_; 
        std::string payload_; 
    public: 
        baseClass();
        void setMessageID(uint16_t message_id);
        void setSenderID(uint8_t sender_id);
        void setReceiverID(uint8_t reciever_id);
        void setPayloadLength(uint32_t payload_length);
        void setPayload(std::string payload);

        uint16_t getMessageID();
        uint8_t getSenderID();
        uint8_t getReceiverID();
        uint32_t getPayloadLength();
        std::string getPayload();

        virtual std::string send();
        virtual void recieve(std::string data);
};

#endif 