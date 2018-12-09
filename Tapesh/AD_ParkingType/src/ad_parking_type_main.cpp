#include "iparking_type_info.h"
#include "parking_parallel_type_info.h"
#include "parking_side_type_info.h"
#include <memory>
#include <iostream>

int main()
{
	std::string info;
	sts::unique_ptr<bmw::jorden::IParkingTypeInfo> parallel_info = std::make_unique<bmw::jorden::ParkingParallelTypeInfo>();
	
	parallel_info->GetParkingInfo(info)
	std::cout<<"Information for parallel parking is "<<info<<std::endl;
	return 0;
}
