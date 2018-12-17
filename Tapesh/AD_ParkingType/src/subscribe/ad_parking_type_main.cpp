#include "iparking_type_info.h"
#include "parking_parallel_type_info.h"
#include "parking_side_type_info.h"
#include <memory>
#include <iostream>

#include "ros/ros.h"
#include "std_msgs/String.h"

/* Constant declarations
 * */
const std::string c_sideparking = "sideparking";
const std::string c_parallalparking = "parallalparking";
const std::string c_nodename = "GetParkingType";
const std::string c_nodemsg = "parkingtype";

/* Callback function for the subscriber Node
 * */
 void h_getParkingType(const std_msgs::String::ConstPtr& msg)
 {
         
         ROS_INFO(" h_getParkingType : [%s]", msg->data.c_str());
         if(msg->data == c_parallalparking)
         {
                std::unique_ptr<parking_type::jorden::IParkingTypeInfo> parallel_info = std::make_unique<parking_type::jorden::ParkingParallelTypeInfo>();
        
                parallel_info->GetParkingInfo(std::string(msg->data));
                std::cout<<"Information for parallel parking is "<<msg->data<<std::endl;
         }
         else if(msg->data == c_sideparking)
         {
                std::unique_ptr<parking_type::jorden::IParkingTypeInfo> parallel_info = std::make_unique<parking_type::jorden::ParkingSideTypeInfo>();
        
                parallel_info->GetParkingInfo(std::string(msg->data));
                std::cout<<"Information for Side parking is "<<msg->data<<std::endl;
         }
         
 }

int main(int argc, char **argv)
{
        // Initialize the node
        ros::init(argc, argv, c_nodename);
        
        //declare the node
        ros::NodeHandle node;
        
        
        ros::Subscriber sub = node.subscribe(c_nodemsg, 100, h_getParkingType);
        ros::spin();
        
        return 0;
}
