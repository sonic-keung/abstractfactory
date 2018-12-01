#pragma once

#include <iostream>

using namespace std;
class Door {
public:
    virtual void print() = 0;
};

// prints the door for faery land
class faery_land_door : public Door {
public:
    void print() override {
        cout << "Making faery door" << endl;
    }
};

// prints the door for dystopian maze
class dystopian_maze_door : public Door {
public:
    void print() override {
        cout << "Making dystopian door" << endl;
    }
};