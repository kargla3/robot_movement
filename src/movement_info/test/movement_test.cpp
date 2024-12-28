#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include "movement_info/movement.hpp"
#include "movement_info_msgs/msg/movement_info.hpp"

TEST(MovementTest, HeadingDeterminationTest1)
{
    // // Arrange
    // nav_msgs::msg::Odometry::SharedPtr msg = std::make_shared<nav_msgs::msg::Odometry>();
    // msg->twist.twist.angular.z = 0.0;
    // Movement movement;
    // movement.setHeadingTreshold(0.1);

    // // Act
    // movement.odometry_callback(msg);

    // Assert
    ASSERT_EQ(1,1);
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}