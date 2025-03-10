#include<rosbot_control/rosbot_class.h>
#include<ros/ros.h>
#include<bits/stdc++.h>

using namespace std ;

int main (int argc,char **argv)
{
ros::init(argc,argv,"rosbot_node") ;

RosbotClass robot ;
robot.turn("clockwise",1) ;
//robot.turn("counterclockwise",1) ;

}
