#!/bin/bash
# Useful functions for developing

# function to easy delete a tmux session (it is classed by a shortkey from tmux.conf)
killp () 
{ 
    if [ $# -eq 0 ]; then
        echo "The command killp() needs an argument, but none was provided!";
        return;
    else
        pes=$1;
    fi;
    for child in $(ps -o pid,ppid -ax |     awk "{ if ( \$2 == $pes ) { print \$1 }}");
    do
        killp $child;
    done;
    kill -9 "$1" > /dev/null 2> /dev/null
}

waitForRos2 () 
{ 
    until ros2 topic list > /dev/null 2>&1; do
        echo "waiting for ros2 ...";
        sleep 1;
    done
    echo "ROS2 topic are visible!"
}