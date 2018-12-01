#pragma once

#include <iostream>
#include "maze_factory.hpp"

// Used to create different mazes using the abstract factory pattern.
class maze_game {
public:
    // Creates a maze with maze features and returns it.
    Maze *create_maze(maze_factory& factory) {
        Maze *maze = factory.make_maze();
        Wall *wall = factory.make_wall();
        Room *room1 = factory.make_room();
        Room *room2 = factory.make_room();
        Door *door = factory.make_door(room1, room2);

        return maze;
    }
};
