#pragma once

#include <iostream>

using namespace std;
class Room {
public:
    virtual void print() = 0;
};

class faery_land_room : public Room {
public:
    void print() override {
        cout << "Making faery room" << endl;
    }
};

class dystopian_maze_room : public Room{
public:
    void print() override {
        cout << "Making dystopian room" << endl;
    }
};