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

class dystopian_maze : public maze_factory {
public:
    Maze *make_maze() override {
        dystopian_maze_maze *myMaze = new dystopian_maze_maze;
        myMaze->print();
        return myMaze;
    }

    Wall *make_wall() override {
        dystopian_maze_wall *myWall = new dystopian_maze_wall;
        myWall->print();
        return myWall;
    }

    Room *make_room() override {
        dystopian_maze_room *myRoom = new dystopian_maze_room;
        myRoom->print();
        return myRoom;
    }

    Door *make_door(Room*, Room*) override {
        dystopian_maze_door *myDoor = new dystopian_maze_door;
        myDoor->print();
        return myDoor;
    }

};

class faery_land : public maze_factory {
public:
    Maze *make_maze() override {
        faery_land_maze *myMaze = new faery_land_maze;
        myMaze->print();
        return myMaze;
    }

    Wall *make_wall() override {
        faery_land_wall *myWall = new faery_land_wall;
        myWall->print();
        return myWall;
    }

    Room *make_room() override {
        faery_land_room *myRoom = new faery_land_room;
        myRoom->print();
        return myRoom;
    }

    Door *make_door(Room*, Room*) override {
        faery_land_door *myDoor = new faery_land_door;
        myDoor->print();
        return myDoor;
    }

};