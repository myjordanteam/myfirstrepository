#include "parking_parallel_type_info.h"
#include <iostream>

namespace parking_type
{
namespace jorden
{

ParkingParallelTypeInfo::ParkingParallelTypeInfo()
{
        parkpos_ = 0;
}

ParkingParallelTypeInfo::~ParkingParallelTypeInfo()
{
        parkpos_ = 0;
}

void ParkingParallelTypeInfo::GetParkingInfo(const std::string &info)
{
        // The position of the parking can be read from configuration
        std::cout<<"Process Parallal parking"<<std::endl;
}

}//end jorden
}//end parking_type
