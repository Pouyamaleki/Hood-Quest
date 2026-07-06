#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include <Graph.h>
#include <queue>
#include <algorithm>

map<char, int> dijkstra(const Graph &, char); // dijkstra function to make the distances table
vector<char> PathFinder(const Graph & , char , char); // path finder function to find the shortest path

#endif DIJKSTRA_H