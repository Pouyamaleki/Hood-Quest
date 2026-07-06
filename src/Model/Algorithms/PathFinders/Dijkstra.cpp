#include <Dijkstra.h>

// dijkstra function implementation
map<char, int> dijkstra(const Graph &graph, char from)
{
    // get the graph from the getter method
    const auto &adjList = graph.getAdjList();

    // create two maps to store the distance and the previous node
    map<char, int> distance;  // map for distance
    map<char, char> previous; // map for prevoius node

    // a for loop to initialize the maps
    for (const auto &i : adjList)
    {
        // the new members will be add to the maps and initialize at the same time
        distance[i.first] = INT_MAX; // initialize the intiger to it's maximum number
        previous[i.first] = '\0';    // initialize every character to \0 or nothing
    }

    // the source node distance is equall to 0
    distance[from] = 0;

    // priority queue
    priority_queue<pair<int, char>, vector<pair<int, char>, greater<pair<int, char>>>> pq;
    pq.push({0, from}); // push the from node and the distance to the priority queue

    // dijkstra algorithm loop
    while (!pq.empty())
    {
        int currentDistance = pq.top().first;
        char currentNode = pq.top().second;
        pq.pop();

        // ignore the old inputs
        if (currentDistance > distance[currentNode])
        {
            continue;
        }

        // check the neighbor nodes
        auto it = adjList.find(currentNode);
        if (it == adjList.end())
        {
            continue; // if the node does not exist
        }

        // a for loop to check if there is a better path or no
        for (const auto &neighbor : it->second)
        {
            char nextNode = neighbor.first;
            int weight = neighbor.second;

            // check if the new shortest path valid or no
            if (distance[currentNode] + weight < distance[nextNode])
            {
                // update the shortest path
                distance[nextNode] = distance[currentNode] + weight;
                previous[nextNode] = currentNode;
                pq.push({distance[nextNode], nextNode});
            }
        }
    }

    return distance;
}