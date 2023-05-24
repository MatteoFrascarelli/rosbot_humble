#!/bin/bash                                                                 

# Source ROS and workspaces
if [ -f /opt/ros/humble/setup.bash ]
then
    source /opt/ros/humble/setup.bash
    source /usr/share/colcon_argcomplete/hook/colcon-argcomplete.bash
    . /usr/share/colcon_cd/function/colcon_cd.sh
    
    source ~/ros2_ws/deps/install/local_setup.bash
    source ~/ros2_ws/ws/install/local_setup.bash
    source ~/my_ros2_ws/install/local_setup.bash
    # cd ~/ros2_ws/ws && colcon build --symlink-install --event-handler console_direct+
    echo "Welcome to ROS2-RosbotXL Docker Container!"
fi

# bash

# Execute the command passed into this entrypoint
exec "$@"