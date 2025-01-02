# robot_movement ROS2 Humble node

This application analyzes telemetry data from a robot to determine its movement and heading direction. 

**Input topic types:**

- *nav_msgs/msg/Odometry*
- *geometry_msgs/msg/TwistStamped*

**Output message:**

Custom message defined with definition:
- *string movement* - defines a robot movement direction - FORWARD, BACKWARDS, STANDSTILL
- *string heading* -  defines a robot heading direction - RIGHT, LEFT, STRAIGHT

# Config file

To determine parameters use file src/movement_info/config/params.yaml
- direction_treshold - Defines the minimum threshold for the robot's linear speed to be considered as moving
- heading_treshold - Defines the minimum threshold for the robot's angular velocity to change its heading
- odometry_topic - The topic from which robot reads odometry data (nav_msgs/msg/Odometry)
- velocity_topic - The topic from which robot reads velocity data (geometry_msgs/msg/TwistStamped)
- movement_topic - The topic where the robot publishes movement data

# Launch

To run this node follow this steps:

1. Define input topics names, output topic name and treshold in file movement_info/config/params.yaml
2. Run node using ros2 run movement_info movement --ros-args --params-file src/movement_info/config/params.yaml

# Testing 

All of the tests are included in movement_test.cpp

To run tests use colcon test, colcon test-result --verbose

