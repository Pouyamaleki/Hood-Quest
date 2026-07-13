#ifndef CLIVIEW_H
#define CLIVIEW_H

#include <iostream>
#include "UserManager.h"
using namespace std;
class Cliview
{
private:
public:
    void displayGraph(char, char);
    void PrintMainMenu();
    void PrintLeaderboard();
    void PrintScore(string); // display the score of a desired player with linear search or BST DataType
};

#endif CLIVIEW_H