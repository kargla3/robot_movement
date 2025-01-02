#ifndef MOVEMENT_HPP
#define MOVEMENT_HPP

#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "movement_info_msgs/msg/movement_info.hpp"
#include "yaml-cpp/yaml.h"
#include "movement_info/movement_interface.hpp"

// Movement class
// This class is responsible for determining the movement of the robot
// It subscribes to odometry and velocity topics and publishes the movement info
class Movement : public MovementInterface
{
public: 
    Movement();
    // Publishes the movement info
    void publish_movement_info() override;
    // Callback for odometry topic if the message is received
    void odometry_callback(const nav_msgs::msg::Odometry::SharedPtr msg);
    // Callback for velocity topic if the message is received
    void velocity_callback(const geometry_msgs::msg::TwistStamped::SharedPtr msg);
    // Returns the message
    movement_info_msgs::msg::MovementInfo getMessage();
    // Sets the heading treshold
    void setHeadingTreshold(float treshold);
    // Sets the direction treshold
    void setDirectionTreshold(float treshold);
private:
    // Publisher for movement info
    rclcpp::Publisher<movement_info_msgs::msg::MovementInfo>::SharedPtr publisher_;
    // Subscriber for odometry topic
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber;
    // Subscriber for velocity topic
    rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr vel_subscriber;
    // Timer for publishing the movement info
    rclcpp::TimerBase::SharedPtr timer_;
    // Message to be published
    movement_info_msgs::msg::MovementInfo message_;
    // Direction, heading tresholds
    float dir_treshold, heading_treshold;
    // Topics
    std::string odometry_topic, velocity_topic, movement_topic;
};

#endif // MOVEMENT_HPP