# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/foscar/ISCC_2023/src

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/foscar/ISCC_2023/build

# Utility rule file for video_stream_opencv_gencfg.

# Include the progress variables for this target.
include vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/progress.make

vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg: /home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h
vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg: /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/video_stream_opencv/cfg/VideoStreamConfig.py


/home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h: /home/foscar/ISCC_2023/src/vision_team/video_stream_opencv-master/cfg/VideoStream.cfg
/home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.py.template
/home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/foscar/ISCC_2023/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dynamic reconfigure files from cfg/VideoStream.cfg: /home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/video_stream_opencv/cfg/VideoStreamConfig.py"
	cd /home/foscar/ISCC_2023/build/vision_team/video_stream_opencv-master && ../../catkin_generated/env_cached.sh /home/foscar/ISCC_2023/build/vision_team/video_stream_opencv-master/setup_custom_pythonpath.sh /home/foscar/ISCC_2023/src/vision_team/video_stream_opencv-master/cfg/VideoStream.cfg /opt/ros/noetic/share/dynamic_reconfigure/cmake/.. /home/foscar/ISCC_2023/devel/share/video_stream_opencv /home/foscar/ISCC_2023/devel/include/video_stream_opencv /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/video_stream_opencv

/home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig.dox: /home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig.dox

/home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig-usage.dox: /home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig-usage.dox

/home/foscar/ISCC_2023/devel/lib/python3/dist-packages/video_stream_opencv/cfg/VideoStreamConfig.py: /home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/video_stream_opencv/cfg/VideoStreamConfig.py

/home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig.wikidoc: /home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig.wikidoc

video_stream_opencv_gencfg: vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg
video_stream_opencv_gencfg: /home/foscar/ISCC_2023/devel/include/video_stream_opencv/VideoStreamConfig.h
video_stream_opencv_gencfg: /home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig.dox
video_stream_opencv_gencfg: /home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig-usage.dox
video_stream_opencv_gencfg: /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/video_stream_opencv/cfg/VideoStreamConfig.py
video_stream_opencv_gencfg: /home/foscar/ISCC_2023/devel/share/video_stream_opencv/docs/VideoStreamConfig.wikidoc
video_stream_opencv_gencfg: vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/build.make

.PHONY : video_stream_opencv_gencfg

# Rule to build all files generated by this target.
vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/build: video_stream_opencv_gencfg

.PHONY : vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/build

vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/clean:
	cd /home/foscar/ISCC_2023/build/vision_team/video_stream_opencv-master && $(CMAKE_COMMAND) -P CMakeFiles/video_stream_opencv_gencfg.dir/cmake_clean.cmake
.PHONY : vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/clean

vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/depend:
	cd /home/foscar/ISCC_2023/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/foscar/ISCC_2023/src /home/foscar/ISCC_2023/src/vision_team/video_stream_opencv-master /home/foscar/ISCC_2023/build /home/foscar/ISCC_2023/build/vision_team/video_stream_opencv-master /home/foscar/ISCC_2023/build/vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : vision_team/video_stream_opencv-master/CMakeFiles/video_stream_opencv_gencfg.dir/depend

