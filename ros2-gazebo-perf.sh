# -------------------------------------------------------
#  /etc/profile.d/ros2-gazebo-perf.sh
#  Performance tuning for ROS 2 + Ignition Gazebo
#  on VirtualBox (VMware SVGA II / no dedicated GPU)
# -------------------------------------------------------

# Force software rendering to avoid crashes with virtual GPU
export LIBGL_ALWAYS_SOFTWARE=1

# Use Copy mode for render-to-texture (avoids GPU FBO issues)
export OGRE_RTT_MODE=Copy

# Disable GPU-heavy shadows in Ogre/Ignition
export IGN_RENDERING_ENGINE=ogre2

# Disable Mesa hardware acceleration warnings
export MESA_GL_VERSION_OVERRIDE=3.3

# Tell Ignition to use its config directory
export IGN_HOME=/home/vboxuser/.ignition
