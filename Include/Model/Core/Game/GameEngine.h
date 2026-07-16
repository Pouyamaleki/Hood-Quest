#ifndef GAMEENGINE_H
#define GAMEENGINE_H

#include "CLIView.h"
#include "InputHandler.h"
#include "GameState.h"
#include "Move.h"
#include "User.h"
#include "UserManager.h"
#include "BST.h"
#include "Maxheap.h"
#include "Player.h"
#include "WOlf.h"
#include "Graph.h"
#include "Stack.h"
#include "Dijkstra.h"
#include "AStar.h"

using namespace std;

class gameEngine
{
private:
public:
    void GameLoop();
};

#endif GAMEENGINE_H