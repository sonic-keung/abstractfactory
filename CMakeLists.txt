cmake_minimum_required(VERSION 3.12)
project(abstractfactory)

set(CMAKE_CXX_STANDARD 14)

add_executable(abstractfactory driver.cpp wall.hpp maze.hpp room.hpp door.hpp maze_factory.hpp maze_game.hpp)