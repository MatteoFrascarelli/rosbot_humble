#!/bin/bash

vcs import ros2_ws/ws/src < rosbot_origin.repos

vcs import ros2_ws/ws/src < ros2_ws/ws/src/rosbot_xl_ros/rosbot_xl/rosbot_xl_hardware.repos

vcs import ros2_ws/ws/src < ros2_ws/ws/src/rosbot_xl_ros/rosbot_xl/rosbot_xl_simulation.repos