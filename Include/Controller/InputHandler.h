#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include <iostream>
#include "UserManager.h"
using namespace std;
class InputHandler
{
private:
public:
    string MainHandler();
    char CurrentHandler();
    bool SelectModeofAlghorithms();
    void ScoreUser(); // We get both the username and the search type
};
#endif INPUTHANDLER_H