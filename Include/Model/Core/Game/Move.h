#ifndef MOVE_H
#define MOVE_H

#include "Graph.h"
#include "BFS.h"
#include "Player.h"
#include "Wolf.h"
#include <cstdlib>
#include <ctime>
#include <exception>

class Move
{
private:
    bool validMove(const Graph &, Player &, char); // check the validation of every move
    bool diceMove(); // dice simulator method for wolf move

public:
    void movePlayer(const Graph &, Player &, char); // move player method
    void moveWolf(Wolf & , char); // move wolf method
};

#endif