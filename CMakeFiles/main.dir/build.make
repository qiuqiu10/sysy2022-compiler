# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /home/qiuchengyu/.local/lib/python3.8/site-packages/cmake/data/bin/cmake

# The command to remove a file.
RM = /home/qiuchengyu/.local/lib/python3.8/site-packages/cmake/data/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/qiuchengyu/sysy2022

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qiuchengyu/sysy2022

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/main.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o: src/frontend/AstVisitor.cpp
CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o -MF CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o.d -o CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o -c /home/qiuchengyu/sysy2022/src/frontend/AstVisitor.cpp

CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiuchengyu/sysy2022/src/frontend/AstVisitor.cpp > CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.i

CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiuchengyu/sysy2022/src/frontend/AstVisitor.cpp -o CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.s

CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o: src/frontend/SysYBaseVisitor.cpp
CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o -MF CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o.d -o CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o -c /home/qiuchengyu/sysy2022/src/frontend/SysYBaseVisitor.cpp

CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiuchengyu/sysy2022/src/frontend/SysYBaseVisitor.cpp > CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.i

CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiuchengyu/sysy2022/src/frontend/SysYBaseVisitor.cpp -o CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.s

CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o: src/frontend/SysYLexer.cpp
CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o -MF CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o.d -o CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o -c /home/qiuchengyu/sysy2022/src/frontend/SysYLexer.cpp

CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiuchengyu/sysy2022/src/frontend/SysYLexer.cpp > CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.i

CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiuchengyu/sysy2022/src/frontend/SysYLexer.cpp -o CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.s

CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o: src/frontend/SysYParser.cpp
CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o -MF CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o.d -o CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o -c /home/qiuchengyu/sysy2022/src/frontend/SysYParser.cpp

CMakeFiles/main.dir/src/frontend/SysYParser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/frontend/SysYParser.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiuchengyu/sysy2022/src/frontend/SysYParser.cpp > CMakeFiles/main.dir/src/frontend/SysYParser.cpp.i

CMakeFiles/main.dir/src/frontend/SysYParser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/frontend/SysYParser.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiuchengyu/sysy2022/src/frontend/SysYParser.cpp -o CMakeFiles/main.dir/src/frontend/SysYParser.cpp.s

CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o: src/frontend/SysYVisitor.cpp
CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o -MF CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o.d -o CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o -c /home/qiuchengyu/sysy2022/src/frontend/SysYVisitor.cpp

CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiuchengyu/sysy2022/src/frontend/SysYVisitor.cpp > CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.i

CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiuchengyu/sysy2022/src/frontend/SysYVisitor.cpp -o CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.s

CMakeFiles/main.dir/src/frontend/ast.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/frontend/ast.cpp.o: src/frontend/ast.cpp
CMakeFiles/main.dir/src/frontend/ast.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/src/frontend/ast.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/frontend/ast.cpp.o -MF CMakeFiles/main.dir/src/frontend/ast.cpp.o.d -o CMakeFiles/main.dir/src/frontend/ast.cpp.o -c /home/qiuchengyu/sysy2022/src/frontend/ast.cpp

CMakeFiles/main.dir/src/frontend/ast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/frontend/ast.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiuchengyu/sysy2022/src/frontend/ast.cpp > CMakeFiles/main.dir/src/frontend/ast.cpp.i

CMakeFiles/main.dir/src/frontend/ast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/frontend/ast.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiuchengyu/sysy2022/src/frontend/ast.cpp -o CMakeFiles/main.dir/src/frontend/ast.cpp.s

CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.o: src/main.cpp
CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/src/main.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/main.dir/src/main.cpp.o -MF CMakeFiles/main.dir/src/main.cpp.o.d -o CMakeFiles/main.dir/src/main.cpp.o -c /home/qiuchengyu/sysy2022/src/main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiuchengyu/sysy2022/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiuchengyu/sysy2022/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o" \
"CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o" \
"CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o" \
"CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o" \
"CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o" \
"CMakeFiles/main.dir/src/frontend/ast.cpp.o" \
"CMakeFiles/main.dir/src/main.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/frontend/AstVisitor.cpp.o
main: CMakeFiles/main.dir/src/frontend/SysYBaseVisitor.cpp.o
main: CMakeFiles/main.dir/src/frontend/SysYLexer.cpp.o
main: CMakeFiles/main.dir/src/frontend/SysYParser.cpp.o
main: CMakeFiles/main.dir/src/frontend/SysYVisitor.cpp.o
main: CMakeFiles/main.dir/src/frontend/ast.cpp.o
main: CMakeFiles/main.dir/src/main.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qiuchengyu/sysy2022/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main
.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/qiuchengyu/sysy2022 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qiuchengyu/sysy2022 /home/qiuchengyu/sysy2022 /home/qiuchengyu/sysy2022 /home/qiuchengyu/sysy2022 /home/qiuchengyu/sysy2022/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend

