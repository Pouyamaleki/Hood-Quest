#ifndef DAIJKSTRA_H
#define DAIJKSTRA_H

#include <Graph.h>

map<char, int> dijkstra(const Graph &, char); // daijkstra function to make the distances table
vector<char> PathFinder(const Graph & , char , char); // path finder function to find the shortest path

#endif DAIJKSTRA_H