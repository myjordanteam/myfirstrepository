#include "parking_parallel_type_info.h"

namespace bmw
{
namespace jorden
{

ParkingSideTypeInfo::ParkingSideTypeInfo()
{
	parkpos_ = 0;
}

void ParkingSideTypeInfo::GetParkingInfo(std::string &info)
{
	// The position of the parking can be read from configuration
	parkpos_ = 200;
	info = string("The position of the parking system is ") + std::to_string(parkpos_);
}


}//end jorden
}//end bmw
