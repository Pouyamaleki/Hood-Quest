#include "BST.h"

BST::BST()
{
    root = nullptr;
}

BSTNode *BST::insertHelper(BSTNode *node, const string &username, long int score)
{
    if (node == nullptr)
        return new BSTNode(username, score);

    if (username < node->username)
        node->left = insertHelper(node->left, username, score);
    else if (username > node->username)
        node->right = insertHelper(node->right, username, score);

    return node;
}

BSTNode *BST::searchHelper(BSTNode *node, const string &username) const
{
    if (node == nullptr || node->username == username)
        return node;

    if (username < node->username)
        return searchHelper(node->left, username);

    return searchHelper(node->right, username);
}

void BST::insert(const string &username, long int score)
{
    root = insertHelper(root, username, score);
}