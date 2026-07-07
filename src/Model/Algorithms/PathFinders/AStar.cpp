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

    // initializing the origin node
    gScore[from] = 0;
    fScore[from] = heuristic(from, to);

    // create the priority queue to store the nodes with ascending sort
    priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> pq;
    pq.push({fScore[from], from}); // initialize the priority queue

    // A* algorithm main loop
    while (!pq.empty())
    {
        char currentNode = pq.top().second;
        int currentFScore = pq.top().first;
        pq.pop();

        // skip the repeated nodes
        if (currentFScore > fScore[currentNode])
        {
            continue;
        }

        // if the program reach the destination create the path
        if (currentNode == to)
        {
            vector<char> path;
            char current = to;

            // a while loop to store the path
            while (current != '\0')
            {
                path.push_back(current);
                // check for the last node
                if (current == from)
                {
                    break;
                }
                current = previous[current];
            }

            // revers the path to achive the right order
            reverse(path.begin(), path.end());
            return {path , gScore[to]};
        }
    }
}