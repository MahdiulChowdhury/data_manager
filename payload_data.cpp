#include "payload_data.h"


payloadData::payloadData(uint8_t light,uint8_t camera,uint8_t action,string name){
    cout<<"derived class implementation"<<endl; 
    setLight(light);
    setCamera(camera);
    setAction(action);
    setName(name);
}

void payloadData::setLight(uint8_t light){light=light;}
void payloadData::setCamera(uint8_t camera){camera=camera;}
void payloadData::setAction(uint8_t action){action=action;}
void payloadData::setName(string name){name=name;}

uint8_t payloadData::getLight(uint8_t light){return light;}
uint8_t payloadData::getCamera(uint8_t camera){return camera;}
uint8_t payloadData::getAction(uint8_t action){return action;}
string payloadData::getName(string name){return name;}
