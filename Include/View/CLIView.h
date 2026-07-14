#ifndef CLIVIEW_H
#define CLIVIEW_H

#include <iostream>
#include "UserManager.h"
#include "BST.h"
#include "Maxheap.h"
using namespace std;
class Cliview
{
private:
    Usermanager usermanager;
    BST bstview;
    MaxHeap maxheapview;

    const string RESET = "\033[0m";
    const string RED = "\033[1;31m";
    const string BLUE = "\033[1;34m";
    const string WHITE = "\033[1;37m";

    string GetColorNude(char, char, char);

public:
    void displayGraph(char, char);
    void PrintMainMenu();
    void PrintLeaderboard();
    void PrintScore(string);
};

#endif CLIVIEW_H