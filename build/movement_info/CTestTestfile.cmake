# CMake generated Testfile for 
# Source directory: /home/kargla/robot_movement/src/movement_info
# Build directory: /home/kargla/robot_movement/build/movement_info
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(movement_info_movement_test "/usr/bin/python3" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/kargla/robot_movement/build/movement_info/test_results/movement_info/movement_info_movement_test.gtest.xml" "--package-name" "movement_info" "--output-file" "/home/kargla/robot_movement/build/movement_info/ament_cmake_gtest/movement_info_movement_test.txt" "--command" "/home/kargla/robot_movement/build/movement_info/movement_info_movement_test" "--gtest_output=xml:/home/kargla/robot_movement/build/movement_info/test_results/movement_info/movement_info_movement_test.gtest.xml")
set_tests_properties(movement_info_movement_test PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/kargla/robot_movement/build/movement_info/movement_info_movement_test" TIMEOUT "60" WORKING_DIRECTORY "/home/kargla/robot_movement/build/movement_info" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/kargla/robot_movement/src/movement_info/CMakeLists.txt;71;ament_add_gtest;/home/kargla/robot_movement/src/movement_info/CMakeLists.txt;0;")
subdirs("gtest")
