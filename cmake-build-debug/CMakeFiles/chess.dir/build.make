# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/macbookpro/Projects/chess

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/macbookpro/Projects/chess/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/chess.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/chess.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chess.dir/flags.make

CMakeFiles/chess.dir/main.cpp.o: CMakeFiles/chess.dir/flags.make
CMakeFiles/chess.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chess.dir/main.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/main.cpp.o -c /Users/macbookpro/Projects/chess/main.cpp

CMakeFiles/chess.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/main.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macbookpro/Projects/chess/main.cpp > CMakeFiles/chess.dir/main.cpp.i

CMakeFiles/chess.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/main.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macbookpro/Projects/chess/main.cpp -o CMakeFiles/chess.dir/main.cpp.s

CMakeFiles/chess.dir/src/Game.cpp.o: CMakeFiles/chess.dir/flags.make
CMakeFiles/chess.dir/src/Game.cpp.o: ../src/Game.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/chess.dir/src/Game.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/Game.cpp.o -c /Users/macbookpro/Projects/chess/src/Game.cpp

CMakeFiles/chess.dir/src/Game.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/Game.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macbookpro/Projects/chess/src/Game.cpp > CMakeFiles/chess.dir/src/Game.cpp.i

CMakeFiles/chess.dir/src/Game.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/Game.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macbookpro/Projects/chess/src/Game.cpp -o CMakeFiles/chess.dir/src/Game.cpp.s

CMakeFiles/chess.dir/src/gui/Frame.cpp.o: CMakeFiles/chess.dir/flags.make
CMakeFiles/chess.dir/src/gui/Frame.cpp.o: ../src/gui/Frame.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/chess.dir/src/gui/Frame.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/gui/Frame.cpp.o -c /Users/macbookpro/Projects/chess/src/gui/Frame.cpp

CMakeFiles/chess.dir/src/gui/Frame.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/gui/Frame.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macbookpro/Projects/chess/src/gui/Frame.cpp > CMakeFiles/chess.dir/src/gui/Frame.cpp.i

CMakeFiles/chess.dir/src/gui/Frame.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/gui/Frame.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macbookpro/Projects/chess/src/gui/Frame.cpp -o CMakeFiles/chess.dir/src/gui/Frame.cpp.s

CMakeFiles/chess.dir/src/graphics/Board.cpp.o: CMakeFiles/chess.dir/flags.make
CMakeFiles/chess.dir/src/graphics/Board.cpp.o: ../src/graphics/Board.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/chess.dir/src/graphics/Board.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/graphics/Board.cpp.o -c /Users/macbookpro/Projects/chess/src/graphics/Board.cpp

CMakeFiles/chess.dir/src/graphics/Board.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/graphics/Board.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macbookpro/Projects/chess/src/graphics/Board.cpp > CMakeFiles/chess.dir/src/graphics/Board.cpp.i

CMakeFiles/chess.dir/src/graphics/Board.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/graphics/Board.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macbookpro/Projects/chess/src/graphics/Board.cpp -o CMakeFiles/chess.dir/src/graphics/Board.cpp.s

CMakeFiles/chess.dir/src/graphics/Sprite.cpp.o: CMakeFiles/chess.dir/flags.make
CMakeFiles/chess.dir/src/graphics/Sprite.cpp.o: ../src/graphics/Sprite.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/chess.dir/src/graphics/Sprite.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/graphics/Sprite.cpp.o -c /Users/macbookpro/Projects/chess/src/graphics/Sprite.cpp

CMakeFiles/chess.dir/src/graphics/Sprite.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/graphics/Sprite.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macbookpro/Projects/chess/src/graphics/Sprite.cpp > CMakeFiles/chess.dir/src/graphics/Sprite.cpp.i

CMakeFiles/chess.dir/src/graphics/Sprite.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/graphics/Sprite.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macbookpro/Projects/chess/src/graphics/Sprite.cpp -o CMakeFiles/chess.dir/src/graphics/Sprite.cpp.s

CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.o: CMakeFiles/chess.dir/flags.make
CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.o: ../src/graphics/SpriteSheet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.o -c /Users/macbookpro/Projects/chess/src/graphics/SpriteSheet.cpp

CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/macbookpro/Projects/chess/src/graphics/SpriteSheet.cpp > CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.i

CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/macbookpro/Projects/chess/src/graphics/SpriteSheet.cpp -o CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.s

# Object files for target chess
chess_OBJECTS = \
"CMakeFiles/chess.dir/main.cpp.o" \
"CMakeFiles/chess.dir/src/Game.cpp.o" \
"CMakeFiles/chess.dir/src/gui/Frame.cpp.o" \
"CMakeFiles/chess.dir/src/graphics/Board.cpp.o" \
"CMakeFiles/chess.dir/src/graphics/Sprite.cpp.o" \
"CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.o"

# External object files for target chess
chess_EXTERNAL_OBJECTS =

chess: CMakeFiles/chess.dir/main.cpp.o
chess: CMakeFiles/chess.dir/src/Game.cpp.o
chess: CMakeFiles/chess.dir/src/gui/Frame.cpp.o
chess: CMakeFiles/chess.dir/src/graphics/Board.cpp.o
chess: CMakeFiles/chess.dir/src/graphics/Sprite.cpp.o
chess: CMakeFiles/chess.dir/src/graphics/SpriteSheet.cpp.o
chess: CMakeFiles/chess.dir/build.make
chess: /usr/local/lib/libsfml-system.dylib
chess: /usr/local/lib/libsfml-window.dylib
chess: /usr/local/lib/libsfml-graphics.dylib
chess: /usr/local/lib/libsfml-network.dylib
chess: /usr/local/lib/libsfml-audio.dylib
chess: CMakeFiles/chess.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Linking CXX executable chess"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/chess.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chess.dir/build: chess

.PHONY : CMakeFiles/chess.dir/build

CMakeFiles/chess.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/chess.dir/cmake_clean.cmake
.PHONY : CMakeFiles/chess.dir/clean

CMakeFiles/chess.dir/depend:
	cd /Users/macbookpro/Projects/chess/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/macbookpro/Projects/chess /Users/macbookpro/Projects/chess /Users/macbookpro/Projects/chess/cmake-build-debug /Users/macbookpro/Projects/chess/cmake-build-debug /Users/macbookpro/Projects/chess/cmake-build-debug/CMakeFiles/chess.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/chess.dir/depend
