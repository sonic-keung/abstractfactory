#pragma once

#include <iostream>

using namespace std;
class Wall {
public:
    virtual void print() = 0;
};

class faery_land_wall : public Wall{
public:
    void print() override {
        cout << "Making faery wall" << endl;
    }
};

class dystopian_maze_wall : public Wall{
public:
    void print() override {
        cout << "Making dystopian wall" << endl;
    }
};
