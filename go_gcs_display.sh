#!/bin/bash

xhost +local:docker > /dev/null

XSOCK=/tmp/.X11-unix
XAUTH=/tmp/.docker.xauth-n
touch $XAUTH
xauth nlist "$DISPLAY" | sed -e 's/^..../ffff/' | xauth -f $XAUTH nmerge -

current_dir=`pwd -P`
script_dir="$( cd "$(dirname "$0")" ; pwd -P )"
# container_id=`cat "${script_dir}/docker_id"`

# last lines https://github.com/jacknlliu/ros-docker-images/issues/7

docker run -it --rm \
  --ipc="host" \
  --network host \
  --gpus all \
  --privileged \
  --volume=$XSOCK:$XSOCK:rw \
  --volume=$XAUTH:$XAUTH:rw \
  --env="XAUTHORITY=${XAUTH}" \
  --env DISPLAY=$DISPLAY \
  --env TERM=xterm-256color \
  --env NVIDIA_VISIBLE_DEVICES=all \
  --env NVIDIA_DRIVER_CAPABILITIES=all \
  --volume ./config:/config \
  --volume ./maps:/maps \
  --volume ./my_ros2_ws:/home/nuctella/my_ros2_ws \
  --volume /dev:/dev \
  --name rosbot-ros2-container \
  nvidia/ros2/husarxl:nuctella-humble
  # husarion/rosbot-xl-gazebo:humble-0.3.0-20230204
