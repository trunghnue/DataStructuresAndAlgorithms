#include <iostream>

using namespace std;

struct Node
{
    int data;
    struct Node *left, *right;
    Node(int v)
    {
        data = v;
        left = right = NULL;
    }
};

void printInorder(Node *node)
{
    if (node == NULL)
        return;

    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    cout << "Inorder traversal of binary tree is: \n";
    printInorder(root);
    cout << endl;

    return 0;
}

// https://www.geeksforgeeks.org/inorder-traversal-of-binary-tree/