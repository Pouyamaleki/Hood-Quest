#ifndef CLIVIEW_H
#define CLIVIEW_H

#include <iostream>
#include "UserManager.h"
#include "BST.h"
using namespace std;
class Cliview
{
private:
    Usermanager usermanager;
    BST bstview;

public:
    void displayGraph(char, char);
    void PrintMainMenu();
    void PrintLeaderboard();
    void PrintScore(string);
};

#endif CLIVIEW_H