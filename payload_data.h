#ifndef PAYLOAD_DATA_H
#define PAYLOAD_DATA_H

#include "base_class.h"



// This class should have the following features:
//  Inherits the base class in Problem #1.
//  Initialization of all payload fields.
//  Access method for each and every payload field.
//  A Send function that returns a string containing the message to be sent.
//  A Receive function that accepts a string containing the message received, and populate the
// values of the payload fields.

class payloadData: public baseClass{
    private: 
        bool light_; // 1 bit 
        bool camera_; // 1 bit
        uint8_t action_;// value < 2^6 
        std::string name_;// value < 2^64 payload 64 bits 
        /*
            payload lengths for this is 72 bits
        */
    public: 
        payloadData(bool light,bool camera,uint8_t action, std::string name);
        //     uint8_t light = 1; 
        //     uint8_t camera = 2; 
        //     uint8_t action = 10; 
        //     string name = "camera_payload"; // payload name
        //     // 72 bits of payload_length; payload is 
        //     // value  < 2^3 if payload_length is 3 0...7
        //     // value < 2^32 
        // }
        void setLight(bool light);
        bool getLight();

        void setCamera(bool camera);
        bool getCamera();

        void setAction(uint8_t action);
        uint8_t getAction();

        void setName(std::string name);
        std::string getName();

        std::string send(); 
        void recieve(std::string  data);
        
       
};


#endif 