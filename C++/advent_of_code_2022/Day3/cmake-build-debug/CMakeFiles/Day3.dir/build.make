# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2021.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Day3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Day3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Day3.dir/flags.make

CMakeFiles/Day3.dir/main.cpp.obj: CMakeFiles/Day3.dir/flags.make
CMakeFiles/Day3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Day3.dir/main.cpp.obj"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Day3.dir\main.cpp.obj -c "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\main.cpp"

CMakeFiles/Day3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Day3.dir/main.cpp.i"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\main.cpp" > CMakeFiles\Day3.dir\main.cpp.i

CMakeFiles/Day3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Day3.dir/main.cpp.s"
	C:\mingw-w64\i686-8.1.0-posix-dwarf-rt_v6-rev0\mingw32\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\main.cpp" -o CMakeFiles\Day3.dir\main.cpp.s

# Object files for target Day3
Day3_OBJECTS = \
"CMakeFiles/Day3.dir/main.cpp.obj"

# External object files for target Day3
Day3_EXTERNAL_OBJECTS =

Day3.exe: CMakeFiles/Day3.dir/main.cpp.obj
Day3.exe: CMakeFiles/Day3.dir/build.make
Day3.exe: CMakeFiles/Day3.dir/linklibs.rsp
Day3.exe: CMakeFiles/Day3.dir/objects1.rsp
Day3.exe: CMakeFiles/Day3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Day3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Day3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Day3.dir/build: Day3.exe
.PHONY : CMakeFiles/Day3.dir/build

CMakeFiles/Day3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Day3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Day3.dir/clean

CMakeFiles/Day3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3" "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3" "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\cmake-build-debug" "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\cmake-build-debug" "C:\Users\Lavinia\Desktop\advent of code\C++\advent_of_code_2022\Day3\cmake-build-debug\CMakeFiles\Day3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Day3.dir/depend

