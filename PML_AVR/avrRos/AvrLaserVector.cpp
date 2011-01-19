#include "AvrLaserVector.h"
#include <stdio.h>
using namespace maximus_sensors ;

AvrLaserVector::AvrLaserVector()  : ranges(18){} 


 AvrLaserVector::~AvrLaserVector(){
}

 AvrLaserVector::AvrLaserVector(uint8_t* data){
}

uint16_t  AvrLaserVector::serialize(uint8_t* data){
int offset=0;
offset += this->ranges.serialize(data + offset);

 return offset;

}

uint16_t  AvrLaserVector::deserialize(uint8_t* data){
int offset=0;
offset+= this->ranges.deserialize(data+offset);

 return offset;

}

uint16_t  AvrLaserVector::bytes(){
 int msgSize=0;
msgSize += sizeof(float);
return msgSize;

}
