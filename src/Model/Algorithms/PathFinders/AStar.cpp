#include "AStar.h"

// A* result struct implementation
struct AstarResult
{
    vector<char> path;
    int totalWeight;
};

// A* algorithm function implementation
AstarResult AStar(const Graph &graph, char from, char to, char wolfPosition, heuristicFunction heuristic)
{
    // create a new graph to remove the wolf position
    Graph newgraph;

    // a for loop to create the nodes in filtered graph
    for (const auto &node : graph.getAdjList())
    {
        if (node.first != wolfPosition)
        {
            newgraph.addNode(node.first);
        }
    }

    // a for loop to copy the valid edges
    for (const auto &node : graph.getAdjList())
    {
        char fromNode = node.first;
        // skip the wolf position node
        if (fromNode == wolfPosition)
        {
            continue;
        }

        // a for loop to navigate the edges of every node
        for (const auto &edge : node.second)
        {
            char toNode = edge.first;
            int weight = edge.second;

            // skip the edges that connect to wolf position
            if (to != wolfPosition)
            {
                newgraph.addEdge(fromNode, toNode, weight);
            }
        }
    }

    // assign the adjacency list
    const auto &adjList = newgraph.getAdjList();

    // check for the from and to nodes validation
    if (adjList.find(from) == adjList.end() || adjList.find(to) == adjList.end())
    {
        return {{}, -1};
    }

    map<char, int> gScore;    // real destination from the origin
    map<char, int> fScore;    // gScore + heuristic
    map<char, char> previous; // store the prevoius node

    // innitialize every variable to maximum number they can store
    for (const auto &node : adjList)
    {
        gScore[node.first] = INT_MAX;
        fScore[node.first] = INT_MAX;
        previous[node.first] = '\0';
    }
}