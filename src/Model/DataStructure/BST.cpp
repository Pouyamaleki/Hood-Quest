#include "BST.h"

// BSt construvtor implementation
BST::BST()
{
    root = nullptr;
}

// Bst destructor Implementation
BST::~BST()
{
    destroyHelper(root);
}

// destroy helper method implementation
void BST::destroyHelper(BSTNode *node)
{
    if (node == nullptr)
        return;

    // destroy both left and right nodes
    destroyHelper(node->left);
    destroyHelper(node->right);
    delete node;
}

// insert helper method implementation
BSTNode *BST::insertHelper(BSTNode *node, const string &username, long int score)
{
    // check if the node is not valid
    if (node == nullptr)
        return new BSTNode(username, score);

    // add the node to the right place (Left or Roght)
    if (username < node->username)
        node->left = insertHelper(node->left, username, score);
    else if (username > node->username)
        node->right = insertHelper(node->right, username, score);

    return node;
}

// search helper method implementation
BSTNode *BST::searchHelper(BSTNode *node, const string &username) const
{
    // check the node and the user validation
    if (node == nullptr || node->username == username)
        return node;

    // search left node from the current node
    if (username < node->username)
        return searchHelper(node->left, username);

    // search the right node from the current node
    return searchHelper(node->right, username);
}

// insert method implementation
void BST::insert(const string &username, long int score)
{
    // start the search from the root to find the right place
    root = insertHelper(root, username, score);
}

// search method implementation
BSTNode *BST::search(const string &username) const
{
    // start the search from the root
    return searchHelper(root, username);
}

// update score method implementation
bool BST::updateScore(const string &username, long int newScore)
{
    // find the node
    BSTNode *node = search(username);

    // if the node is not valid
    if (node == nullptr)
        return false;

    node->score = newScore;
    return true;
}

// clear method implementation
void BST::clear()
{
    destroyHelper(root);
    root = nullptr;
}