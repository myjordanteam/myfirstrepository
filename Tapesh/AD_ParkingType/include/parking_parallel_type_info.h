#ifndef PARKING_PARALLEL_TYPE_INFO
#define PARKING_PARALLEL_TYPE_INFO

#include <iparking_type_info.h>
namespace bmw
{
namespace jorden
{
/**
 * /Class ParkingParallelTypeInfo
 * 
 * /Bref  This is an concrete class 
 *  which provide detail information for 
 *  type of paring system of type parallel 
 *  parking
 * 
 * /author Team Jordan
 * /Date   07 Dec 2018
 * */
class ParkingParallelTypeInfo : public IParkingTypeInfo
{
	public :
	
	ParkingParallelTypeInfo();
	void GetParkingInfo(std::string &info);
	
	private :
	
	uint16_t parkpos_;
	
};

}//end jorden
}//end bmw
#endif //PARKING_PARALLEL_TYPE_INFO
