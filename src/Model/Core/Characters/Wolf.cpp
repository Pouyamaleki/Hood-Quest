#include "Wolf.h"

// wolf calss constructor implementation
Wolf::Wolf(char position)
{
    setPosition(position);
}

// set positoin implementation
void Wolf::setPosition(char position)
{
    wolfPosition = position;
}

// get position method implementation
char Wolf::getPosition() const
{
    return wolfPosition;
}