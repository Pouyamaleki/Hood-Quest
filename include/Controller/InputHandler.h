#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <iostream>
#include <cctype>
#include "UserManager.h"
#include "BST.h"
using namespace std;

class CliView;

class InputHandler
{
private:
    CliView &cliinput;
    Usermanager &userManager;
    BST &bstview;

public:
    // Input handler constructor
    InputHandler(Usermanager &userManager, BST &bst, CliView &cli);

    string MainHandler(); // handle the login system
    string CurrentHandler(); // handel the input from the user
    bool SelectModeofAlghorithms(); // select between A* and dijkstra
    void ScoreUser(int); // We get both the username and the search type
};
#endif