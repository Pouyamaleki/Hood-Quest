#include "Player.h"

// Player constructor implementation
Player::Player(std::string PlayerName, char PlayerPosition , int score)
{
    setPlayer(PlayerName , PlayerPosition , score);
}

// set Player method implementation
void Player::setPlayer(std::string name, char position, int score)
{
    setName(name);
    setPosition(position);
    setScore(score);
}

// name setter method implementation
void Player::setName(std::string name)
{
    playerName = name;
}

// position setter implememntation
void Player::setPosition(char Position)
{
    playerPosition = Position;
}

// score setter implementation
void Player::setScore(int score)
{
    playerScore = score;
}

// Player name getter impleementation
std::string Player::getName() const
{
    return playerName;   
}

// Player position getter implementation
char Player::getPosition() const
{
    return playerPosition;
}

// Player score getter implementation
int Player::getScore() const
{
    return playerScore;
}