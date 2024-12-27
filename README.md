# robot_movement ROS2 Humble node

This application analyzes telemetry data from a robot to determine its movement and heading direction. 

**Input topic types:**
- *nav_msgs/msg/Odometry*
- *geometry_msgs/msg/TwistStamped*

**Output message:**
Custom message defined with definition:
- *string movement* - defines a robot movement direction - FORWARD, BACKWARDS, STANDSTILL
- *string heading* -  defines a robot heading direction - RIGHT, LEFT, STRAIGHT

# Launch

To run this node follow this steps:

1. Define input topics names, output topic name and treshold in file movement_info/config/params.yaml
2. Run node using ros2 run movement_info movement --ros-args --params-file src/movement_info/config/params.yaml
