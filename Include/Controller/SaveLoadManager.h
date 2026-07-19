#ifndef SAVELOADMANAGER_H
#define SAVELOADMANAGER_H

#include <iostream>
#include <string>
#include <fstream>
#include "UserManager.h"
using namespace std;

bool fileChecker(); // a function to check for the save.txt file
void save(const Usermanager &, const string &); // a function to save the data in save.txt file
void load(Usermanager &, const string &); // a function to load the data from save.txt file

#endif