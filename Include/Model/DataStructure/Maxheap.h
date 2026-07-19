#ifndef MAXHEAP_H
#define MAXHEAP_H

#include <string>
#include <vector>

using namespace std;

class MaxHeap
{
private:
    vector<pair<string, long int>> heap;

    int parent(int i) const { return (i - 1) / 2; }
    int leftChild(int i) const { return 2 * i + 1; }
    int rightChild(int i) const { return 2 * i + 2; }

    void heapifyUp(int);
    void heapifyDown(int);

public:
    void insert(const string &, long int); // insert method
    int search(const string &) const; // search method
    void updateScore(const string &, long int); // update the player score method

    bool MaxHeapIsEmpty() const; // a method to check if the max HEap is empty or no
    pair<string, long int> getTop() const; // get the top member method
    void clear(); // a method to clear the max heap
};

#endif