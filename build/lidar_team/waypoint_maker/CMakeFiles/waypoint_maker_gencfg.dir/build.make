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

# Utility rule file for waypoint_maker_gencfg.

# Include the progress variables for this target.
include lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/progress.make

lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg: /home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h
lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg: /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/waypoint_maker/cfg/configConfig.py


/home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h: /home/foscar/ISCC_2023/src/lidar_team/waypoint_maker/cfg/config.cfg
/home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.py.template
/home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h: /opt/ros/noetic/share/dynamic_reconfigure/templates/ConfigType.h.template
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/foscar/ISCC_2023/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dynamic reconfigure files from cfg/config.cfg: /home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/waypoint_maker/cfg/configConfig.py"
	cd /home/foscar/ISCC_2023/build/lidar_team/waypoint_maker && ../../catkin_generated/env_cached.sh /home/foscar/ISCC_2023/build/lidar_team/waypoint_maker/setup_custom_pythonpath.sh /home/foscar/ISCC_2023/src/lidar_team/waypoint_maker/cfg/config.cfg /opt/ros/noetic/share/dynamic_reconfigure/cmake/.. /home/foscar/ISCC_2023/devel/share/waypoint_maker /home/foscar/ISCC_2023/devel/include/waypoint_maker /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/waypoint_maker

/home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig.dox: /home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig.dox

/home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig-usage.dox: /home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig-usage.dox

/home/foscar/ISCC_2023/devel/lib/python3/dist-packages/waypoint_maker/cfg/configConfig.py: /home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/waypoint_maker/cfg/configConfig.py

/home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig.wikidoc: /home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h
	@$(CMAKE_COMMAND) -E touch_nocreate /home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig.wikidoc

waypoint_maker_gencfg: lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg
waypoint_maker_gencfg: /home/foscar/ISCC_2023/devel/include/waypoint_maker/configConfig.h
waypoint_maker_gencfg: /home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig.dox
waypoint_maker_gencfg: /home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig-usage.dox
waypoint_maker_gencfg: /home/foscar/ISCC_2023/devel/lib/python3/dist-packages/waypoint_maker/cfg/configConfig.py
waypoint_maker_gencfg: /home/foscar/ISCC_2023/devel/share/waypoint_maker/docs/configConfig.wikidoc
waypoint_maker_gencfg: lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/build.make

.PHONY : waypoint_maker_gencfg

# Rule to build all files generated by this target.
lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/build: waypoint_maker_gencfg

.PHONY : lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/build

lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/clean:
	cd /home/foscar/ISCC_2023/build/lidar_team/waypoint_maker && $(CMAKE_COMMAND) -P CMakeFiles/waypoint_maker_gencfg.dir/cmake_clean.cmake
.PHONY : lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/clean

lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/depend:
	cd /home/foscar/ISCC_2023/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/foscar/ISCC_2023/src /home/foscar/ISCC_2023/src/lidar_team/waypoint_maker /home/foscar/ISCC_2023/build /home/foscar/ISCC_2023/build/lidar_team/waypoint_maker /home/foscar/ISCC_2023/build/lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lidar_team/waypoint_maker/CMakeFiles/waypoint_maker_gencfg.dir/depend

