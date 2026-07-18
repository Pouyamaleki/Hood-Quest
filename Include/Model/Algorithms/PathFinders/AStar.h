#ifndef ASTAR_H
#define ASTAR_H

#include "Graph.h"
#include <functional>
#include <vector>
#include <queue>
#include <cmath>
#include <algorithm>
#include <climits>
#include <exception>
#include <iostream>

class AStar
{
private:
    vector<char> AStarpath;
    
    const string RESET = "\033[0m";
    const string GREEN = "\033[1;32m";
public:
    struct AstarResult; // a struct to store the finall result of A* algorithm
    AstarResult AStarAlgorithm(const Graph &, char, char, char); // A* algorithm function
    int heuristic(char, char); // a function to calculate heauristic euclidean distance
    void AStarprintPath(const Graph &, char, char, char);// a method to print the suggested path
    vector<char> getPath() const; // AStarPath getter method
};

#endif