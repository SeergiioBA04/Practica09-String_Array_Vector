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
CMAKE_SOURCE_DIR = /home/usuario/Practica09-String_Array_Vector/Upper_Lower

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/usuario/Practica09-String_Array_Vector/Upper_Lower/build

# Include any dependencies generated for this target.
include CMakeFiles/Upper.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Upper.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Upper.dir/flags.make

CMakeFiles/Upper.dir/tools.cc.o: CMakeFiles/Upper.dir/flags.make
CMakeFiles/Upper.dir/tools.cc.o: ../tools.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/Practica09-String_Array_Vector/Upper_Lower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Upper.dir/tools.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Upper.dir/tools.cc.o -c /home/usuario/Practica09-String_Array_Vector/Upper_Lower/tools.cc

CMakeFiles/Upper.dir/tools.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Upper.dir/tools.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/Practica09-String_Array_Vector/Upper_Lower/tools.cc > CMakeFiles/Upper.dir/tools.cc.i

CMakeFiles/Upper.dir/tools.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Upper.dir/tools.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/Practica09-String_Array_Vector/Upper_Lower/tools.cc -o CMakeFiles/Upper.dir/tools.cc.s

CMakeFiles/Upper.dir/Upper_Lower.cc.o: CMakeFiles/Upper.dir/flags.make
CMakeFiles/Upper.dir/Upper_Lower.cc.o: ../Upper_Lower.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/Practica09-String_Array_Vector/Upper_Lower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Upper.dir/Upper_Lower.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Upper.dir/Upper_Lower.cc.o -c /home/usuario/Practica09-String_Array_Vector/Upper_Lower/Upper_Lower.cc

CMakeFiles/Upper.dir/Upper_Lower.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Upper.dir/Upper_Lower.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/Practica09-String_Array_Vector/Upper_Lower/Upper_Lower.cc > CMakeFiles/Upper.dir/Upper_Lower.cc.i

CMakeFiles/Upper.dir/Upper_Lower.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Upper.dir/Upper_Lower.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/Practica09-String_Array_Vector/Upper_Lower/Upper_Lower.cc -o CMakeFiles/Upper.dir/Upper_Lower.cc.s

CMakeFiles/Upper.dir/Upper_Lower-function.cc.o: CMakeFiles/Upper.dir/flags.make
CMakeFiles/Upper.dir/Upper_Lower-function.cc.o: ../Upper_Lower-function.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/usuario/Practica09-String_Array_Vector/Upper_Lower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/Upper.dir/Upper_Lower-function.cc.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Upper.dir/Upper_Lower-function.cc.o -c /home/usuario/Practica09-String_Array_Vector/Upper_Lower/Upper_Lower-function.cc

CMakeFiles/Upper.dir/Upper_Lower-function.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Upper.dir/Upper_Lower-function.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/usuario/Practica09-String_Array_Vector/Upper_Lower/Upper_Lower-function.cc > CMakeFiles/Upper.dir/Upper_Lower-function.cc.i

CMakeFiles/Upper.dir/Upper_Lower-function.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Upper.dir/Upper_Lower-function.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/usuario/Practica09-String_Array_Vector/Upper_Lower/Upper_Lower-function.cc -o CMakeFiles/Upper.dir/Upper_Lower-function.cc.s

# Object files for target Upper
Upper_OBJECTS = \
"CMakeFiles/Upper.dir/tools.cc.o" \
"CMakeFiles/Upper.dir/Upper_Lower.cc.o" \
"CMakeFiles/Upper.dir/Upper_Lower-function.cc.o"

# External object files for target Upper
Upper_EXTERNAL_OBJECTS =

Upper: CMakeFiles/Upper.dir/tools.cc.o
Upper: CMakeFiles/Upper.dir/Upper_Lower.cc.o
Upper: CMakeFiles/Upper.dir/Upper_Lower-function.cc.o
Upper: CMakeFiles/Upper.dir/build.make
Upper: CMakeFiles/Upper.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/usuario/Practica09-String_Array_Vector/Upper_Lower/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable Upper"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Upper.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Upper.dir/build: Upper

.PHONY : CMakeFiles/Upper.dir/build

CMakeFiles/Upper.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Upper.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Upper.dir/clean

CMakeFiles/Upper.dir/depend:
	cd /home/usuario/Practica09-String_Array_Vector/Upper_Lower/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/usuario/Practica09-String_Array_Vector/Upper_Lower /home/usuario/Practica09-String_Array_Vector/Upper_Lower /home/usuario/Practica09-String_Array_Vector/Upper_Lower/build /home/usuario/Practica09-String_Array_Vector/Upper_Lower/build /home/usuario/Practica09-String_Array_Vector/Upper_Lower/build/CMakeFiles/Upper.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Upper.dir/depend

