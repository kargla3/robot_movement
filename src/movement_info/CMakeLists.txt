cmake_minimum_required(VERSION 3.8)
project(movement_info)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(movement_info_msgs REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(nav_msgs REQUIRED)
find_package(ament_cmake_gtest REQUIRED)

add_executable(movement 
  src/movement.cpp
  src/main.cpp
)

add_library(movement_info_library
  src/movement.cpp
)

target_include_directories(movement_info_library PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

target_include_directories(movement PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

install(DIRECTORY config/
  DESTINATION share/${PROJECT_NAME}/config
)

install(DIRECTORY include/
  DESTINATION include
)

ament_target_dependencies(movement 
  rclcpp 
  movement_info_msgs 
  std_msgs 
  geometry_msgs 
  nav_msgs
)

ament_target_dependencies(movement_info_library
  rclcpp
  movement_info_msgs
  std_msgs
  geometry_msgs
  nav_msgs
)

install(TARGETS
  movement
  DESTINATION lib/${PROJECT_NAME}
)

if(BUILD_TESTING)
  find_package(ament_cmake_gmock REQUIRED)

  include_directories(
    /opt/ros/humble/src/gmock_vendor/include
  )

  ament_add_gtest(${PROJECT_NAME}_movement_gtest test/movement_test.cpp)
  ament_add_gmock(${PROJECT_NAME}_movement_gmock test/movement_test.cpp)

  target_include_directories(${PROJECT_NAME}_movement_gtest PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
  )
  ament_target_dependencies(${PROJECT_NAME}_movement_gtest
    rclcpp
    movement_info_msgs
    std_msgs
    geometry_msgs
    nav_msgs
  )

  target_link_libraries(${PROJECT_NAME}_movement_gtest movement_info_library gtest gmock)
  target_link_libraries(${PROJECT_NAME}_movement_gmock movement_info_library gtest gmock)

endif()

ament_package()
