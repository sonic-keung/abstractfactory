#pragma once
#include "room.hpp"
#include "wall.hpp"
#include "maze.hpp"
#include "door.hpp"

class maze_factory {
public:
    virtual Maze *make_maze() = 0;
    virtual Wall *make_wall() = 0;
    virtual Room *make_room() = 0;
    virtual Door *make_door(Room*, Room*) = 0;
};