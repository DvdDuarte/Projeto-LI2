# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /snap/clion/103/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/103/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/david/Projeto-LI2/Rastros

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/david/Projeto-LI2/Rastros/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Rastros.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Rastros.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Rastros.dir/flags.make

CMakeFiles/Rastros.dir/main.c.o: CMakeFiles/Rastros.dir/flags.make
CMakeFiles/Rastros.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/Rastros.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Rastros.dir/main.c.o   -c /home/david/Projeto-LI2/Rastros/main.c

CMakeFiles/Rastros.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rastros.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/Projeto-LI2/Rastros/main.c > CMakeFiles/Rastros.dir/main.c.i

CMakeFiles/Rastros.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rastros.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/Projeto-LI2/Rastros/main.c -o CMakeFiles/Rastros.dir/main.c.s

CMakeFiles/Rastros.dir/Intrepretador.c.o: CMakeFiles/Rastros.dir/flags.make
CMakeFiles/Rastros.dir/Intrepretador.c.o: ../Intrepretador.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/Rastros.dir/Intrepretador.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Rastros.dir/Intrepretador.c.o   -c /home/david/Projeto-LI2/Rastros/Intrepretador.c

CMakeFiles/Rastros.dir/Intrepretador.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rastros.dir/Intrepretador.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/Projeto-LI2/Rastros/Intrepretador.c > CMakeFiles/Rastros.dir/Intrepretador.c.i

CMakeFiles/Rastros.dir/Intrepretador.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rastros.dir/Intrepretador.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/Projeto-LI2/Rastros/Intrepretador.c -o CMakeFiles/Rastros.dir/Intrepretador.c.s

CMakeFiles/Rastros.dir/estruturasDados.c.o: CMakeFiles/Rastros.dir/flags.make
CMakeFiles/Rastros.dir/estruturasDados.c.o: ../estruturasDados.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/Rastros.dir/estruturasDados.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Rastros.dir/estruturasDados.c.o   -c /home/david/Projeto-LI2/Rastros/estruturasDados.c

CMakeFiles/Rastros.dir/estruturasDados.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rastros.dir/estruturasDados.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/Projeto-LI2/Rastros/estruturasDados.c > CMakeFiles/Rastros.dir/estruturasDados.c.i

CMakeFiles/Rastros.dir/estruturasDados.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rastros.dir/estruturasDados.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/Projeto-LI2/Rastros/estruturasDados.c -o CMakeFiles/Rastros.dir/estruturasDados.c.s

CMakeFiles/Rastros.dir/jogar.c.o: CMakeFiles/Rastros.dir/flags.make
CMakeFiles/Rastros.dir/jogar.c.o: ../jogar.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/Rastros.dir/jogar.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Rastros.dir/jogar.c.o   -c /home/david/Projeto-LI2/Rastros/jogar.c

CMakeFiles/Rastros.dir/jogar.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rastros.dir/jogar.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/Projeto-LI2/Rastros/jogar.c > CMakeFiles/Rastros.dir/jogar.c.i

CMakeFiles/Rastros.dir/jogar.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rastros.dir/jogar.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/Projeto-LI2/Rastros/jogar.c -o CMakeFiles/Rastros.dir/jogar.c.s

CMakeFiles/Rastros.dir/inicializador.c.o: CMakeFiles/Rastros.dir/flags.make
CMakeFiles/Rastros.dir/inicializador.c.o: ../inicializador.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/Rastros.dir/inicializador.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Rastros.dir/inicializador.c.o   -c /home/david/Projeto-LI2/Rastros/inicializador.c

CMakeFiles/Rastros.dir/inicializador.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rastros.dir/inicializador.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/Projeto-LI2/Rastros/inicializador.c > CMakeFiles/Rastros.dir/inicializador.c.i

CMakeFiles/Rastros.dir/inicializador.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rastros.dir/inicializador.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/Projeto-LI2/Rastros/inicializador.c -o CMakeFiles/Rastros.dir/inicializador.c.s

CMakeFiles/Rastros.dir/interface.c.o: CMakeFiles/Rastros.dir/flags.make
CMakeFiles/Rastros.dir/interface.c.o: ../interface.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/Rastros.dir/interface.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/Rastros.dir/interface.c.o   -c /home/david/Projeto-LI2/Rastros/interface.c

CMakeFiles/Rastros.dir/interface.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/Rastros.dir/interface.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/david/Projeto-LI2/Rastros/interface.c > CMakeFiles/Rastros.dir/interface.c.i

CMakeFiles/Rastros.dir/interface.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/Rastros.dir/interface.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/david/Projeto-LI2/Rastros/interface.c -o CMakeFiles/Rastros.dir/interface.c.s

# Object files for target Rastros
Rastros_OBJECTS = \
"CMakeFiles/Rastros.dir/main.c.o" \
"CMakeFiles/Rastros.dir/Intrepretador.c.o" \
"CMakeFiles/Rastros.dir/estruturasDados.c.o" \
"CMakeFiles/Rastros.dir/jogar.c.o" \
"CMakeFiles/Rastros.dir/inicializador.c.o" \
"CMakeFiles/Rastros.dir/interface.c.o"

# External object files for target Rastros
Rastros_EXTERNAL_OBJECTS =

Rastros: CMakeFiles/Rastros.dir/main.c.o
Rastros: CMakeFiles/Rastros.dir/Intrepretador.c.o
Rastros: CMakeFiles/Rastros.dir/estruturasDados.c.o
Rastros: CMakeFiles/Rastros.dir/jogar.c.o
Rastros: CMakeFiles/Rastros.dir/inicializador.c.o
Rastros: CMakeFiles/Rastros.dir/interface.c.o
Rastros: CMakeFiles/Rastros.dir/build.make
Rastros: CMakeFiles/Rastros.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking C executable Rastros"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Rastros.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Rastros.dir/build: Rastros

.PHONY : CMakeFiles/Rastros.dir/build

CMakeFiles/Rastros.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Rastros.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Rastros.dir/clean

CMakeFiles/Rastros.dir/depend:
	cd /home/david/Projeto-LI2/Rastros/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/david/Projeto-LI2/Rastros /home/david/Projeto-LI2/Rastros /home/david/Projeto-LI2/Rastros/cmake-build-debug /home/david/Projeto-LI2/Rastros/cmake-build-debug /home/david/Projeto-LI2/Rastros/cmake-build-debug/CMakeFiles/Rastros.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Rastros.dir/depend

