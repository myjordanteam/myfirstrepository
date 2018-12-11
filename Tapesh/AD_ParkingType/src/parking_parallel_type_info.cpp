#include "parking_parallel_type_info.h"

namespace bmw
{
namespace jorden
{
	
ParkingParallelTypeInfo::ParkingParallelTypeInfo()
{
	parkpos_ = 0;
}

void ParkingParallelTypeInfo::GetParkingInfo(std::string &info)
{
	// The position of the parking can be read from configuration
	parkpos_ = 100;
	info = std::string("The position of the parking system is ") + std::to_string(parkpos_);
}

}//end jorden
}//end bmw
