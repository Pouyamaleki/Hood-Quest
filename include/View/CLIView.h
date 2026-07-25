#ifndef CLIVIEW_H
#define CLIVIEW_H

#include <iostream>
#include "UserManager.h"
#include "Maxheap.h"
using namespace std;

class InputHandler;

class CliView
{
private:
    Usermanager &usermanager;
    MaxHeap &maxheapview;

    InputHandler *inputhandler = nullptr;

    // set colors for a color full Map
    const string RESET = "\033[0m";
    const string RED = "\033[1;31m";
    const string BLUE = "\033[1;34m";
    const string WHITE = "\033[1;37m";
    const string YELLOW = "\033[1;33m";

    string GetColorNode(char, char, char);

public:
    // cliview constructor
    CliView(Usermanager &usermanager, MaxHeap &maxheap);

    // Input handler setter method
    void SetInputHandler(InputHandler &handler) { inputhandler = &handler; }

    void displayGraph(char, char, const string &, long int); // a method to show the graph
    void PrintMainMenu(); // a method to print the main menu
    void PrintLeaderboard(); // a method to print the leaderboard
    void PrintScore(); // a method to print a desired player's score
};

#endif