#include <Graph.h>

// addNode method implementation
void Graph::addNode(char node)
{
    if (adjList.find(node) == adjList.end()) // check if the node is not already in the graph
    {
        adjList[node] = {};
        return;
    }
}

// addEdge method implementation
void Graph::addEdge(char from, char to, int weight)
{
    adjList[from].push_back({to , weight}); // add an edge for the first node
    adjList[to].push_back({from , weight}); // add an edge for the second node
}