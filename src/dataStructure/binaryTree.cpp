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
        preorderTraverse(root->left);

    std::cout << "value is " << root->value << std::endl;

    if (root->right != nullptr)
        preorderTraverse(root->right);
}

void BinaryTree::posteorderTraverse(std::shared_ptr<BinaryTreeNode> root)
{
    std::shared_ptr<BinaryTreeNode> cur = root;
    if (root->left != nullptr)
        preorderTraverse(root->left);

    if (root->right != nullptr)
        preorderTraverse(root->right);

    std::cout << "value is " << root->value << std::endl;
}
