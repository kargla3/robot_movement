#include "movement_info/movement_interface.hpp"

MovementInterface::MovementInterface(const std::string &node) : rclcpp::Node(node)
{
    publisher_ = this->create_publisher<movement_info_msgs::msg::MovementInfo>("/movement_info", 10);
}

void MovementInterface::publish_movement_info()
{
    publisher_->publish(message_);
}

void MovementInterface::setMessage(movement_info_msgs::msg::MovementInfo message)
{
    message_ = message;
}

movement_info_msgs::msg::MovementInfo MovementInterface::getMessage()
{
    return message_;
}


