#ifndef USERMANAGER_H
#define USERMANAGER_H

#include <iostream>
#include <vector>
#include "User.h"
#include "Hash.h"

using namespace std;

class Usermanager
{
private:
    vector<User> Users;
    int Numofuser = 0;

public:
    void CreateUser(const string &, const string &);
    bool LoginUser(const string &, const string &);
    int SearchUser(const string &);
    void increaseNumofUser() { Numofuser++; }
    void PrintScore(const string &);
};
#endif USERMANAGER_H