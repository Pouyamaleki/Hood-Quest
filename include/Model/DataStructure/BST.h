#ifndef BST_H
#define BST_H

#include <iostream>
#include <string>
using namespace std;

struct BSTNode
{
    string username;
    long int score;
    BSTNode *left;
    BSTNode *right;

    BSTNode(const string &u, long int s) : username(u), score(s), left(nullptr), right(nullptr) {}
};

class BST
{
private:
    BSTNode *root;

    BSTNode *insertHelper(BSTNode *, const string &, long int); // isert helper method for BST
    BSTNode *searchHelper(BSTNode *, const string &) const; // search helper method for BST
    void destroyHelper(BSTNode *);

public:
    BST(); // BST constructor
    ~BST(); // BST destructor

    void insert(const string &, long int); // insert method in BST
    BSTNode *search(const string &) const; // search method in BST
    bool updateScore(const string &, long int); // Update Score in BST
    void clear(); // clear the BST
};

#endif