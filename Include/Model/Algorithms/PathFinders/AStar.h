#ifndef ASTAR_H
#define ASTAR_H

#include "Graph.h"
#include <functional>
#include <queue>
#include <cmath>

struct AstarResult; // a struct to store the finall result of A* algorithm
using heuristicFunction = std::function<int(char, char)>; // define a new function type
AstarResult AStar(const Graph &, char, char, char, heuristicFunction); // A* algorithm function
int heuristic(char, char); // a function to calculate heauristic euclidean distance

#endif ASTAR_H