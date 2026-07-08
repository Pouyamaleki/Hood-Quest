#include "BFS.h"

// BFS algorithm implementation
vector<char> BFS(const Graph &graph, char playerPosition, char wolfPosition)
{
    // number of nodes in the graph
    int nodeNumber = 19;

    // create a queue for breadth search
    queue<char> pq;
    // a vector to stop search the repeated nodes
    vector<bool> visitedNode(nodeNumber, false);
    // a vector to store the parents nodes
    vector<char> parentsNode(nodeNumber, -1);

    // add the wolf postion to the queue
    pq.push(wolfPosition);
}

// wolf next postion implementation
char wolfNextPosition(char, char);