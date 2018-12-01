#pragma once

#include <iostream>

using namespace std;
class Maze {
public:
    virtual void print() = 0;
};

class faery_land_maze : public Maze {
public:
    void print() override {
        cout << "Making faery maze" << endl;
    }
};

class dystopian_maze_maze : public Maze {
public:
    void print() override {
        cout << "Making dystopian maze" << endl;
    }
};