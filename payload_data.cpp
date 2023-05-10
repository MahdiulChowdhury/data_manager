#include "payload_data.h"
#include <iostream> 

using namespace std;

payloadData::payloadData(bool light,bool camera,uint8_t action,string name){
    cout<<"derived class implementation"<<endl; 
    setLight(light);
    setCamera(camera);
    setAction(action);
    setName(name);
    // baseClass::setMessageID(1);
    // baseClass::sender_id_(2);
    // baseClass::reciever_id_(3);
}

void payloadData::setLight(bool light){light_=light;}
void payloadData::setCamera(bool camera){camera_=camera;}
void payloadData::setAction(uint8_t action){action_=action;}
void payloadData::setName(string name){name_=name;}

bool payloadData::getLight(){return light_;}
bool payloadData::getCamera(){return camera_;}
uint8_t payloadData::getAction(){return action_;}
std::string payloadData::getName(){return name_;}

// string baseClass::send() {
//     // cout<<"sending payload to base class"<<endl; 
//     // payload = (std::to_string(light) + std::to_string(camera) + std::to_string(action) + name);
//     // baseClass::setPayload(payload);
//     // return payload; 
// }