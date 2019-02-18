cmake_minimum_required(VERSION 3.12)
project(chess)

set(CMAKE_CXX_STANDARD 14)

add_executable(chess main.cpp src/Game.cpp src/Game.h src/gui/Frame.cpp src/gui/Frame.h src/graphics/Board.cpp src/graphics/Board.h src/graphics/Sprite.cpp src/graphics/Sprite.h src/graphics/SpriteSheet.cpp src/graphics/SpriteSheet.h)

set(CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}/cmake_modules")
find_package(SFML REQUIRED system window graphics network audio)
if (SFML_FOUND)
    include_directories(${SFML_INCLUDE_DIR})
    target_link_libraries(chess ${SFML_LIBRARIES})
endif()