#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node *left, *right;
    Node(int v)
    {
        data = v;
        left = right = NULL;
    }
};

void printPostorder(Node *node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);

    cout << node->data << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    cout << "Postorder traversal of binary tree is: \n";
    printPostorder(root);

    return 0;
}

// https://www.geeksforgeeks.org/postorder-traversal-of-binary-tree/