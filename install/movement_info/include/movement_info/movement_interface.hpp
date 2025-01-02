#ifndef MOVEMENT_INTERFACE_HPP
#define MOVEMENT_INTERFACE_HPP

#include <rclcpp/rclcpp.hpp>
#include "movement_info_msgs/msg/movement_info.hpp"

class MovementInterface : public rclcpp::Node
{
public:
    MovementInterface(const std::string &node);
    virtual void publish_movement_info();
    void setMessage(movement_info_msgs::msg::MovementInfo message);
    movement_info_msgs::msg::MovementInfo getMessage();

private:
    rclcpp::Publisher<movement_info_msgs::msg::MovementInfo>::SharedPtr publisher_;
    movement_info_msgs::msg::MovementInfo message_;
};

#endif // MOVEMENT_INTERFACE_HPP