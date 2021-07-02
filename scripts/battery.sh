#!/bin/bash

stat="$(cat /sys/class/power_supply/BAT1/status)"
batt="$(cat /sys/class/power_supply/BAT1/capacity)"
echo "${stat} ${batt}%"
