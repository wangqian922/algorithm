#include "static/DataStructures.h"

void BinaryTree::preorderTraverse(std::shared_ptr<BinaryTreeNode> root)
{
    std::shared_ptr<BinaryTreeNode> cur = root;
    std::cout << "value is " << root->value << std::endl;

    if (root->left != nullptr)
        preorderTraverse(root->left);

    if (root->right != nullptr)
        preorderTraverse(root->right);
}

void BinaryTree::ineorderTraverse(std::shared_ptr<BinaryTreeNode> root)
{
    std::shared_ptr<BinaryTreeNode> cur = root;

    if (root->left != nullptr)
        ineorderTraverse(root->left);

    std::cout << "value is " << root->value << std::endl;

    if (root->right != nullptr)
        ineorderTraverse(root->right);
}

void BinaryTree::posteorderTraverse(std::shared_ptr<BinaryTreeNode> root)
{
    std::shared_ptr<BinaryTreeNode> cur = root;
    if (root->left != nullptr)
        posteorderTraverse(root->left);

    if (root->right != nullptr)
        posteorderTraverse(root->right);

    std::cout << "value is " << root->value << std::endl;
}

void testBinaryTree()
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