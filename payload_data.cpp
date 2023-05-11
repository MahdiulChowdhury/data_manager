#include "payload_data.h"
#include <iostream> 
#include <vector> 

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
    //"0001 02 03 00000008 00")
    // "1210Camera_Payload"
    // obj2.recieve("110010101111"); 
    // data = "118A"

    // "010108AB"
    cout<<"test derived"<<endl;
    cout<<"message id::"<< getMessageID() << endl; 
    string byte_1 = data.substr(0,2);
    string byte_2 = data.substr(1,1);
    string byte_3 = data.substr(2,1);
    string byte_4 = data.substr(3,(data.length() - 2));
    // light_ = (std::stoi(byte_1.c_str())); 
    // camera_ = (std::stoi(byte_2.c_str()));
    // int number = atoi(byte_3.c_str());
    action_ = (uint8_t) strtol(byte_3.c_str(), nullptr, 16);
    cout<<unsigned(action_)<<endl; 
    // std::vector<uint8_t> myVector(byte_3.begin(), byte_3.end());
    // action_= &myVector[0];
   

    baseClass::recieve(data);
}