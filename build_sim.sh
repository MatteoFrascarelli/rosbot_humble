#!/bin/bash

u=nuctella

docker build -f ./dockerfiles/amd64/Dockerfile \
  -t husarion/amd64:humble \
  --build-arg USER_ID=$(id -u) \
  --build-arg GROUP_ID=$(id -g) \
  --build-arg USERNAME_FROM_DOCKER=$u \
  ./dockerfiles/amd64

docker run \
    --rm \
    --env TERM=xterm-256color \
    --env HUSARION_ROS_BUILD=simulation \
    --volume ./ros2_ws/ws:/home/$u/ros2_ws/ws \
    --volume ./my_ros2_ws:/home/$u/my_ros2_ws \
    --name rosbot-ros2-container \
    husarion/amd64:humble \
    /bin/bash -c "cd ~/ros2_ws/ws && \
    . /opt/ros/humble/setup.sh && \
    colcon build --symlink-install --event-handler console_direct+ && \
    cd ~/my_ros2_ws && \
    colcon build --symlink-install --event-handler console_direct+"