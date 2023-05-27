#ifndef PAYLOAD_DATA_H
#define PAYLOAD_DATA_H

#include "base_class.h"

class payloadData: public baseClass{
    private: 
        bool light_;
        bool camera_;
        uint8_t action_;
        std::string name_; 
    public: 
        payloadData(bool light,bool camera,uint8_t action, std::string name);

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