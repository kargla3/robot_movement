#include "movement_info/movement.hpp"

Movement::Movement() : Node("movement")
{
    this->declare_parameter<float>("direction_treshold", 0.1);
    this->declare_parameter<float>("heading_treshold", 0.1);
    this->declare_parameter<std::string>("movement_topic", "/movement_info");
    this->declare_parameter<std::string>("odometry_topic", "/diff_drive/odom");
    this->declare_parameter<std::string>("velocity_topic", "/diff_drive/cmd_vel");

    this->get_parameter("direction_treshold", dir_treshold);
    this->get_parameter("heading_treshold", heading_treshold);
    this->get_parameter("movement_topic", movement_topic);
    this->get_parameter("odometry_topic", odometry_topic);
    this->get_parameter("velocity_topic", velocity_topic);

    if (movement_topic.empty() || odometry_topic.empty() || velocity_topic.empty())
    {
        RCLCPP_ERROR(this->get_logger(), "One or more parameters are empty");
        rclcpp::shutdown();
    }

    RCLCPP_INFO(this->get_logger(), "Direction treshold: '%f'", dir_treshold);
    RCLCPP_INFO(this->get_logger(), "Heading treshold: '%f'", heading_treshold);
    RCLCPP_INFO(this->get_logger(), "Movement topic: '%s'", movement_topic.c_str());
    RCLCPP_INFO(this->get_logger(), "Odometry topic: '%s'", odometry_topic.c_str());
    RCLCPP_INFO(this->get_logger(), "Velocity topic: '%s'", velocity_topic.c_str());

    publisher_ = this->create_publisher<movement_info_msgs::msg::MovementInfo>(movement_topic, 10);
    odom_subscriber = this->create_subscription<nav_msgs::msg::Odometry>(odometry_topic, 10, std::bind(&Movement::odometry_callback, this, std::placeholders::_1));
    vel_subscriber = this->create_subscription<geometry_msgs::msg::TwistStamped>(velocity_topic, 10, std::bind(&Movement::velocity_callback, this, std::placeholders::_1));
    message_.heading = movement_info_msgs::msg::MovementInfo::STRAIGHT;
    message_.movement = movement_info_msgs::msg::MovementInfo::STANDSTILL;
    timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Movement::publish_movement_info, this));
}

void Movement::publish_movement_info()
{
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message_.movement.c_str());
    RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message_.heading.c_str());
    publisher_->publish(message_);
}

void Movement::odometry_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
{
    if (msg->twist.twist.angular.z < heading_treshold && msg->twist.twist.angular.z > -heading_treshold)
    {
        message_.heading = movement_info_msgs::msg::MovementInfo::STRAIGHT;
    }
    else if (msg->twist.twist.angular.z > heading_treshold)
    {
        message_.heading = movement_info_msgs::msg::MovementInfo::LEFT;
    }
    else if (msg->twist.twist.angular.z < -heading_treshold)
    {
        message_.heading = movement_info_msgs::msg::MovementInfo::RIGHT;
    }
}

void Movement::velocity_callback(const geometry_msgs::msg::TwistStamped::SharedPtr msg)
{
    if (msg->twist.linear.x < dir_treshold && msg->twist.linear.x > -dir_treshold)
    {
        message_.movement = movement_info_msgs::msg::MovementInfo::STANDSTILL;
    }
    else if (msg->twist.linear.x > dir_treshold)
    {
        message_.movement = movement_info_msgs::msg::MovementInfo::FORWARD;
    }
    else if (msg->twist.linear.x < dir_treshold)
    {
        message_.movement = movement_info_msgs::msg::MovementInfo::BACKWARD;
    }
}