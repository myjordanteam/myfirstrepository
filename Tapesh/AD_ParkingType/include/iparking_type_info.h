#ifndef IPARKING_TYPE_INFO
#define IPARKING_TYPE_INFO
#include <cstddef>
#include <string>

namespace bmw
{
namespace jorden
{
	
/**
 * /Class IParkingTypeInfo
 * 
 * /Bref  This is an interface class 
 *  which provide detail information for 
 *  type of paring system user selects
 * 
 * /author Team Jordan
 * /Date   07 Dec 2018
 * */
 
class IParkingTypeInfo
{
	
	public:
	
	/**
	 * /bref Inerface which provide information about type of 
	 *       parking 
	 * @param parameter1 Output paramter return information 
	 *        about the parking information
	 * */
	virtual void GetParkingInfo(std::string &info) = 0;
	
};

}//end jorden
}//end bmw

#endif //IPARKING_TYPE_INFO
