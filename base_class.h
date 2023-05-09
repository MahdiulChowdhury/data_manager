#ifndef BASE_CLASS_H
#define BASE_CLASS_H

#include <sstream>

//string data = “ffbb 66 01 00000002”
// Implement a C++ class that can be used as the base class to develop specific messages later. This class
// should have the following features:
//  Initialization of common fields.
//  Access method for each and every common field.
//  A virtual Send function that returns a string containing the message to be sent.
//  A virtual Receive function that accepts a string containing the message received, and populates
// the values of the common fields.


class baseClass{
    private: 
        uint16_t message_id; 
        uint8_t sender_id; 
        uint8_t reciever_id; 
        uint32_t payload_length; 
        std::string payload; 
    public: 
        void setMessageID(uint16_t message_id);
        void setSenderID(uint8_t sender_id);
        void setReceiverID(uint8_t reciever_id);
        void setPayloadLength(uint32_t payload_length);
        void setPayload(string payload);

        uint16_t getMessageID();
        uint8_t getSenderID();
        uint8_t getReceiverID();
        uint32_t getPayloadLength();

        void setSenderID(); 
        void setRecieverID(); 
        void setPayloadLength(); 
        void setPayload(); 

        virtual string send(light,camera,action,string name);
        virtual void recieve(string data);
}

#endif 