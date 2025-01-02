#ifndef MOVEMENT_INTERFACE_HPP
#define MOVEMENT_INTERFACE_HPP

#include <rclcpp/rclcpp.hpp>
#include "movement_info_msgs/msg/movement_info.hpp"

// MovementInterface class
// This class is used to create a publisher for movement info
class MovementInterface : public rclcpp::Node
{
public:
    MovementInterface(const std::string &node);
    // Publishes the movement info
    virtual void publish_movement_info();
    // Sets the message
    void setMessage(movement_info_msgs::msg::MovementInfo message);
    // Returns the message
    movement_info_msgs::msg::MovementInfo getMessage();

private:
    // Publisher for movement info
    rclcpp::Publisher<movement_info_msgs::msg::MovementInfo>::SharedPtr publisher_;
    // Message to be published
    movement_info_msgs::msg::MovementInfo message_;
};

#endif // MOVEMENT_INTERFACE_HPP