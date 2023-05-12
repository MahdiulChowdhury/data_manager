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
    // cout<<"sending payload to base class"<<endl; 
    std::string payload = (std::to_string(light_) + std::to_string(camera_) + std::to_string(action_) + name_);
    baseClass::setPayload(payload);
    // baseClass::send(); 
    return payload;
}

void payloadData::recieve(std::string data) {

    // "01 01 08AB"
    bool light;
    bool camera;
    string byte_1 = data.substr(0,2);
    string byte_2 = data.substr(2,2);
    string byte_3 = data.substr(4,2);
    string byte_4 = data.substr(6,(data.length() - 6)); 
    action_ = (uint8_t) strtol(byte_3.c_str(), nullptr, 16);
    try {
        light_ = boost::lexical_cast<bool>(byte_1);
        camera_ = boost::lexical_cast<bool>(byte_2);
    }
    catch (boost::bad_lexical_cast const &e){
        cout << "[INFO:- expected 1 bit..0/1]" << endl;
    }
    name_ = byte_4; 

    
}