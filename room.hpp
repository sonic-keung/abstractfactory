#pragma once

#include <iostream>

using namespace std;
class Room {
public:
    virtual void print() = 0;
};

// prints the room for faery land
class faery_land_room : public Room {
public:
    void print() override {
        cout << "Making faery room" << endl;
    }
};

// prints the room for dystopian maze
class dystopian_maze_room : public Room{
public:
    void print() override {
        cout << "Making dystopian room" << endl;
    }
};