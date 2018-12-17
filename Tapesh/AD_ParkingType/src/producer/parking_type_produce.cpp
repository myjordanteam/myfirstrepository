#include <memory>
#include <iostream>

#include "ros/ros.h"
#include "std_msgs/String.h"

/* Constant declarations
 * */

const std::string c_nodename = "SetParkingType";

const std::string c_nodemsg = "parkingtype";

int main(int argc, char **argv)
{
    ros::init(argc, argv, c_nodename);
    
    ros::NodeHandle n;
    ros::Publisher chatter_pub = n.advertise<std_msgs::String>(c_nodemsg, 100);
    ros::Rate loop_rate(10);
    
    int count = 0;
    
    while (ros::ok())
    {
        std_msgs::String msg;
        
        if(argc > 1)
        {
            msg.data = argv[1];
            ROS_INFO("%s", msg.data.c_str());
            chatter_pub.publish(msg);
            ros::spinOnce();
            loop_rate.sleep();
            ++count;
        }
        else
        {
            break;
        }
    }
    return 0;
}
