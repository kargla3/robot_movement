#include "rclcpp/rclcpp.hpp"
#include "nav_msgs/msg/odometry.hpp"
#include "geometry_msgs/msg/twist_stamped.hpp"
#include "movement_info_msgs/msg/movement_info.hpp"

class Movement : public rclcpp::Node
{
public:
    Movement() : Node("movement")
    {
        publisher_ = this->create_publisher<movement_info_msgs::msg::MovementInfo>("/movement_info", 10);
        message_.heading = "straight";
        message_.movement = "standstill";
        odom_subscriber = this->create_subscription<nav_msgs::msg::Odometry>("/ibp3/diff_drive/odom", 10, std::bind(&Movement::odometry_callback, this, std::placeholders::_1));
        vel_subscriber = this->create_subscription<geometry_msgs::msg::TwistStamped>("/ibp3/diff_drive/cmd_vel", 10, std::bind(&Movement::velocity_callback, this, std::placeholders::_1));
        timer_ = this->create_wall_timer(std::chrono::seconds(1), std::bind(&Movement::publish_movement_info, this));
    }

private:
    rclcpp::Publisher<movement_info_msgs::msg::MovementInfo>::SharedPtr publisher_;
    rclcpp::Subscription<nav_msgs::msg::Odometry>::SharedPtr odom_subscriber;
    rclcpp::Subscription<geometry_msgs::msg::TwistStamped>::SharedPtr vel_subscriber;
    rclcpp::TimerBase::SharedPtr timer_;
    movement_info_msgs::msg::MovementInfo message_;
    float treshold = 0.0001;

    void publish_movement_info()
    {
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message_.movement.c_str());
        RCLCPP_INFO(this->get_logger(), "Publishing: '%s'", message_.heading.c_str());
        publisher_->publish(message_);
    }


    // Callback function for the subscriber
    // The callback function is called each time a message is received.
    // The message is passed as a parameter to the callback function.
    // The message is of type nav_msgs::msg::Odometry::SharedPtr
    // The message contains the position and orientation of the robot.
    void odometry_callback(const nav_msgs::msg::Odometry::SharedPtr msg)
    {
        float x = msg->pose.pose.position.x;
        float y = msg->pose.pose.position.y;
        float z = msg->pose.pose.orientation.z;
        std::string x_str = std::to_string(x);
        std::string y_str = std::to_string(y);
        std::string z_str = std::to_string(z);

        //RCLCPP_INFO(this->get_logger(), "Received position x: '%s'", x_str.c_str());
        //RCLCPP_INFO(this->get_logger(), "Received position y: '%s'", y_str.c_str());
        //RCLCPP_INFO(this->get_logger(), "Received orientation z: '%s'", z_str.c_str());
    }

    // Callback function for the subscriber
    // The callback function is called each time a message is received.
    // The message is passed as a parameter to the callback function.
    // The message is of type geometry_msgs::msg::TwistStamped::SharedPtr
    // The message contains the linear and angular velocity of the robot.
    void velocity_callback(const geometry_msgs::msg::TwistStamped::SharedPtr msg)
    {
        if (msg->twist.linear.x < treshold && msg->twist.linear.x > -treshold)
        {
            message_.movement = "standstill";
        }
        else if (msg->twist.linear.x > treshold)
        {
            message_.movement = "forward";
        }
        else if(msg->twist.linear.x < treshold)
        {
            message_.movement = "backward";
        }
    }
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Movement>());
    rclcpp::shutdown();
    return 0;
}