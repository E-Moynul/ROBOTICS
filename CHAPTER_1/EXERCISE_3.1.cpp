#include<rosbot_control/rosbot_class.h>
#include<ros/ros.h>
#include<bits/stdc++.h>

using namespace std ;

pair<int,int> move_and_inform(RosbotClass robot,int n)
{
robot.move_forward(n) ;
pair<int,int>p={robot.get_position(1),robot.get_position(2)} ;
return p ;
}

int main (int argc,char **argv)
{
ros::init(argc,argv,"rosbot_node") ;

RosbotClass robot ;
pair<int,int>p=move_and_inform(robot,1) ;
}
