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

# Utility rule file for clean_test_results_velodyne_pcl.

# Include the progress variables for this target.
include velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/progress.make

velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl:
	cd /home/foscar/ISCC_2023/build/velodyne/velodyne_pcl && /usr/bin/python3 /opt/ros/noetic/share/catkin/cmake/test/remove_test_results.py /home/foscar/ISCC_2023/build/test_results/velodyne_pcl

clean_test_results_velodyne_pcl: velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl
clean_test_results_velodyne_pcl: velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/build.make

.PHONY : clean_test_results_velodyne_pcl

# Rule to build all files generated by this target.
velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/build: clean_test_results_velodyne_pcl

.PHONY : velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/build

velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/clean:
	cd /home/foscar/ISCC_2023/build/velodyne/velodyne_pcl && $(CMAKE_COMMAND) -P CMakeFiles/clean_test_results_velodyne_pcl.dir/cmake_clean.cmake
.PHONY : velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/clean

velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/depend:
	cd /home/foscar/ISCC_2023/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/foscar/ISCC_2023/src /home/foscar/ISCC_2023/src/velodyne/velodyne_pcl /home/foscar/ISCC_2023/build /home/foscar/ISCC_2023/build/velodyne/velodyne_pcl /home/foscar/ISCC_2023/build/velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : velodyne/velodyne_pcl/CMakeFiles/clean_test_results_velodyne_pcl.dir/depend

