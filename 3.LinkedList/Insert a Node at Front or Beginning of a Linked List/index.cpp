#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

void insertAtFront(Node **head, int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}

void printList(Node *node)
{
    while (node != NULL)
    {
        cout << " " << node->data;
        node = node->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;

    insertAtFront(&head, 1);
    insertAtFront(&head, 2);
    insertAtFront(&head, 3);
    insertAtFront(&head, 4);
    insertAtFront(&head, 5);
    insertAtFront(&head, 6);

    cout << "After inserting Nodes at their front: ";
    printList(head);

    return 0;
}

// https://www.geeksforgeeks.org/insert-a-node-at-front-beginning-of-a-linked-list/