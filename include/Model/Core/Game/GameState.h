#ifndef GAMESTATE_H
#define GAMESTATE_H

#include "Player.h"
#include "Wolf.h"
#include "Stack.h"
#include <cstdlib>
#include <ctime>
#include <stdexcept>
#include <iostream>

class GameState
{
private:
    char getRandomNode(); // a method to set a position for player and wolf
public:
    GameState(Player &, Wolf &);          // game state constructor
    bool wolfBlock(Player &, Wolf &);     // check if the player and wold are in the same block
    bool reachedDestination(Player &);              // check if the player has reach the destination
    void undo(Player &, Wolf &, Stack &); // undo method
};

#endif