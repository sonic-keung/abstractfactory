#pragma once

#include <iostream>
#include "maze_factory.hpp"

using namespace std;
class faery_land : public maze_factory {
public:
    Maze *make_maze() override {
        Maze *maze = nullptr;
        return maze;
    }

    Wall *make_wall() override {
        Wall *wall = nullptr;
        return wall;
    }

    Room *make_room() override {
        Room *room = nullptr;
        return room;
    }

    Door *make_door(Room*, Room*) override {
        Door *door = nullptr;
        return door;
    }

};