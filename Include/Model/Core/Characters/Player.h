#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class player
{
private:
    std::string playerName;
    char playerPosition;
    int score;

public:
    player(std::string, char, int); // player class constructor
    void setPlayer(std::string, char, int); // setter method to initialize the variables
    void setPosition(char); // setter method for player position
    void setPosition(int); // setter method for player score
    std::string getName() const; // getter method for name variable
    char getPosition() const; // getter method for player position variable
    int getScore() const; // getter method for player score variable
};

#endif