#pragma once

#include <iostream>

using namespace std;
class Door {
public:
    virtual void print() = 0;
};

class faery_land_door : public Door {
public:
    void print() override {
        cout << "Making faery door" << endl;
    }
};

class dystopian_maze_door : public Door {
public:
    void print() override {
        cout << "Making dystopian door" << endl;
    }
};