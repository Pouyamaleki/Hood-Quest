#ifndef SAVELOADMANAGER_H
#define SAVELOADMANAGER_H

#include <string>
#include "UserManager.h"
using namespace std;

void save(const Usermanager &, const string &);
void load(const Usermanager &, const string &);
void Writh(const string &, const string &);
string read(const string &, const string &);

#endif SAVELOADMANAGER_H