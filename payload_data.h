#ifndef BASE_CLASS_H
#define BASE_CLASS_H

#include "base_class.h"

// This class should have the following features:
//  Inherits the base class in Problem #1.
//  Initialization of all payload fields.
//  Access method for each and every payload field.
//  A Send function that returns a string containing the message to be sent.
//  A Receive function that accepts a string containing the message received, and populate the
// values of the payload fields.

class payloadData : public baseClass{
    private: 
        uint8_t light; // 1 bit 
        uint8_t camera; // 1 bit
        uint8_t action;// value < 2^6 
        uint8_t name;// value < 2^64 payload 64 bits 
        /*
            payload lengths for this is 72 bits
        */
    public: 
        payloadData(){
            uint8_t light = 1; 
            uint8_t camera = 2; 
            uint8_t action = 10; 
            string name = "camera_payload"; // payload name
            // 72 bits of payload_length; payload is 
            // value  < 2^3 if payload_length is 3 0...7
            // value < 2^32 
        }
        void setLight(uint8_t light){ }
        uint8_t getLight(){return light;}
        void setCamera(uint8_t light){ }
        uint8_t getCamera(){return camera;}
        void setAction(uint8_t action){ }
        uint8_t getCamera(){return action;}
        void setName(uint8_t name){ }
        string getName(){return name;}

        baseClass::send(light,camera,action,name);
        // baseClass::recieve(light,camera,action,name);
}


#endif 