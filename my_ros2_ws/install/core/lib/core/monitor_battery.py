#!/usr/bin/python3

# remember to run in docker apt-get install alsa-base alsa-utilsù

import sys
import subprocess
import time
import re
from pygame import mixer

class bcolors:
    HEADER = '\033[95m'
    OKBLUE = '\033[94m'
    OKCYAN = '\033[96m'
    OKGREEN = '\033[92m'
    WARNING = '\033[93m'
    FAIL = '\033[91m'
    ENDC = '\033[0m'
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'

audio_file = "sadtrombone.swf.mp3"
mixer.init(44100,-16,2,2048) 
sound=mixer.Sound("/home/nuctella/my_ros2_ws/src/core/media/" + audio_file)
thresh = 3.5 # [Volt]

while True:
    output = []

    command = "ros2 topic echo --no-arr --once --field voltage /battery_state; \
               ros2 topic echo --no-arr --once --field charge /battery_state"
    try:
        output = subprocess.check_output(command, shell=True, universal_newlines=True)
    except:
        print(f"{bcolors.WARNING}Warning:{bcolors.ENDC} /battery_state not active/visible") # you can print sys.exc_info()
    if not output:
        pass
    else:
        data_from_topic = re.findall(r"[-+]?\d*\.\d+|\d+", output)
        voltage_mV = float(data_from_topic[0])    #  Current voltage in mA
        charge = float(data_from_topic[1])       # Current charge in Ah  (If unmeasured NaN)

        voltage_V_cell_str = format( ((voltage_mV / 1000) / 3) , '.2f') # the string hold also numbers like 4.20 instead of 4.2       
        voltage_V_cell_num = float(voltage_V_cell_str)

        if voltage_V_cell_num < 3.00: # value not feasable
            pass

        elif charge != 0.0: # battery level ok
            print(f"Charging...")
            print(f"Current voltage per cell: {voltage_V_cell_str}")

        elif voltage_V_cell_num > thresh and charge == 0.0: # battery level ok
            print(f"Current voltage per cell: {voltage_V_cell_str}")


        elif voltage_V_cell_num <= thresh and charge == 0.0: # battery level LOW
            print(f"{bcolors.FAIL}WARNING:{bcolors.ENDC} Battery Low Please Charge!")
            print(f"Current voltage per cell: {voltage_V_cell_str}")
            sound.play()
        


    time.sleep(10)