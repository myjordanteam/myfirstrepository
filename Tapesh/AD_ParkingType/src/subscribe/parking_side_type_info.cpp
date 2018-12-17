#include "parking_side_type_info.h"
#include <iostream>

namespace parking_type
{
namespace jorden
{

ParkingSideTypeInfo::ParkingSideTypeInfo()
{
        parkpos_ = 0;
}

ParkingSideTypeInfo::~ParkingSideTypeInfo()
{
        parkpos_ = 0;
}

void ParkingSideTypeInfo::GetParkingInfo(const std::string &info)
{
        // The position of the parking can be read from configuration
        std::cout<<"Process Side parking "<<info<<std::endl;
}


}//end jorden
}//end parking_type
