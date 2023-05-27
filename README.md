# DATA Manager Program

## Agenda: A hypothetical protocol used to communicate with UAVs with common fields and payload:

Full packet: see picture data.png

## How to run this program: 
Directory: data_manager\
Files: main.cpp base_class.cpp base_class.h payload_data.cpp payload_data.h

1. cd data_manager directory 
2. make
3. ./dataManager


## Unit Testing
Case 1. Following should make sure light and camera has a single bit, if not it will throw an exception for the user 

    try {
        light_ = boost::lexical_cast<bool>(payload_byte_1);
        camera_ = boost::lexical_cast<bool>(payload_byte_2);
    }
    catch (boost::bad_lexical_cast const &e){
        cout << "[INFO:- expected 1 bit..0/1]" << endl;
    }

Case 2. Testing Receive Function: send hex byte string as an input to validate the output of the function. This should populates individual data and assign it to the member variable

Case 3. Testing Send Function: send data unsigned integer format and validate the function output. This function should return a string. 

Case 4: Following should throw an error if the total length of the payload more than 72.

    if(payload.length()<=72){
        payload_ = payload;
    }
    else cout<<"[INFO:Payload size out of bound]";

<mark >Console output of the program</mark>  
~/data_manager$ ./dataManager 

base class implementation \
derived class implementation

......Testing Recieve Function....................\
......Payload information.........................\
LIGHT::1 \
CAMERA::1 \
ACTION::8 \
PAYLOAD_NAME::AB 

........Commnunication Protocol....................\
MESSAGE ID::1\
SENDER ID::2\
RECEIVER ID::2\
PAYLOAD LENGTH::8\
PAYLOAD::010108AB

......Testing Send Function........................\
......Payload information..........................\
LIGHT::1\
CAMERA::1\
ACTION::8\
PAYLOAD_NAME::AB\
........Commnunication Protocol....................\
MESSAGE ID::1\
SENDER ID::2\
RECEIVER ID::2\
PAYLOAD LENGTH::5\
PAYLOAD::118AB\
MESSAGE::1225118AB\
