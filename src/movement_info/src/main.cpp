#include "movement_info/movement.hpp"

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Movement>());
    rclcpp::shutdown();
    return 0;
}