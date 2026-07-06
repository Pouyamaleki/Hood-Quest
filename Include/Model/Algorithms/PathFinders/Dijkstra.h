#ifndef DIJKSTRA_H
#define DIJKSTRA_H

#include "Graph.h"
#include <queue>
#include <algorithm>
#include <iostream>

struct dijkstraResult; // a struct to store the dijkstra result
struct pathFinderResult; // a struct to store the path finder result
dijkstraResult dijkstra(const Graph &, char); // dijkstra function to make the distances table
pathFinderResult pathFinder(const Graph & , char , char); // path finder function to find the shortest path
void printPath(const Graph &, char, char); // a function to print the path in terminal

#endif DIJKSTRA_H