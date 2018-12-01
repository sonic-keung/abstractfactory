#include <iostream>

#include "maze_game.hpp"

using namespace std;
int main() {
    maze_game game;
    maze_factory *faery_maze = new faery_land;
    maze_factory *future_maze = new dystopian_maze;

    game.create_maze(*faery_maze);

    cout << endl;

    game.create_maze(*future_maze);

    return 0;
}