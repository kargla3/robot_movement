#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "movement_info/movement.hpp"
#include "movement_info_msgs/msg/movement_info.hpp"
#include "movement_info/MockPublisher.hpp"

TEST(MovementTest, HeadingDeterminationTest)
{
    nav_msgs::msg::Odometry::SharedPtr msg = std::make_shared<nav_msgs::msg::Odometry>();
    Movement movement;

    movement.setHeadingTreshold(0.1);

    msg->twist.twist.angular.z = 0.0;
    movement.odometry_callback(msg);
    ASSERT_EQ(movement.getMessage().heading, movement_info_msgs::msg::MovementInfo::STRAIGHT);

    msg->twist.twist.angular.z = 0.1;
    movement.odometry_callback(msg);
    ASSERT_EQ(movement.getMessage().heading, movement_info_msgs::msg::MovementInfo::STRAIGHT);

    msg->twist.twist.angular.z = 0.11;
    movement.odometry_callback(msg);
    ASSERT_EQ(movement.getMessage().heading, movement_info_msgs::msg::MovementInfo::LEFT);

    msg->twist.twist.angular.z = -0.11;
    movement.odometry_callback(msg);
    ASSERT_EQ(movement.getMessage().heading, movement_info_msgs::msg::MovementInfo::RIGHT);
}

TEST(MovementTEST, DirectionDeterminationTest) 
{
    geometry_msgs::msg::TwistStamped::SharedPtr msg = std::make_shared<geometry_msgs::msg::TwistStamped>();
    Movement movement;

    movement.setDirectionTreshold(0.1);

    msg->twist.linear.x = 0.0;
    movement.velocity_callback(msg);
    ASSERT_EQ(movement.getMessage().movement, movement_info_msgs::msg::MovementInfo::STANDSTILL);

    msg->twist.linear.x = 0.1;
    movement.velocity_callback(msg);
    ASSERT_EQ(movement.getMessage().movement, movement_info_msgs::msg::MovementInfo::STANDSTILL);

    msg->twist.linear.x = 0.11;
    movement.velocity_callback(msg);
    ASSERT_EQ(movement.getMessage().movement, movement_info_msgs::msg::MovementInfo::FORWARD);

    msg->twist.linear.x = -0.11;
    movement.velocity_callback(msg);
    ASSERT_EQ(movement.getMessage().movement, movement_info_msgs::msg::MovementInfo::BACKWARD);
}

TEST(MovementTest, MovementInfoPublishingTest)
{
    MockPublisher mockPublisher;

    movement_info_msgs::msg::MovementInfo message;
    message.heading = movement_info_msgs::msg::MovementInfo::STRAIGHT;
    message.movement = movement_info_msgs::msg::MovementInfo::FORWARD;

    mockPublisher.setMessage(message);

    EXPECT_CALL(mockPublisher, publish_movement_info())
    .WillOnce([&mockPublisher]() {
            const auto& msg = mockPublisher.getMessage();
            EXPECT_EQ(msg.heading, movement_info_msgs::msg::MovementInfo::STRAIGHT);
            EXPECT_EQ(msg.movement, movement_info_msgs::msg::MovementInfo::FORWARD);
        });

    mockPublisher.publish_movement_info();
}

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    rclcpp::shutdown();
}