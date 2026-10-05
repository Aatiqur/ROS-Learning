#!/bin/bash
# -------------------------------------------------------
#  launch_turtlebot.sh
#  One-click launcher for TurtleBot 4 Ignition Simulator
#  Performance-tuned for VirtualBox (no dedicated GPU)
# -------------------------------------------------------

# ---- Performance environment variables ----
# Force Mesa software rendering (VMware SVGA has no OpenGL HW accel)
export LIBGL_ALWAYS_SOFTWARE=1
# Avoid render-to-texture issues with virtual GPU
export OGRE_RTT_MODE=Copy
# Disable GPU-heavy features in Mesa
export MESA_GL_VERSION_OVERRIDE=3.3
# Point Ignition to our custom server config (lower update rate)
export IGN_HOME=$HOME/.ignition

# ---- Source ROS 2 and workspace ----
source /opt/ros/humble/setup.bash
source /home/vboxuser/ROS-Learning/install/setup.bash

# ---- Pick world (default: maze — lightest world for slow VMs) ----
WORLD=${1:-maze}     # pass "warehouse" or "depot" as argument to override
MODEL=${2:-standard} # pass "lite" as 2nd arg for the lite model

echo "----------------------------------------------------"
echo "  Launching TurtleBot 4 Simulator"
echo "  World : $WORLD"
echo "  Model : $MODEL"
echo "  Mode  : Software rendering (VirtualBox optimized)"
echo "----------------------------------------------------"

ros2 launch turtlebot4_ignition_bringup turtlebot4_ignition.launch.py \
    world:=$WORLD \
    model:=$MODEL
