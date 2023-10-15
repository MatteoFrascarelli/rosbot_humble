FROM arm64v8/ros:humble-ros-base

ARG USERNAME_FROM_DOCKER
ARG USER_ID
ARG GROUP_ID

ENV USERNAME=${USERNAME_FROM_DOCKER}

ARG HOME /home/${USERNAME}

ARG ROS_DISTRO=humble
ARG ROS2_WS=ros2_ws/ws
ARG ROS2_DEPS=ros2_ws/deps
ARG MY_ROS2_WS=my_ros2_ws

ENV PATH "$PATH:/usr/local/bin"

USER root

# Set the environment to noninteractive (no user input)
ENV DEBIAN_FRONTEND noninteractive

RUN apt-get update && apt-get upgrade -y

# Setup timezone
RUN apt-get install -y locales locales-all

# setup environment
ENV LANG C.UTF-8
ENV LC_ALL C.UTF-8

# Upgrade all existing packages
RUN set -x \
        && apt-get update \
        && apt-get upgrade -y

# install packages
RUN apt-get update && apt-get install -q -y --fix-missing \
    dirmngr \
    gnupg2 \
    build-essential \
    git \
    apt-transport-https \
    ca-certificates \
    git \
    vim \
    htop \
    curl \
    wget \
    mesa-utils \
    software-properties-common \
    libnss3 \
    lsb-release \
    tmux \
    tmuxinator \
    apt-utils \
    sudo \
    dialog \
    less \
    x-window-system \
    && rm -rf /var/lib/apt/lists/*

# RUN apt-get update && apt-get upgrade -y
# RUN apt install --fix-broken

RUN apt-get update \
    && DEBIAN_FRONTEND=noninteractive apt-get install -y software-properties-common \
    && add-apt-repository universe

# RUN apt-get update \
#     && curl -sSL https://raw.githubusercontent.com/ros/rosdistro/master/ros.key -o /usr/share/keyrings/ros-archive-keyring.gpg \
#     && echo "deb [arch=$(dpkg --print-architecture) signed-by=/usr/share/keyrings/ros-archive-keyring.gpg] http://packages.ros.org/ros2/ubuntu $(. /etc/os-release && echo $UBUNTU_CODENAME) main" | sudo tee /etc/apt/sources.list.d/ros2.list > /dev/null

# RUN apt-get update && apt-get upgrade -y \
#     && DEBIAN_FRONTEND=noninteractive apt-get install -y ros-humble-desktop-full

# RUN sudo apt-get update && sudo apt-get upgrade -y 

# Install ROS dependencies
# Upgrade all existing packages
RUN sudo apt-get update && \
	sudo apt-get upgrade -y && \
    DEBIAN_FRONTEND=noninteractive sudo apt-get install -y \
	python3-colcon-common-extensions \
	ros-humble-eigen3-cmake-module \
	python3-pip \
    ros-dev-tools

#################
## Create user ##
#################

# Add user
# Create new user `${USERNAME}` and disable password and gecos for later --gecos explained well here: https://askubuntu.com/a/1195288/635348
RUN addgroup --gid $GROUP_ID ${USERNAME}
RUN adduser --disabled-password --gecos '' --uid $USER_ID --gid $GROUP_ID ${USERNAME}
# RUN usermod -a -G sudo ${USERNAME}
#  Add new user docker to sudo group
RUN adduser ${USERNAME} sudo
# Ensure sudo group users are not asked for a password when using sudo command by ammending sudoers file
RUN echo '%sudo ALL=(ALL) NOPASSWD:ALL' >> /etc/sudoers

USER ${USERNAME}

############################
## Create ROS2 workspaces ##
############################

# Create workspaces and init rosdep
RUN mkdir -p /home/${USERNAME}/${ROS2_WS}/src && \
    cd /home/${USERNAME}/${ROS2_WS}/src && \
    DEBIAN_FRONTEND=noninteractive sudo apt-get update && \
    sudo rm /etc/ros/rosdep/sources.list.d/20-default.list && \
    sudo rosdep init && \
    rosdep update --rosdistro=$ROS_DISTRO

# Create other workspaces
RUN mkdir -p /home/${USERNAME}/${ROS2_DEPS}/src && \
    cd /home/${USERNAME}/${ROS2_DEPS} && \
    colcon build --symlink-install && \
    mkdir -p /home/${USERNAME}/${MY_ROS2_WS}/src && \
    cd /home/${USERNAME}/${MY_ROS2_WS} && \
    colcon build --symlink-install

RUN echo "source /opt/ros/${ROS_DISTRO}/setup.bash" >> ~/.bashrc && \
    echo "source /home/${USERNAME}/${ROS2_DEPS}/install/setup.bash" >> ~/.bashrc && \
    echo "source /home/${USERNAME}/${ROS2_WS}/install/setup.bash" >> ~/.bashrc && \
    echo "source /home/${USERNAME}/${MY_ROS2_WS}/install/setup.bash" >> ~/.bashrc

RUN echo "source /usr/share/colcon_cd/function/colcon_cd.sh" >> ~/.bashrc && \
    echo "export _colcon_cd_root=~/${MY_ROS2_WS}" >> ~/.bashrc

# Set aliases
RUN echo "alias colbu='. /opt/ros/${ROS_DISTRO}/setup.sh && colcon build --symlink-install --event-handler console_direct+'" >> ~/.bashrc && \
    echo "alias colcl='rm -rf build/ install/ log/'" >> ~/.bashrc

RUN sudo apt-get update && sudo apt-get upgrade -y

RUN sudo apt-get update && sudo apt-get upgrade -y && \
	pip3 install -U empy pyros-genmsg setuptools

# Install husernet (https://husarnet.com/blog/ros2-docker) (inspecting docker image husarnet/ros:humble-ros-core)
RUN sudo apt-get install -y curl gnupg2 systemd && \
	curl https://install.husarnet.com/install.sh | sudo bash 

# Install fastrtps and cyclonedds
RUN sudo apt-get update && sudo apt-get upgrade -y && \
	sudo apt-get install -y ros-$ROS_DISTRO-rmw-fastrtps-cpp && \
	sudo apt-get upgrade -y

# From git, install all workspace of the 
# https://github.com/husarion/rosbot-xl-docker/blob/main/Dockerfile.simulation


WORKDIR /home/${USERNAME}

# install everything needed
RUN sudo apt-get update --fix-missing && sudo apt-get install -y \
        python3-pip \
        python3-colcon-common-extensions \
        python3-rosdep \
        python3-vcstool \
        git && \
    sudo apt-get upgrade -y

# # build & install ROSbot XL packages
# RUN . /opt/ros/$ROS_DISTRO/setup.sh && \
# 	cd sim/src && \
#     git clone https://github.com/husarion/rosbot_xl_ros.git && \
# 	cd rosbot_xl_ros && git checkout 954ff5a && \
#     vcs import ${HOME}/${ROS2_WS_SIM}/src < ./rosbot_xl/rosbot_xl_hardware.repos && \
#     vcs import ${HOME}/${ROS2_WS_SIM}/src < ./rosbot_xl/rosbot_xl_simulation.repos && \
# 	cd ${HOME}/${ROS2_WS_SIM} && \
#     # without this line (using vulcanexus base image) rosdep init throws error: "ERROR: default sources list file already exists:"
#     sudo rm -rf /etc/ros/rosdep/sources.list.d/20-default.list && \
#     sudo rosdep init && \
#     rosdep update --rosdistro $ROS_DISTRO && \
#     rosdep install -i --from-path src --rosdistro $ROS_DISTRO -y && \
#     colcon build --symlink-install --event-handler console_direct+

# build & install slam-toolbox package
# RUN . /opt/ros/$ROS_DISTRO/setup.sh && \
# 	cd ${ROS2_DEPS}/src && \
#     git clone https://github.com/SteveMacenski/slam_toolbox.git && \
# 	cd slam_toolbox && git checkout $ROS_DISTRO && \
#     cd ${HOME}/${ROS2_DEPS} && \
#     sudo apt-get update && \
#     rosdep update --rosdistro $ROS_DISTRO && \
#     rosdep install -i --from-path src --rosdistro $ROS_DISTRO -y && \
#     colcon build --symlink-install --event-handler console_direct+ --parallel-workers $(nproc)
RUN sudo apt-get update && sudo apt-get install -y ros-humble-slam-toolbox

RUN sudo apt-get update && sudo apt-get install -y \
    ros-humble-nav2-rviz-plugins \
    ros-humble-rmw-fastrtps-cpp

# Install microros
RUN . /opt/ros/$ROS_DISTRO/setup.sh && \
	cd ${ROS2_DEPS}/src && \
	git clone -b $ROS_DISTRO https://github.com/micro-ROS/micro_ros_setup.git && \
	cd .. && \
	colcon build --event-handler console_direct+ --parallel-workers $(nproc) && \
	. ./install/local_setup.sh && \
	ros2 run micro_ros_setup create_agent_ws.sh && \
	ros2 run micro_ros_setup build_agent.sh && \
	rm src/ros2.repos

# Install SLAMTEC LIDAR ROS2 Package
RUN . /opt/ros/$ROS_DISTRO/setup.sh && \
	cd ${ROS2_DEPS}/src && \
    git clone https://github.com/Slamtec/sllidar_ros2.git && \
    cd .. && sudo apt-get update && rosdep update && \
    rosdep install --from-paths src --ignore-src -y && \
    colcon build --symlink-install --event-handler console_direct+ --parallel-workers $(nproc) --packages-skip-build-finished

# Install dependencies
RUN sudo apt-get update && \
    sudo -H apt-get install -y \
        ros-$ROS_DISTRO-xacro \
        ros-$ROS_DISTRO-controller-manager \
        ros-$ROS_DISTRO-joint-state-broadcaster \
        ros-$ROS_DISTRO-imu-sensor-broadcaster \
        ros-$ROS_DISTRO-diff-drive-controller \
        ros-$ROS_DISTRO-laser-filters \
        ros-$ROS_DISTRO-robot-localization \
        libignition-gazebo6-dev \
        libignition-plugin-dev \
        ros-$ROS_DISTRO-hardware-interface \
        ros-$ROS_DISTRO-controller-interface \
        ros-$ROS_DISTRO-realtime-tools \
        ros-$ROS_DISTRO-control-msgs \
        ros-$ROS_DISTRO-effort-controllers \
        ros-$ROS_DISTRO-joint-trajectory-controller \
        ros-$ROS_DISTRO-ros-ign-gazebo \
        ros-$ROS_DISTRO-ros2controlcli \
        ros-$ROS_DISTRO-velocity-controllers \
        ros-$ROS_DISTRO-tricycle-controller \
        ros-$ROS_DISTRO-ros-gz-sim \
        ros-$ROS_DISTRO-ros-gz-bridge

# Install extra packages
RUN sudo apt-get update && sudo apt-get install -y \
    terminator \
    ranger 
    
WORKDIR /home/${USERNAME}/${ROS2_WS}
# edit your bashrc
# COPY ./dot_files/bashrc /home/${USERNAME}/.bashrc


COPY ./dot_files/entrypoint_nuctella.sh /entrypoint.sh
RUN sudo chmod +x /entrypoint.sh

COPY ./dot_files/tmux.conf /home/${USERNAME}/.tmux.conf
COPY ./dot_files/fun_bash.sh /home/${USERNAME}/.fun_bash.sh
ENTRYPOINT [ "/entrypoint.sh" ]
CMD ["bash"]