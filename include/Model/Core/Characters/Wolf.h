#ifndef WOLF_H
#define WOLF_H

class Wolf
{
private:
    char wolfPosition;

public:
    Wolf(char); // wolf class constructor
    void setPosition(char); // position setter method
    char getPosition() const; // position getter method
};

#endif