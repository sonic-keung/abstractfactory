#pragma once

#include <iostream>
#include "maze_factory.hpp"

class maze_game {
public:
    Maze *create_maze(maze_factory& factory) {
        Maze *maze = factory.make_maze();
        Wall *wall = factory.make_wall();
        Room *room1 = factory.make_room();
        Room *room2 = factory.make_room();
        Door *door = factory.make_door(room1, room2);

        return maze;
    }
};
//
//class faery_maze_game : maze_game {
//
//};
//
//class dystopian_maze_game : maze_game {
//
//};




