#ifndef MOVEMENT_HPP
#define MOVEMENT_HPP

#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "movement_info_msgs/msg/movement_info.hpp"
#include "yaml-cpp/yaml.h"
#include "movement_info/movement_interface.hpp"

class Movement : public MovementInterface
{
public: 
    Movement();
    void publish_movement_info() override;
    void odometry_callback(const nav_msgs::msg::Odometry::SharedPtr msg);
    void velocity_callback(const geometry_msgs::msg::TwistStamped::SharedPtr msg);
    movement_info_msgs::msg::MovementInfo getMessage();
    void setHeadingTreshold(float treshold);
    void setDirectionTreshold(float treshold);
private:
    rclcpp::Publisher<movement_info_msgs::msg::MovementInfo>::SharedPtr publisher_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber;
    rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr vel_subscriber;
    rclcpp::TimerBase::SharedPtr timer_;
    movement_info_msgs::msg::MovementInfo message_;
    float dir_treshold, heading_treshold;
    std::string odometry_topic, velocity_topic, movement_topic;
};

#endif // MOVEMENT_HPP