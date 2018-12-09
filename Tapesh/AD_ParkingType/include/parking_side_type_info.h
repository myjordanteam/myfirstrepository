#ifndef PARKING_SIDE_TYPE_INFO
#define PARKING_SIDE_TYPE_INFO
#include <iparking_type_info.h>

namespace bmw
{
namespace jorden
{
/**
 * /Class ParkingSideTypeInfo
 * 
 * /Bref  This is an concrete class 
 *  which provide detail information for the
 *  type of paring system of type side parinking
 * 
 * /author Team Jordan
 * /Date   07 Dec 2018
 * */

class ParkingSideTypeInfo : public IParkingTypeInfo
{
	public :
	
	ParkingSideTypeInfo();
	void GetParkingInfo(std::string &info);
	
	private :
	
	uint16_t parkpos_;
	
};

}//end jorden
}//end bmw

#endif //PARKING_SIDE_TYPE_INFO
