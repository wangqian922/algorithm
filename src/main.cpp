#include "static/algo.h"
#include "static/DataStructures.h"
#include <iostream>

int main(int argc, char *argv[])
{
    std::shared_ptr<BinaryTree> binTree = std::make_shared<BinaryTree>();
    binTree->root = std::make_shared<BinaryTreeNode>(1);
    binTree->root->left = std::make_shared<BinaryTreeNode>(2);
    binTree->root->right = std::make_shared<BinaryTreeNode>(3);
    binTree->root->left->right = std::make_shared<BinaryTreeNode>(4);
    binTree->root->right->left = std::make_shared<BinaryTreeNode>(5);
    binTree->root->right->right = std::make_shared<BinaryTreeNode>(6);

    BinaryTree::ineorderTraverse(binTree->root);
}
