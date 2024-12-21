#include "rclcpp/rclcpp.hpp"
#include "movement_info_msgs/msg/movement_info.hpp"

class Movement : public rclcpp::Node
{
public:
    Movement() : Node("movement")
    {
        publisher_ = this->create_publisher<movement_info_msgs::msg::MovementInfo>("/movement_info", 10);
        message_.movement = "standstill";
        message_.heading = "straight";
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Movement::publish_movement_info, this));
    }

private:
    void publish_movement_info()
    {
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message_.movement.c_str());
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message_.heading.c_str());
        publisher_->publish(message_);
    }

    rclcpp::Publisher<movement_info_msgs::msg::MovementInfo>::SharedPtr publisher_;
    rclcpp::TimerBase::SharedPtr timer_;
    movement_info_msgs::msg::MovementInfo message_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Movement>());
    rclcpp::shutdown();
    return 0;
}