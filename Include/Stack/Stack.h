#include <vector>

class Stack
{
private:
    int counter = 0;

public:
    bool isEmpty() const;
    void push();
    int pop();
};
