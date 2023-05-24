# rosbot_humble

## Build the Docker

Tested on: \
`Docker version: 23.0.1`\
`Docker Compose version 2.16.0`

Clone this repository and go inside the repository. Choose the desidered level of the container. To do this you can prompt the helper:

```bash
./build_layers-humble.sh -h
```

You can just build all the docker with the command:
```bash
./build_layers-humble.sh -u nuctella -l all
```

You will see something like this at the end:
![docker build finished](doc/build_finish.png "docker build finished")


**Alternatively** you can prompt these commands in sequence, or you can choose your desired layer (always in sequence):
- ```./build_layers-humble.sh -u nuctella -l nvidia```\
  Install Ubuntu 22.04 with CUDA enabled
- ```./build_layers-humble.sh -u nuctella -l nvidia-ros```\
  Install ROS2 Humble from the previous image with Ubuntu 22.04 and CUDA 
- ```./build_layers-humble.sh -u nuctella -l nvidia-ros-px4gc```\
  Install rosbot_xl repositories (Gazebo) with username "nuctella" from the previous image Ubuntu 22.04 with CUDA and ROS2 Humble

In this way developers can edit separated dockerfiles in `dockerfiles/` in a more clean way.

---

### Sanity check 
To test if everithing is ok with rosbot XL and ROS2 you can use `terminator`. First, start docker container 

```bash
./go_rosbotXL.sh
```
This is the first thing that you should see:

![docker build finished](doc/welcome.png "docker build finished")

Then inside the container you can open terminator and run this 4 commands in four different terminals:

- `ros2 launch rosbot_xl_gazebo simulation.launch.py mecanum:=${MECANUM:-True}`
- `ros2 run rviz2 rviz2 -d /config/rosbot.rviz`
- `ros2 launch slam_toolbox online_sync_launch.py slam_params_file:=/config/slam_toolbox_params_original.yaml use_sim_time:=True `
- `bash -c "while true; do ros2 run nav2_map_server map_saver_cli --free 0.15 --fmt png -f /maps/map; sleep 5; done"`

**Alternatively** you can simply run this command:

```bash
cd /home/nuctella/my_ros2_ws/src/startup_sim/shell && ./tmuxinator.sh
```
This is the expected result:

![startup image](doc/startup.png "startup image")

 If you have used this command you can exit from simulation you can tap <kbd>Ctrl</kbd> + <kbd>A</kbd> + <kbd>K</kbd>.\
 To copy text you can highlight with the mouse, keep press and tap <kbd>Ctrl</kbd>+<kbd>Shift</kbd>+<kbd>C</kbd>\
 To paste inside the terminal click the <kbd>Middle Mouse Button</kbd>.\
 Swap from windows with <kbd>Alt</kbd>+<kbd>Key Arrows</kbd>


## Workspace structure

Inside ros2_ws you will see these 4 ros2 workspaces

- `sim_deps` dependency of simulations
- `sim` simulation packages
- `deps` dependency for real hardware of the drone
- `nuctella` packages for real hardware

You have another ROS2 workspace that you can use for personal development (when things are not too much stable or tested), it is in the directory `/home/nuctella/my_ros2_ws` and it is a shared directory between your local PC and the container

## How to develop
If you want to develop for some projects you must do this thing:

- If you want to edit some original packages or nodes (for example in `ros2_ws/sim/src`) you can move that package in `my_ros2_ws/src`. In this way every modification that you made can be tracked by git! After that commit the changes in docker image:

```bash
docker commit rosbot-ros2-container nvidia/ros2/husarxl:nuctella-humble
```
In the previous folder remember to delete install/ log/ build/ (NOT src!) and in the new one and in the previous remember to rebuild with colcon build --symlink-install

- If you want to create new packages just create in `my_ros2_ws/src`. In this way every modification that you made can be tracked by git!

If you don't know how to develop with git you can follow [this guide](https://learngitbranching.js.org/) and the [official guide](https://git-scm.com/docs/git-commit) or also [this](https://www.atlassian.com/git/tutorials/saving-changes/git-commit). Or you can use [gitkraken](https://www.gitkraken.com/).

---

# Issues to solve (soft)
- Se si modificano le cartelle non montate e si esce dalla docker si perdono i progressi, attenzione.

- Ho provato ad imitare in tutti i modi il docker compose originale, l'unica differenza sostanziale che ho trovato riguarda le performance della slam all'avvio, come se l'algoritmo non si fidasse all'inizio di punti troppo lontani.

![rviz_bgoodimage](doc/rviz_bad.png "rviz_bad image")

![rviz_good image](doc/rviz_good.png "rviz_good")



### TODO

- This is interesting [new repo about nav2](https://github.com/husarion/navigation2-docker)

---

## Credits
- https://github.com/husarion/rosbot-xl-docker
- https://github.com/husarion/rosbot-xl-mapping

## Extra
### Let's try to recover the dockerfile from the image

[Reference Link](https://github.com/husarion/rosbot-xl-docker/blob/main/Dockerfile.simulation)

To inspect the image:

```bash
docker run --rm \
    -v /var/run/docker.sock:/var/run/docker.sock \
    alpine/dfimage husarion/rosbot-xl-gazebo:humble-0.3.0-20230204
```
